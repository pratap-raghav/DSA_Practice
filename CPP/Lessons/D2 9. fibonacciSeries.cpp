//Fibonacci Series in C++

#include<iostream>
using namespace std;
int main(){
	int n, a=0, b=1, c;
	cout<<"Fibonacci Series\n\nEnter number of elements: ";
	cin>>n;
	for(int i=0; i<n; i++){
		cout<<a<<"\t";
		c = a+b;
		a=b;
		b=c;
	}
	return 0;
}
