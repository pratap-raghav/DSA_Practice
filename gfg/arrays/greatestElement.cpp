#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v = {12, 43, 65, 13, 100, -1, -43, 159};
    int size = v.size();
    int maximum = INT_MIN;

    for (int i = 0; i < size; i++)
    {
        maximum = maximum < v.at(i) ? v.at(i) : maximum;
    }
    cout << maximum;
    return 0;
}