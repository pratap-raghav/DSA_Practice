#include <bits/stdc++.h>
using namespace std;

int GCD(int a,int b){
    if (a==0 || b==0) return a>b?a:b;
    return GCD(b, a%b);
}

int main(){
    cout<<GCD(7,49);
    return 0;
}