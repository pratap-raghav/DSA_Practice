#include <bits/stdc++.h>
using namespace std;

int countOnes(int arr[], int N)
{
    
    // Your code here
    int s = 0, e = N-1;
    while(s<=e){
        int mid = (s+e)/2;
        if(arr[mid]==1)
            s = mid+1;
        else
            e = mid - 1;
    }
    return s;
}

int main(){

    return 0;
}