#include <bits/stdc++.h>
using namespace std;

bool isSorted(vector<int> v){
    int size = v.size();
    int cMax = v.at(0);
    for(int i=1; i<size;i++){
        if(cMax>v.at(i)){
            return 0;
        }
        cMax = v.at(i);
    }
    return 1;
}

int main(){
    vector<int> v = {1,2,3,4,5,6,7,8,9};
    cout<<isSorted(v);
    return 0;
}