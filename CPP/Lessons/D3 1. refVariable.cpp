//Reference variable in C++

#include<iostream>
using namespace std;


int main(){
	
	int a = 234, aa = 44;
	int &a1 = a;
	cout<<a<<a1<<endl;
	a1=aa;
	cout<<a<<a1<<endl;
	
	
	return 0;
}
