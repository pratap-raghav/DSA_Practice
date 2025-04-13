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

// // Approach 1 Auxilary space = Th(D)
// void leftRotateByD(vector<int> &v, int d)
// {
//     int size = v.size();
//     vector<int> temp;

//     for (int i = 0; i < d; i++)
//     {
//         temp.push_back(v[i]);
//     }

//     for (int i = d; i < size; i++)
//     {
//         v[i - d] = v[i];
//     }

//     for (int i = 0; i < d; i++)
//     {
//         v[size-d+i] = temp[i];
//     }
// }

int main()
{
    vector<int> v = {1, 2, 3, 4, 5};
    printVector(v);
    leftRotateByD(v, 2);
    printVector(v);
    return 0;
}