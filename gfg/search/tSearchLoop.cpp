#include <bits/stdc++.h>
using namespace std;

int tSearch(vector<int> &v, int element)
{
    int start = 0, end = v.size() - 1;
    while (start <= end)
    {
        int mid1 = start + (end - start) / 3;
        int mid2 = end - (end - start) / 3;
        if (v[mid1] == element)
        {
            return mid1;
        }
        if (v[mid2] == element)
        {
            return mid2;
        }
        if (element < v[mid1])
        {
            end = mid1 - 1;
        }
        else if (v[mid2] < element)
        {
            start = mid2 + 1;
        }
        else
        {
            start = mid1 + 1;
            end = mid2 - 1;
        }
    }
    return -1;
}

int main()
{
    vector<int> v = {1,2,3,4,5,6,7,8,9};
    cout<<tSearch(v,5);
    return 0;
}