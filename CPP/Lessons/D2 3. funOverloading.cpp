//Function Overloading in C++

#include<iostream>
using namespace std;

int area(int);
int area(int, int);
float area(float);
float area(float, float);

int main(){
	int s, l, w;
	float r, b, h;
	
	cout<<"\n\nSide of square: ";
	cin>>s;
	cout<<"Area of  : "<<area(s);
	
	cout<<"\n\nLength of rectangle: ";
	cin>>l;
	cout<<"Width of rectangle: ";
	cin>>w;
	cout<<"Area of  : "<<area(l,w);
	
	cout<<"\n\nRadius of circle: ";
	cin>>r;
	cout<<"Area of  : "<<area(r);
	
	cout<<"\n\nHeight of triangle: ";
	cin>>h;
	cout<<"Width of triangle: ";
	cin>>b;
	cout<<"Area of  : "<<area(h,b);
	
	return 0;
}

int area(int s){
	return s*s;
}
int area(int l, int w){
	return l*w;
}
float area(float r){
	return (22*r*r)/7;
}
float area(float h, float b){
	return 0.5*h*b;
}
