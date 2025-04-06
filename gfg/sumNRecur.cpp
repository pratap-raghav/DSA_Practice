#include <bits/stdc++.h>
using namespace std;

int recursiveSum(int N){
    if(N==0) return 0;
    return N+recursiveSum(N-1);
}

int main(){
    cout<<recursiveSum(5);
    return 0;
}