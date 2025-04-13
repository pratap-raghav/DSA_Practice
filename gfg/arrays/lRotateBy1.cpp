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

void leftRotateBy1(vector<int> &v)
{
    int size = v.size();
    int f = v[0];
    for (int i = 0; i < size - 1; i++)
    {
        v[i] = v[i + 1];
    }
    v[size - 1] = f;
}

int main()
{
    vector<int> v = {1, 2, 3, 4, 5, 6, 7, 8, 9, 0};
    printVector(v);
    leftRotateBy1(v);
    printVector(v);
    return 0;
}