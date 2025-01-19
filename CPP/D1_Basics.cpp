#include<iostream>
using namespace std;

int main(){

    // for(int i=0,j=0; i<10, j<20;i++,j++){
    //     cout<<"i- "<<i<<", j- "<<j<<endl;
    // }

    int i=0, j=0;

    for(;;){
        if(i<10,j<20){
            cout<<"i- "<<i<<", j- "<<j<<endl;
        }
        else{
            break;
        }
        i++;j++;
    }

    

    return 0;
}
