#include <bits/stdc++.h>
using namespace std;

int factorial(int N){
    if(N==0 || N==1) return 1;
    return(N*factorial(N-1));
}

int main(){
    cout<<factorial(10);
    return 0;
}