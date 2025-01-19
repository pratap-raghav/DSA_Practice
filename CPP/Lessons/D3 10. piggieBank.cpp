#include<iostream>

using namespace std;

class addAmount{
	int amount, cash;
	
	public:
		void getdata(){
			cout<<"Enter the amount you are adding to the Piggie Bank: ";
			cin>>cash;
			amount = amount  + cash;
		}
		void putdata(){
			cout<<"\n\nPiggie Bank Balance: $"<<amount;
		}
		
		addAmount(){
			amount = 50;
		}
		addAmount(int inCash){
			amount = amount + inCash;
		}
		~addAmount(){
		cout<<"\nDeleting Object...";
		}
};

int main(){
	int cash;
	addAmount a;
	a.getdata();
	a.putdata();
	
	return 0;
}
