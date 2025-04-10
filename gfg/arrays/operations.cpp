#include <bits/stdc++.h>
using namespace std;

int search(int* arr, int n, int element){
    for(int i=0; i<n; i++){
        if(arr[i]==element){
            return i;
        }
    }
    return -1;
}

int main(){
    int arr[] = {1,2,3,4,5,6,7,8,9,0};
    int index = search(arr, 10, 8);
    cout<<index;
    return 0;
}