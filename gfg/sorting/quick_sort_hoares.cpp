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
    }
}

void quick_sort(vector<int> &v, int l, int h)
{
    if (l < h)
    {
        int partition = hoares_partition(v, l, h);
        printVector(v);
        quick_sort(v, l, partition);
        quick_sort(v, partition + 1, h);
    }
}

int main()
{
    vector<int> v = {10, 80, 30, 90, 40, 50, 70};
    printVector(v);
    quick_sort(v, 0, v.size() - 1);
    printVector(v);

    return 0;
}