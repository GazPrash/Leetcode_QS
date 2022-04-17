#include<bits/stdc++.h>
using namespace std;


class Twitter {
public:
    unordered_map<int, stack<int>> userFeed;
    unordered_map<int, vector<int>> followers;
    unordered_map<int, vector<int>> following;
    
    void postTweet(int userId, int tweetId) {
        auto follower_list = followers[userId];
        for (int user_id : follower_list){
            if (user_id == -1) continue;
            auto feed = userFeed[user_id];
            feed.push(tweetId);
        }
    }
    
    vector<int> getNewsFeed(int userId) {
        auto feed = userFeed[userId];
        vector<int> out;
        int tweets = 0;
        while (!feed.empty() || (tweets < 10)){
            out.push_back(feed.top());
            tweets++;
            feed.pop();
        }
        return out;
    }
    
    void follow(int followerId, int followeeId) {
        following[followerId].push_back(followeeId);
        followers[followeeId].push_back(followerId);
    }
    
    void unfollow(int followerId, int followeeId) {
        auto following_list = following[followerId];
        for (int user_id : following_list){
            if (user_id == followeeId) user_id = -1;
        }

        auto follower_list = followers[followeeId];
        for (int user_id : follower_list){
            if (user_id == followerId) user_id = -1;
        }
    }
};



int main(){
    
    return 0;
}

// Line 175: Char 16: runtime error: reference binding to misaligned address 0xbebebebebebec0ba for 
// type 'int', which requires 4 byte alignment (stl_deque.h)
// 0xbebebebebebec0ba: note: pointer points here
// <memory cannot be printed>
// SUMMARY: UndefinedBehaviorSanitizer:


/*


*/