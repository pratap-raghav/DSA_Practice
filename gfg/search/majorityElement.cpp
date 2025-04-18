#include <bits/stdc++.h>
using namespace std;

//moore majority voting algorithm

int majorityElement(vector<int>& arr) {
    // code here
    int count = 0, element, size = arr.size();
    for(int i = 0; i < size; i++){
        if(count == 0){
            count = 1; element = arr[i];
        }
        else if(arr[i]==element) count++;
        else count--;
    }
    count = 0;
    for(int i = 0; i < size; i++){
        if(arr[i] == element)
            count++;
    }
    
    if(count > size/2)
        return element;
        
    return -1;
    
}

int main(){

    return 0;
}