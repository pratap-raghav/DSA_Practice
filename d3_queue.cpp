#include<iostream>
#include<queue>

using namespace std;

int main(){

    queue<int> q;
    
    q.push(03);
    q.push(06);
    q.push(11);
    q.push(14);
    q.push(07);

    cout<<"Size - "<<q.size()<<endl<<endl;

    cout<<"Queue - "<<endl;
    while(!q.empty()){
        cout<<q.front()<<endl;
        q.pop();
    }
    cout<<endl<<"Size - "<<q.size();

    return 0;
}