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

void merge(vector<int> &v, int low, int mid, int high)
{
    int i = low, j = mid + 1;
    vector<int> temp;
    while (i <= mid && j <= high)
    {
        if (v[i] <= v[j])
        {
            temp.push_back(v[i]);
            i++;
        }
        else
        {
            temp.push_back(v[j]);
            j++;
        }
    }
    while (i <= mid)
    {
        temp.push_back(v[i]);
        i++;
    }
    while (j <= high)
    {
        temp.push_back(v[j]);
        j++;
    }
    for (int i = low; i <= high; i++)
    {
        v[i] = temp[i - low];
    }
}

int main()
{
    vector<int> v = {1, 2, 3, 4, 12, 16, 17, 19, 4, 5, 7, 8, 13, 16, 21, 24, 25, 29};
    int low = 5, mid = 7, high = v.size() - 1;
    printVector(v);
    merge(v, low, mid, high);
    printVector(v);
    return 0;
}