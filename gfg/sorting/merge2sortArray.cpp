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

void mergeSortedVector(vector<int> &v1, vector<int> &v2)
{
    int size1 = v1.size(), size2 = v2.size(), i = 0, j = 0;
    vector<int> temp;
    printVector(v1);
    printVector(v2);
    while (i < size1 && j < size2)
    {
        if (v1[i] <= v2[j])
        {
            temp.push_back(v1[i]);
            i++;
        }
        else
        {
            temp.push_back(v2[j]);
            j++;
        }
    }
    while (i < size1)
    {
        temp.push_back(v1[i]);
        i++;
    }
    while (j < size2)
    {
        temp.push_back(v2[j]);
        j++;
    }

    printVector(temp);
}

int main()
{
    vector<int> v1 = {1, 2, 3, 4, 6, 8, 9, 10}, v2 = {2, 9, 10, 15, 18, 19};
    mergeSortedVector(v1, v2);
    return 0;
}