//Greatest in 3 number in C++

#include<iostream>
using namespace std;
int main(){
	int n1, n2, n3;
	
	cout<<"Greatest in 3 number\n\nNumber 1: ";
	cin>>n1;
	cout<<"Number 2: ";
	cin>>n2;
	cout<<"Number 3: ";
	cin>>n3;
	
	if (n1>n2){
		if(n1>n3){
			cout<<n1<<" is greatest.";
		}
		else{
			cout<<n3<<" is greatest.";
		}
	}
	else{
		if(n2>n3){
			cout<<n2<<" is greatest.";
		}
		else{
			cout<<n3<<" is greatest.";
		}
	}	
	return 0;
}
