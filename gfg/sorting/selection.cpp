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

// // Naive implementation
// void selectionSort(vector<int> &v)
// {
//     int size = v.size();
//     vector<int> temp;

//     for (int i = 0; i < size; i++)
//     {

//         int min = 0;
//         for (int j = 1; j < size; j++)
//         {
//             if (v[min] > v[j])
//             {
//                 min = j;
//             }
//         }
//         temp.push_back(v[min]);
//         v[min] = INT_MAX;
//     }

//     for (int i = 0; i < size; i++)
//     {
//         v[i] = temp[i];
//     }
// }

void selectionSort(vector<int> &v)
{
    int size = v.size();

    for (int i = 0; i < size - 1; i++)
    {

        int min = i;
        for (int j = i + 1; j < size; j++)
        {
            if (v[min] > v[j])
            {
                min = j;
            }
        }
        int temp = v[i];
        v[i] = v[min];
        v[min] = temp;
    }
}

int main()
{
    vector<int> v = {4, 2, 3, 8, 7, 5};
    printVector(v);
    selectionSort(v);
    printVector(v);
    return 0;
}