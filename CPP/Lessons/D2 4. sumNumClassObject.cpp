//Sum of 2 number Class/Object

#include<iostream>
using namespace std;

class student{
	
	public:	
		int a,b;
		
	public:
		
		void getdata(){
			cout<<"\nNumber 1: ";
			cin>>a;
			cout<<"Number 2: ";
			cin>>b;
		}
		void putdata(){
			cout<<"\n"<<a<<" + "<<b<<" = "<<a+b;
		}
};


int main(){
	
	student s;
	s.getdata();
	s.putdata();
	
	return 0;
}
