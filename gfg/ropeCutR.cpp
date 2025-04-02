#include <bits/stdc++.h>
using namespace std;

int cutRope(int n, int a, int b, int c, int parts){
    if(n==0){
        return parts;
    }
    if(n<0){
        return -1;
    }
    return max({
        cutRope(n-a,a,b,c,parts++),
        cutRope(n-b,a,b,c,parts++),
        cutRope(n-c,a,b,c,parts++)
    });
}

int main(){
    cout<<cutRope(23,12,9,11,0);
    return 0;
}