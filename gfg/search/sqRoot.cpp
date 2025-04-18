#include <bits/stdc++.h>
using namespace std;

int floorSqrt(int n) {
    // Your code goes here
    if(n == 1) return 1;
    int low = 1, high = n, ans = 0;
    
    while(low<=high){
        
        int mid = (low+high)/2;
        
        if(mid*mid == n)
            return mid;
            
        else if(mid*mid < n){
            ans = mid;
            low = mid + 1;
        }
        else
            high = mid - 1;
    }
    
    return ans;
}

int main(){

    return 0;
}