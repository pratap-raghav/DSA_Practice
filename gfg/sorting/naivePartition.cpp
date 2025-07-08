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

void naive_partition(vector<int> &v, int l, int h, int p)
{

    vector<int> temp;
    int key = v[p];
    for (int i = l; i <= h; i++)
    {
        if (v[i] <= key && i != p)
        {
            temp.push_back(v[i]);
        }
    }
    temp.push_back(key);
    for (int i = l; i <= h; i++)
    {
        if (v[i] > key)
        {
            temp.push_back(v[i]);
        }
    }
    for (int i = l; i <= h; i++)
    {
        v[i] = temp[i - l];
    }
}

int main()
{
    vector<int> v = {10, 80, 30, 90, 40, 50, 70};
    printVector(v);
    naive_partition(v, 0, v.size() - 1, 5);
    printVector(v);

    return 0;
}