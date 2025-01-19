#include<iostream>
#include<string>
using namespace std;

class person{
    private:
        string pNum;

    public:
        string name;
        int age;

    void enterData(){
        cout<<"Enter name- ";
        cin>>name;
        cout<<"Enter pNum- ";
        cin>>pNum;
        cout<<"Enter age- ";
        cin>>age;
    }

    void privateData(){
        cout<<"pNum- "<<pNum<<endl;
    }

    void publicData(){
        cout<<"Name- "<<name<<endl;
        cout<<"age- "<<age<<endl;
    }
};

int main(){
    person prachi;

    prachi.enterData();
    cout<<"Name- "<<prachi.name<<endl;
    cout<<"age- "<<prachi.age<<endl;
    prachi.publicData();
    prachi.privateData();

    return 0;
}
