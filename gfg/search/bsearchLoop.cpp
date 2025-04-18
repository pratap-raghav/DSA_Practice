#include <bits/stdc++.h>
using namespace std;

int bSearch(vector<int> &v, int element)
{
    int size = v.size();
    int s = 0, e = size - 1;
    while (s <= e)
    {
        int mid = (s + e) / 2;
        if (v[mid] == element)
        {
            return mid;
        }
        else if (v[mid] < element)
        {
            s = mid + 1;
        }
        else if (v[mid] > element)
        {
            e = mid - 1;
        }
    }
    return -1;
}

int main()
{
    vector<int> v = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    cout << bSearch(v, 10);
    return 0;
}