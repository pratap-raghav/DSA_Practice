#include <bits/stdc++.h>
using namespace std;

int revNum(int n, int rev){
    if(n==0) return rev;
    return revNum(n/10, rev*10+n%10);
}

int power(int n, int p){
    if(p==0) return 1;
    return n*power(n,p-1);
}

int reverseExponentiation(int n) {
    return power(n, revNum(n,0));
}

int main(){
    cout<<reverseExponentiation(8);
    return 0;
}