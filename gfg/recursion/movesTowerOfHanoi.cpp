#include <bits/stdc++.h>
using namespace std;

int moves = 0;
int towerOfHanoi(int n, int from, int to, int aux) {
    if(n==0) return 0;
    if(n==1){
        moves++;
        return moves;
    }
    towerOfHanoi(n-1, from, aux, to);
    moves++;
    towerOfHanoi(n-1, aux, from, to);
    return moves;
}

int main(){
    cout<<towerOfHanoi(3,1,3,2);
    return 0;
}