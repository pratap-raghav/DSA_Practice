#include<iostream>
#include<map>

using namespace std;

int main(){
    map<int, int> mp1;

    // mp1[1]=1;
    // mp1[2]=4;
    // mp1[3]=9;
    // mp1[4]=16;
    // mp1[5]=25;

    // cout<<"Map - "<<endl;
    // for(int i=1; i<=mp1.size(); i++){
    //     cout<<i<<" - ";
    //     cout<<mp1[i]<<endl;
    // }

    for(int i = 0; i<=10; i++){
        mp1.insert({i, i*i*i});
    }
    
    cout<<endl<<"Map Cubes - "<<endl;
    for(auto it : mp1){
        cout<<it.first<<" - "<<it.second<<endl;
    }

    cout<<endl<<"Count - "<<endl;
    for(auto it : mp1){
        cout<<it.first<<" - "<<mp1.count(it.first)<<endl;
    }

    if(mp1.find(10) != mp1.end()){
        cout<<"True"<<endl;
    }
    else{
        cout<<"False"<<endl;
    }

    cout<<mp1.empty()<<endl;
    mp1.clear();
    cout<<mp1.empty()<<endl;

    return 0;
}