#include <bits/stdc++.h>
using namespace std;

void printVector(vector<int> &v, int size)
{
    cout << "Array-\t";
    for (int i = 0; i < size; i++)
    {
        cout << v[i] << "\t";
    }
    cout << endl;
}

int removeDuplicates(vector<int> &v, int size)
{
    int currU = 0;

    if (size == 0)
    {
        return currU;
    }

    for (int i = 1; i < size; i++)
    {
        if (v[currU] != v[i])
        {
            currU++;
            v[currU] = v[i];
        }
    }
    return currU + 1;
}

int main()
{
    // vector<int> v = {10, 20, 20, 30, 30, 30, 30, 40};
    vector<int> v = {10, 10, 10};

    int size = v.size();

    cout << size << endl;
    printVector(v, size);

    size = removeDuplicates(v, size);
    
    cout << size << endl;
    printVector(v, size);

    return 0;
}