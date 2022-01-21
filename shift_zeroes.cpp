#include<iostream>
#include<vector>
using namespace std;

void shift(vector<int> &nums){
    int remove_count = 0;
    for (int i = 0; i < nums.size(); i++)
    {
        if (nums[i] == 0){
            nums.erase(nums.begin()+ (i));
            remove_count++;
            i--;
        }
    }
    while (remove_count != 0){
        nums.push_back(0);
        remove_count--;
    }
    
}

int main(){
    vector<int> vec1 = {0, 0, 1};
    shift(vec1);

    for (int i = 0; i < vec1.size(); i++)
    {
        cout<<vec1[i]<<" | ";
    }
    return 0;
}