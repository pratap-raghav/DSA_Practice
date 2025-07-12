#include <bits/stdc++.h>
using namespace std;

void printVector(vector<int> &v)
{
    if (v.empty())
        return;
    int size = v.size();
    cout << "Array-\t";
    for (int i = 0; i < size; i++)
    {
        cout << v[i] << "\t";
    }
    cout << endl;
}

void count_sort(vector<int> &v)
{
    if (v.empty())
        return;

    int k = *max_element(v.begin(), v.end());

    vector<int> count(k + 1, 0);
    for (int element : v)
    {
        count[element]++;
    }
    int index = 0;
    for (int i = 0; i <= k; i++)
    {
        for (int j = 0; j < count[i]; j++)
        {
            v[index++] = i;
        }
    }
}

int main()
{
    vector<int> v = {10, 80, 30, 90, 40, 50, 70};
    printVector(v);
    count_sort(v);
    printVector(v);

    return 0;
}
