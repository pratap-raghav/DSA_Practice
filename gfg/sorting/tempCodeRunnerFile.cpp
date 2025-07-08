#include <bits/stdc++.h>
using namespace std;

void printVector(vector<int> &v)
{
    int size = v.size();
    cout << "Array-\t";
    for (int i = 0; i < size; i++)
    {
        cout << v[i] << "\t";
    }
    cout << endl;
}

int hoares_partition(vector<int> &v, int l, int h)
{

    int key = v[l], i = l - 1, j = h + 1;