//Class/Object product details in C++

#include<iostream>
using namespace std;

class comp{
	
	private:	
		int a,b;
		
	public:
		void getdata(){
			cout<<"\nNumber 1: ";
			cin>>a;
			cout<<"Number 2: ";
			cin>>b;
		}
		
		void putdata(){
			if(a>b){
				cout<<a<<">"<<b;
			}
			else{
				cout<<a<<"<"<<b;
			}
		}
};


int main(){
	
	comp c;
	c.getdata();
	c.putdata();
	
	return 0;
}
