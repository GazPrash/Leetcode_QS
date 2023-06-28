#include <bits/stdc++.h>
using namespace std;

class NumberContainers
{
public:
  unordered_map<int, int> numTable;
  unordered_map<int, vector<int>> numTree;
 
  NumberContainers()
  {
  }
  void change_tree(int n, int index){
    auto vec = numTree[n];
    auto trackit = vec.begin();
    for (int i = 0; i < vec.size(); i++){
      int k = vec[i];
      if (k == index){
        vec.erase(trackit);
      }
      trackit++;
    }
    numTree[n] = vec;
  }

  void change(int index, int number)
  {
    if (numTable.find(index) != numTable.end()){
      int ognum = numTable[index];
      if (number == ognum){
        numTree[ognum].push_back(index);
      } else {
        change_tree(ognum, index);
      }
    }
    numTable[index] = number;
    numTree[number].push_back(index);
  }

  int find(int number)
  {
    if (numTree.find(number) == numTree.end()) return -1;
    if (numTree[number].size() == 0) return -1;
    int out = INT_MAX;
    auto vec = numTree[number];
    for (int k : vec) out = min(out, k);
    return out;
  }
};
