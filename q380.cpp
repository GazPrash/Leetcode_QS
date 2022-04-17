#include<bits/stdc++.h>
using namespace std;

class RandomizedSet {
public:
    unordered_set<int> random_set;
    int set_sz = 0;
    bool insert(int val) {
        if (random_set.find(val) == random_set.end()){
            random_set.insert(val);
            set_sz++;
            return true;
        }

        return false;
    }
    
    bool remove(int val) {
        if (random_set.find(val) != random_set.end()){
            random_set.erase(val);
            set_sz--;
            return true;
        }
        return false;
    }
    
    int getRandom() {
        if (set_sz == 0) return -1;
        int rand_ind = rand()%set_sz;
        auto bgit = random_set.begin();
        for (int i = 0; i < rand_ind; i++){
            bgit++;
        }

        return *bgit;
    }
};


int main(){
    
    return 0;
}