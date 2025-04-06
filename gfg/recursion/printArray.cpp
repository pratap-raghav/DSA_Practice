#include <bits/stdc++.h>
using namespace std;

void printArrayRecursively(int arr[],int n){
    if(n==0) return;
    printArrayRecursively(arr, n-1);
    cout<<" "<<arr[n-1];
}

int main(){
    int arr[] = {1,2,3,4,5};
    printArrayRecursively(arr, 5);
    return 0;
}