#include <bits/stdc++.h>
using namespace std;

void subStrings(string &str, string curr, int start, int end){
    if(start==end){
        cout<<curr<<endl;
        return;
    }
    subStrings(str, curr, start+1, end);
    subStrings(str, curr+str[start], start+1, end);
}

int main(){
    string s = "RPS", c="";
    subStrings(s,c,0,s.length());
    return 0;
}