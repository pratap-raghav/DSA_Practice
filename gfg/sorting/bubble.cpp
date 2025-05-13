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

void bubbleSort(vector<int> &v){

    int size = v.size();
    for(int i=0; i<size; i++){

        bool flag = false;

        for(int j=0; j<size-i-1; j++){

            if(v[j]>v[j+1]){
                flag = true;
                int temp = v[j];
                v[j] = v[j+1];
                v[j+1] = temp;
            }
        }
        if(flag==false)
            return;
    }

}

int main(){
    vector<int> v = {4,2,3,8,7,5};
    printVector(v);
    bubbleSort(v);
    printVector(v);
    return 0;
}