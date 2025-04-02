#include <bits/stdc++.h>

using namespace std;

bool palindrome(string str, int start, int end){

    if(str[start]==str[end]){
        if(start<end){
            return palindrome(str, start+1, end-1);
        }
        else{
            return true;
        }
    }
    return false;
}

int main(){

    string str = "5511155";

    cout<<palindrome(str, 0, str.size()-1);


    return 0;
}