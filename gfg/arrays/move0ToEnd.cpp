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

// // Approach 1 Time: O(n * (no.of 0s)), Aux: Th(1) (NOT WORKING...)
// void move0ToEnd(vector<int> &v)
// {
//     int size = v.size(), loc = 0;

//     for (int i = 0; i < size; i++)
//     {
//         if(v[i] == 0){
//             for(int j=i; j<size; j++){
//                 v[j]=v[j+1];
//             }
//             v[size-1]=0;

//         }
//     }
// }


// Approach 2 Time: O(n), Aux: Th(1)
void move0ToEnd(vector<int> &v)
{
    int size = v.size(), loc = 0;

    for (int i = 0; i < size; i++)
    {
        if (v[i] != 0)
        {
            v[loc] = v[i];
            loc++;
        }
    }
    for (int i = loc; i < size; i++)
    {
        v[i] = 0;
    }
}


// // Approach 3(from GFG) Time: O(n), Aux: Th(1)
// void move0ToEnd(vector<int> &v){
//     int size = v.size(), loc = 0;

//     for (int i = 0; i < size; i++)
//     {
//         if (v[i] != 0)
//         {   
//             int temp = v[loc];
//             v[loc] = v[i];
//             v[i] = temp;
//             loc++;
//         }
//     }
// }

int main()
{
    vector<int> v = {1,9,8,4,0,0,2,7,0,6,0,9};
    printVector(v);
    move0ToEnd(v);
    printVector(v);

    return 0;
}