#include <bits/stdc++.h>
using namespace std;

int immediateGreater(int arr[], int n, int x){
    int element = -1, diff = INT_MAX;
    for(int i = 0; i < n; i++){
        if(arr[i]>x){
            if((arr[i]-x) < diff){
                diff = arr[i]-x;
                element = arr[i];
            }
        }
    }
    return element;
}

int main(){

    return 0;
}