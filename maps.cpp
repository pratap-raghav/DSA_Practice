#include<iostream>
#include<map>

using namespace std;

int main(){
    map<int, int> mp1;

    mp1[1]=1;
    mp1[2]=4;
    mp1[3]=9;
    mp1[4]=16;
    mp1[5]=25;

    for(int i=0; i<=mp1.size(); i++){
        cout<<i<<" - ";
        cout<<mp1[i]<<endl;
    }

    


    return 0;
}