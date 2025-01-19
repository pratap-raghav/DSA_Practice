//Even or Odd in C++

#include<iostream>
using namespace std;
int main(){
	int n;
	cout<<"Even/Odd in C++\n\nNumber: ";
	cin>>n;
	
	if(n%2==0){
		cout<<"\n"<<n<<" is EVEN. ";
	}
	
	else{
		cout<<"\n"<<n<<" is ODD. ";
	}
	return 0;
}
