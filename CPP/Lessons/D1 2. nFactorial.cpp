//Factorial of a number in C++

#include<iostream>
using namespace std;
int main(){
	int n, i, fact=1;
	cout<<"Factorial of a number in C++\n\nNumber: ";
	cin>>n;
	
	/*if(n==0){
		fact = 1;
	}*/
	
	//else{
		for(i=1; i<=n;i++)
			fact=fact*i;
	//}
	
	cout<<"\nFactorial of "<<n<<": "<<fact;
	return 0;
}
