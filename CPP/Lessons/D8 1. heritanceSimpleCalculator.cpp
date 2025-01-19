#include<iostream>
using namespace std;

class calculate{
    protected:
		int a, b;
	   
    public:
        void getNumber(){
            cout<<"Enter Number 1:";
            cin>>a;
            cout<<"Enter Number 2:";
            cin>>b;
        }
        void putResult(){
            cout<<"Number 1: "<<a<<"\nNumber 2: "<<b;
        }
};

class sum : public calculate
{
     int addition;
     
     public:
         void getSum(){
             getNumber();
         }
         void putSum(){
             putResult();
             addition = a+b;
             cout<<"\nAddition Result: "<<addition<<endl<<endl;
         }
};

class sub : private calculate
{
     int subtract;
     
     public:
         void getSub(){
             getNumber();
         }
         void putSub(){
             putResult();
             subtract = a-b;
             cout<<"\nSubtraction Result: "<<subtract<<endl<<endl;
         }
};

class multiply : protected calculate
{
     int multi;
     
     public:
         void getMultiple(){
             getNumber();
         }
         void putMultiple(){
             putResult();
             multi = a*b;
             cout<<"\nMultiplication Result: "<<multi<<endl<<endl;
         }
};

int main()
{
    sum a1;
    sub s1;
    multiply m1;
   
    a1.getSum();
    a1.putSum();
    s1.getSub();
    s1.putSub();
    m1.getMultiple();
    m1.putMultiple();
    return(0);
}
