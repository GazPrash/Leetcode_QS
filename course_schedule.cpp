#include<bits/stdc++.h>
using namespace std;

struct Node{
    int val;
    Node* next;

};

class Solution {
public:
    bool rec_func(unordered_set<int> &preq, unordered_set<int> &to_learn, unordered_map<int, int> course, int k){
        cout<<k<<endl;
        auto pre_req_inter = course.find(k);
        if (pre_req_inter == course.end()) return true;
        auto it = to_learn.find(pre_req_inter->second);
        if (it != to_learn.end()){
            cout<<(course[*it])<<"-----"<<k<<endl;
            if (course[*it] == k) return false;
            else if (course.find(course[*it]) == course.end()) return true;
            else return rec_func(preq, to_learn, course, pre_req_inter->second);
        }
        else return true;
    }

    bool canFinish(int numCourses, vector<vector<int>>& prerequisites) {
        unordered_map<int, int> course;
        unordered_set<int> preq;
        unordered_set<int> to_learn;
        vector<int> check;

        for (auto vec : prerequisites){
            if (vec[0] == vec[1]) return false;
            if (preq.find(vec[0]) != preq.end()){
                check.push_back(vec[0]);
            }
            course[vec[0]] = vec[1];
            to_learn.insert(vec[0]);
            preq.insert(vec[1]);
        }

        for (int k : check){
            if (!rec_func(preq, to_learn, course, k)) return false;
        }
        return true;

    }
};


int main(){
    
    return 0;
}