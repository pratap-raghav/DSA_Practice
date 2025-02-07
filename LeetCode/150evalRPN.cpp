#include <bits/stdc++.h>

using namespace std;

int evalRPN(vector<string>& tokens) {
        stack<int> s;
        int val1, val2, st = tokens.size();

        for(int i=0; i<st; i++){
            if(tokens[i] == "+"){
                val2 = s.top();
                s.pop();
                val1 = s.top();
                s.pop();
                s.push(val1+val2);
            }
            else if(tokens[i] == "-"){
                val2 = s.top();
                s.pop();
                val1 = s.top();
                s.pop();
                s.push(val1-val2);
            }
            else if(tokens[i] == "*"){
                val2 = s.top();
                s.pop();
                val1 = s.top();
                s.pop();
                s.push(val1*val2);

            }
            else if(tokens[i] == "/"){
                val2 = s.top();
                s.pop();
                val1 = s.top();
                s.pop();
                s.push(val1/val2);
            }
            else{
                s.push(stoi(tokens[i]));
            }
        }
        return s.top();
}

int main(){

    vector<string> tokens = {"2","1","+","3","*"};
    cout<<evalRPN(tokens);

    return 0;
}