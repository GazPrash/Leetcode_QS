#include <bits/stdc++.h>
using namespace std;

bool isIsomorphic(string s, string t)
{
    map<char, int> m1;
    map<char, int> m2;

    for (int i = 0; i < s.length(); i++)
    {
        if (m1[s[i]] != m2[t[i]]){
            return false;
        }

        m1[s[i]] = i+1;
        m2[t[i]] = i+1;

    }

    // for (auto it = m1.begin(), it2 = m2.begin(); (it != m1.end() && it2 != m2.end()); it++, it2++)
    // {
    //     if (it->second != it2->second){
    //         return false;
    //     }
    // }

    return true;
}

int main()
{

    return 0;
}