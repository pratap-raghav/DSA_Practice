#include <bits/stdc++.h>
using namespace std;

// //Naive approach Time Complexity : O(n^2) Auxiliary Space : O(1)
// int equilibriumInx(vector<int> v)
// {
//     int size = v.size();
//     for (int i = 0; i < size; i++)
//     {
//         int l = 0, r = 0;
//         for (int j = 0; j < i; j++)
//         {
//             l = l + v[j];
//         }
//         for (int j = i + 1; j < size; j++)
//         {
//             r = r + v[j];
//         }
//         cout << i << "(" << v[i] << "):\t" << l << "\t" << r << endl;
//         if (l == r)
//             return i;
//     }
//     return -1;
// }

//Approach 2 Time Complexity : O(n) Auxiliary Space : O(1)
int equilibriumInx(vector<int> v)
{
    int size = v.size(), sum = 0, l = 0;
    for (int i = 0; i < size; i++)
    {
        sum += v[i];
    }
    for (int i = 0; i < size; i++)
    {
        sum -= v[i];
        if (l == sum)
        {
            return i;
        }
        l += v[i];
    }
    return -1;
}

int main()
{
    vector<int> v = {-7, 1, 5, 2, -4, 3, 0};
    cout << equilibriumInx(v) << endl;
    return 0;
}