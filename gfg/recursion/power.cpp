#include <bits/stdc++.h>
using namespace std;

int RecursivePower(int n,int p)
{
    if(p==0) return 1;
    return n*RecursivePower(n,p-1);
}

int main(){
    cout<<RecursivePower(10, 2);
    return 0;
}