//Add 2 numbers using function in C++

#include<iostream>
using namespace std;
int add(int, int);

int main(){
	int a, b;
	cout<<"Adding 2 numbers using function in C++\n\nNumber 1: ";
	cin>>a;
	cout<<"Number 2: ";
	cin>>b;
	cout<<"\nSum of "<<a<<" & "<<b<<": "<<add(a,b);
	return 0;
}

int add(int x, int y){
	return x+y;
}
