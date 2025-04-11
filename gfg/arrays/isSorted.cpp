#include <bits/stdc++.h>
using namespace std;

bool isSorted(vector<int> v){
    int size = v.size();
    int cMax = v.at(0);
    for(int i=1; i<size;i++){
        if(cMax>v.at(i)){
            return false;
        }
        cMax = v.at(i);
    }
    return true;
}

int main(){
    vector<int> v = {1,2,3,4,5,6,7,8,9};
    cout<<isSorted(v);
    return 0;
}