#include <bits/stdc++.h>
using namespace std;
int revNum(int num, int rev) {
    if (num == 0)
        return rev;
    return revNum(num / 10, rev * 10 + num % 10);
}

int main(){
    cout<<revNum(10051,0);
    return 0;
}