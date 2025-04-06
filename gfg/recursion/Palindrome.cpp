#include <bits/stdc++.h>
using namespace std;

int revNum(int N, int n)
{
    if(N==0) return n;
    return revNum(N/10, n*10+N%10);
}
    
bool isPalin(int N)
{
    return revNum(N,0)==N?1:0;
}

int main(){
    cout<<isPalin(2013102);
    return 0;
}