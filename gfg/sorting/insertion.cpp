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

void insertionSort(vector<int> &v)
{
    int size = v.size();

    for (int i = 1; i < size; i++)
    {
        int key = v[i];
        int j = i - 1;

        while (j >= 0 && key < v[j])
        {
            v[j + 1] = v[j];
            j--;
        }
        v[j + 1] = key;
    }
}

int main()
{
    vector<int> v = {4, 2, 3, 8, 7, 5};
    printVector(v);
    insertionSort(v);
    printVector(v);
    return 0;
}