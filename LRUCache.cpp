#include<bits/stdc++.h>
using namespace std;

struct DLNode{
    int val;
    DLNode* next = nullptr;
    DLNode* back = nullptr;

};

class LRUCache {
public:
    unordered_map<int, DLNode*> hmap;
    int max_cap;
    int cache_storage = 0;
    DLNode* lru;
    DLNode* mru;

    LRUCache(int capacity) {
        max_cap = capacity;
        lru = nullptr;
        mru = nullptr;
    }
    
    int get(int key) {
        
        if (!hmap[key]) return -1;
        else{
            auto ret_val_node = hmap[key];
            int out = ret_val_node->val;

            if (ret_val_node == lru){

                if (!ret_val_node->next){
                    mru = ret_val_node;
                    lru = ret_val_node;
                    return out;

                }
                else{
                    lru = ret_val_node->next;
                    if (ret_val_node->next->next){
                        lru->next = ret_val_node->next->next;
                        ret_val_node->back = mru;
                    }
                    else{
                        lru->next = ret_val_node;
                        ret_val_node->back = lru;
                    }
                }
            }
            
            ret_val_node->next = nullptr;
            mru = ret_val_node;
            

            return out;

        }

    }
    
    void put(int key, int value) {
        if (!hmap[key]){
            if (cache_storage == max_cap){
                auto store_next_lru = lru->next;
                auto prev_lru = lru;
                hmap[lru->val] = nullptr;
                lru = store_next_lru;
                delete prev_lru;

                cache_storage--;
                
            }

            DLNode* new_node = new DLNode;
            new_node->val = value;
            hmap[key] = new_node;
            
            if (!mru){
                mru = new_node;
            }
            else{
                auto existing_mru = mru;
                existing_mru->next = new_node;
                new_node->next = nullptr;
                new_node->back = existing_mru;
                mru = new_node;
                
            }
            if (!lru) lru = new_node;
            cache_storage++;
            
            return;

        }
        auto existing_node = hmap[key];
        existing_node->val = value;

    }
};



int main(){
    
    return 0;
}