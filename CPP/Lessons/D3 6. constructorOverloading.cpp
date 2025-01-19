//Class/Object constructor overloading and destructor in C++

#include<iostream>
using namespace std;

class data{
	
	private:	
		int a;
		float b;		
	public:
		void getdata(){
			cout<<"\nNumber 1: ";
			cin>>a;
			cout<<"Number 2: ";
			cin>>b;
		}
		
		void putdata(){
			cout<<"\n\nNumber 1: "<<a<<"\nNumber 2: "<<b;
		}
		
		data(){
			a=0;
			b=0;
		}
		
		data(int x){
			a=x;
			b=0;
		}
		
		data(float y){
			a=0;
			b=b;
		}
		
		data(int x, float y){
			a=x;
			b=y;
		}
		
		data(float y, int x){
			a=x;
			b=y;
		}
		
		data(data &ref){
			a=ref.a;
			b=ref.b;
		}
		
		~data(){
			cout<<"\nObject Destructed...";
		}
};


int main(){
	
	data d1;
	d1.putdata();
	data d2(23);
	d2.putdata();
	data d3(45.43f);
	d3.putdata();
	data d4(23,23.4f);
	d4.putdata();
	data d5(23.23f,23);
	d5.putdata();
	data d6(d5);
	d6.putdata();
	
	return 0;
}
