#include<iostream>
using namespace std;

template<class S> //S-->Template parameter
S compare(S a, S b){
	if(a>b){
		return a;
	}
	else{
		return b;	
	}
};
int main(){
	int i1,i2;
	float f1, f2;
	double d1, d2;
	
	cout<<"Integer Compare"<<endl;
	cout<<"Enter Number 1: ";
	cin>>i1;
	cout<<"Enter Number 2: ";
	cin>>i2;
	cout<<"Greatest in "<<i1<<" and "<<i2<<" is: "<<compare(i1, i2)<<endl;
	
	cout<<"\n\nFloat Compare"<<endl;
	cout<<"Enter Number 1: ";
	cin>>f1;
	cout<<"Enter Number 2: ";
	cin>>f2;
	cout<<"Greatest in "<<f1<<" and "<<f2<<" is: "<<compare(f1, f2)<<endl;
	
	cout<<"\n\nDouble Compare"<<endl;
	cout<<"Enter Number 1: ";
	cin>>d1;
	cout<<"Enter Number 2: ";
	cin>>d2;
	cout<<"Greatest in "<<d1<<" and "<<d2<<" is: "<<compare(d1, d2)<<endl;
	
	return 0;
}

