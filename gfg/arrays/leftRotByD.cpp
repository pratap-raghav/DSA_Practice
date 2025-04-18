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

// Approach 2 Auxilary space = Th(1)
void reverse(vector<int> &v, int start, int end)
{
    while (start < end)
    {
        int temp = v[start];
        v[start] = v[end];
        v[end] = temp;
        start++;
        end--;
    }
}

void leftRotateByD(vector<int> &v, int d)
{
    int size = v.size();
    d=d%size;
    reverse(v, 0, d - 1);
    reverse(v, d, size - 1);
    reverse(v, 0, size - 1);
}


int main()
{
    vector<int> v = {1, 2, 3, 4, 5, 6};
    printVector(v);
    leftRotateByD(v, 2);
    printVector(v);
    return 0;
}