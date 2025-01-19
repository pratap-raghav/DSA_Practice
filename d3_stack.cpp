#include<iostream>
#include<stack>

using namespace std;

int main(){

    stack<int> s;

    s.push(07);
    s.push(14);
    s.push(06);
    s.push(11);
    s.push(03);
    cout<<"size - "<<s.size()<<endl<<endl;

    cout<<"Stack - "<<endl;
    while(!s.empty()){
        cout<<s.top()<<endl;
        s.pop();
    }
    cout<<endl<<"size - "<<s.size();

    return 0;
}