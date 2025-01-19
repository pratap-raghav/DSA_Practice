//Call by reference in C++

#include<iostream>
using namespace std;

void value(int &, int &);
int main(){
	
	int a, b;
	
	cout<<"Call by reference in C++\n\n\nNumber 1: ";
	cin>>a;
	cout<<"Number 2: ";
	cin>>b;
	
	cout<<"\n\nValue in main() before SWAPPING\n"<<a<<"\t"<<b;
	value(a,b);
	cout<<"\n\nValue in main() after SWAPPING\n"<<a<<"\t"<<b;
	
	return 0;
}

void value(int &x, int &y){
	x = x+y;
	y = x-y;
	x = x-y;
	cout<<"\n\nValue in value() after SWAPPING\n"<<x<<"\t"<<y;
}
