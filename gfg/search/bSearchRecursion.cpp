#include <bits/stdc++.h>
using namespace std;

int bSearch(vector<int> &v, int &element, int s, int e)
{
    if (s <= e)
    {

        int mid = (s + e) / 2;

        if (v[mid] == element)
            return mid;

        else if (v[mid] < element)
        {
            // s = mid + 1;
            // bSearch(v, element, s, e);
            return bSearch(v, element, mid + 1, e);
        }
        else if (v[mid] > element)
        {
            // e = mid - 1;
            // bSearch(v, element, s, e);
            return bSearch(v, element, s, mid - 1);
        }
        // return bSearch(v,element,s,e);
    }
    return -1;
}

int main()
{
    vector<int> v = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int element = 9;
    cout << bSearch(v, element, 0, v.size() - 1);
    return 0;
}