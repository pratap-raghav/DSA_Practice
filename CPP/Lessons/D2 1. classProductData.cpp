//Class/Object product details in C++

#include<iostream>
using namespace std;

class item{
	
	private:	
		float price;
		char pid[20];
		char product[20];
		
	public:
		void getdata(){
			cout<<"\nEnter Product.: ";
			cin>>product;
			cout<<"Enter Product ID: ";
			cin>>pid;
			cout<<"Enter Price: ";
			cin>>price;
		}
		
		void putdata(){
			cout<<"\nProduct: "<<product<<"\nProduct ID.: "<<pid<<"\nPrice: "<<price;
		}
};


int main(){
	
	item s[3];
	
	for(int i=0; i<3; i++){
		cout<<"\nEnter the data of Product "<<i+1;
		s[i].getdata();
	}
	
	for(int i=0; i<3; i++){
		cout<<"\n\nData of Product "<<i+1<<":";
		s[i].putdata();
	}
	return 0;
}
