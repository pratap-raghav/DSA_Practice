//Area of a rectangint area(int, int);le using function in C++

#include<iostream>
using namespace std;


int main(){
	int a, b;
	cout<<"Area of a rectangle using function in C++\n\nLenght: ";
	cin>>a;
	cout<<"Width: ";
	cin>>b;
	cout<<"\nArea of the rectangle: "<<area(a,b);
	return 0;
}

int area(int x, int y){
	return x*y;
}
