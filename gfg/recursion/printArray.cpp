#include <bits/stdc++.h>
using namespace std;

void printArrayRecursively(int arr[],int n){
    if(n==0) return;
    printArrayRecursively(arr, n-1);
    cout<<" "<<arr[n-1];
}

int main(){

    return 0;
}