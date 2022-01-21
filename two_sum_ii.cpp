#include <iostream>
#include <vector>
using namespace std;

vector<int> twoSum(vector<int> &numbers, int target)
{
    vector<int> output;
    int upper_bound=numbers.size()-1, lower_bound = 0;
    while(lower_bound <= upper_bound)
    {
        if ((numbers[lower_bound] + numbers[upper_bound]) < target){
            lower_bound++;
        }
        else if ((numbers[lower_bound] + numbers[upper_bound]) > target){
            upper_bound--;
        }
        else{
            output = {lower_bound+1, upper_bound+1};
            return output;
        }
    }
    return {-1, -1};
}
int main()
{
    vector<int> vec1 = {1, 2, 3, 4};

    vector<int> vec2 = twoSum(vec1, 3);

    for (int i = 0; i < vec2.size(); i++)
    {
        cout << vec2[i];
    }

    return 0;
}