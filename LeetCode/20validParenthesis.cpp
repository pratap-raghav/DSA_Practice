#include <bits/stdc++.h>

using namespace std;

bool isValid(string s) {
        stack<char> stk;
        int i = 0;
        while (s[i] != '\0') {
            if (s[i] == '(' || s[i] == '{' || s[i] == '[') {
                stk.push(s[i]);
            } else if (s[i] == ')' || s[i] == '}' || s[i] == ']') {
                if (stk.empty()) return false;

                char top = stk.top();
                if ((s[i] == ')' && top == '(') ||
                    (s[i] == '}' && top == '{') ||
                    (s[i] == ']' && top == '[')) {
                    stk.pop();
                } else {
                    return false;
                }
            }
            i++;
        }
        return stk.empty();
    }

int main(){
    // string s = "([])";
    // string s = "()";
    // string s = "()[]{}";
    string s = "(]";
    cout<<isValid(s);
    return 0;
}