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


void selectionSort(vector<int> v){
    int size = v.size();
    vector<int> temp;
    
    for(int i = 0; )
}


int main(){
    vector<int> v = {4,2,3,8,7,5};
    printVector(v);
    selectionSort(v);
    printVector(v);
    return 0;
}