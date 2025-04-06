#include <bits/stdc++.h>
using namespace std;

int countDigits(int n) {
    // Your code here
    if(n==0) return 0;
    return 1+countDigits(n/10);
}

int main(){
    cout<<countDigits(54025);
    return 0;
}