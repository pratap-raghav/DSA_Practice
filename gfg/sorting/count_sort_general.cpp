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
    int size = v.size();

    vector<int> count(k + 1, 0);
    for (int element : v)
    {
        count[element]++;
    }

    for (int i = 1; i <= k; i++)
    {
        count[i] = count[i - 1] + count[i];
    }

    vector<int> output(size);
    for (int i = size - 1; i >= 0; i--)
    {
        output[count[v[i]] - 1] = v[i];
        count[v[i]]--;
    }

    for (int i = 0; i < size; i++)
    {
        v[i] = output[i];
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
