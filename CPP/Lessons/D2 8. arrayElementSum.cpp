//Sum of array elements in C++

#include<iostream>
using namespace std;
int main(){
	int sum=0, array[10];
	
	for(int i=0; i<10; i++){
		cout<<"Enter element "<<i+1<<": ";
		cin>>array[i];
	}
	
	for(int i=0; i<10; i++){
		sum=sum+array[i];
	}
	
	cout<<"\n\nSum of array element: "<<sum;
	
	return 0;
}
