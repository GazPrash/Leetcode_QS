#include <iostream>
using namespace std;

int isBadVersion(int x)
{
    if (x == 2)
    {
        return true;
    }
    return false;
}

int firstBadVersion(int n)
{
    long old_ver = 1, new_ver = n;
    while (old_ver <= new_ver)
    {
        int mean = (old_ver + new_ver) / 2;

        if (isBadVersion(mean))
        {
            new_ver = mean - 1;
        }
        else
        {
            old_ver = mean + 1;
        }
    }

    return old_ver;
}

int main()
{
    cout << firstBadVersion(2);
    return 0;
}