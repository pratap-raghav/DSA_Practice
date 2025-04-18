#include <bits/stdc++.h>
using namespace std;

int tSearch(vector<int> &v, int &element, int start, int end)
{
    if (start <= end)
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
            // end = mid1 - 1;
            return tSearch(v, element, start, mid1 - 1);
        }

        else if (v[mid2] < element)
        {
            // start = mid2 + 1;
            return tSearch(v, element, mid2 + 1, end);
        }

        else
        {
            // start = mid1 + 1;
            // end = mid2 - 1;
            return tSearch(v, element, mid1 + 1, mid2 - 1);
        }
        // return tSearch(v, element, start, end);
    }

    return -1;
}

int main()
{
    vector<int> v = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int element = 6;
    cout << tSearch(v, element, 0, v.size() - 1);
    return 0;
}