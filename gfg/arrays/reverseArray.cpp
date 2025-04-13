#include <bits/stdc++.h>
using namespace std;

void reverse(vector <int> &v){
    int start = 0, end = v.size()-1;
    while (start < end)
    {
        int temp = v[start];
        v[start] = v[end];
        v[end]=temp;
        start++; end--;
    }
}

void printVector(vector<int> &v){
    int size = v.size();
    cout<<"Array-\t";
    for(int i=0; i<size; i++){
        cout<<v[i]<<"\t";
    }
    cout<<endl;
}

int main(){
    vector<int> v = {12, 43, 65, 13, 10, -1, -43, 159, 20, 199};
    printVector(v);
    reverse(v);
    printVector(v);
    return 0;
}