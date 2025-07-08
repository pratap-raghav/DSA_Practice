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
    while (true)
    {
        do
        {
            i++;
        } while (v[i] < key);
        do
        {
            j--;
        } while (v[j] > key);
        if (i >= j)
        {
            return j;
        }
        swap(v[i], v[j]);
        printVector(v);
    }
}

int main()
{
    vector<int> v = {8, 4, 7, 9, 3, 10, 5};
    printVector(v);
    hoares_partition(v, 0, v.size() - 1);
    printVector(v);

    return 0;
}