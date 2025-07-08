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

void lomuto_partition(vector<int> &v, int l, int h)
{

    int key = v[h];
    int i = l - 1;
    for (int j = l; j < h; j++)
    {
        if (v[j] < key)
        {
            i++;
            swap(v[i], v[j]);
        }
    }
    swap(v[i + 1], v[h]);
}

int main()
{
    vector<int> v = {10, 80, 30, 90, 40, 50, 70};
    printVector(v);
    lomuto_partition(v, 0, v.size() - 1);
    printVector(v);

    return 0;
}