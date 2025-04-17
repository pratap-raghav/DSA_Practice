#include <bits/stdc++.h>
using namespace std;

bool isSorted(vector<int> v)
{
    int size = v.size();
    int cMax = v.at(0);
    for (int i = 1; i < size; i++)
    {
        if (cMax > v.at(i))
        {
            return false;
        }
        cMax = v.at(i);
    }
    return true;
}

int isSorted(int arr[], int n)
{
    int flagA = 1, flagD = 1, curr = arr[0];

    for (int i = 1; i < n; i++)
    {

        if (curr > arr[i])
        {
            flagA = 0;
        }
        curr = arr[i];
    }
    curr = arr[0];

    for (int i = 1; i < n; i++)
    {

        if (curr < arr[i])
        {
            flagD = 0;
        }
        curr = arr[i];
    }
    return (flagA || flagD);
}

int main()
{
    vector<int> v = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    cout << isSorted(v);
    return 0;
}