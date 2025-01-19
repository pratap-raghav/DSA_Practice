#include<iostream>
using namespace std;

int add(int a, int b){ // add-1
    cout<<"add-(1)-  ";
    return a+b;
}

float add(float a, int b){ // add-2
    cout<<"add-(2)-  ";
    return a+b;
}

float add(int a, float b){ // add-3
    cout<<"add-(3)-  ";
    return a+b;
}

float add(float a, float b){ // add-4
    cout<<"add-(4)-  ";
    return a+b;
}

int main(){
    cout<<add(2,3)<<endl;
    cout<<add(1.7f,1)<<endl;
    cout<<add(1,1.2f)<<endl;
    cout<<add(2.2f,3.3f)<<endl;
    return 0;
}
