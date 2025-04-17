#include <bits/stdc++.h>
using namespace std;

int immediateSmaller(int arr[], int n, int x)
{
    // your code here
    int element = -1, diff = INT_MAX;

    for (int i = 0; i < n; i++)
    {

        if (arr[i] < x)
        {
            if ((x - arr[i]) < diff)
            {
                diff = x - arr[i];
                element = arr[i];
            }
        }
    }
    return element;
}

int main()
{

    return 0;
}