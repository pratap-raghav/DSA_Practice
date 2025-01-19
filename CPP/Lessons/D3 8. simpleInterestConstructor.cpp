#include<iostream>

using namespace std;

class sI{
	int n;
	float p, r;
	
	public:
		void getdata(){
			cout<<"Enter Principal Amount: ";
			cin>>p;
			cout<<"Enter Interest Rate: ";
			cin>>r;
			cout<<"Enter Term of Loan(in Years): ";
			cin>>n;
		}
		
		void putdata(){
			cout<<"\n\nSimple Interest: "<<p*r*n;
		}
		sI(){
			p=100000.0f;
			r=8.5f;
			n=1;
		}
		sI(float x){
			p=x;
			r=8.5f;
			n=1;
		}
		sI(int z){
			p=100.0f;
			r=8.0f;
			n=z;
		}
		sI(float x, float y, int z){
			p=x;
			r=y;
			n=z;
		}
		sI(float x, int z, float y){
			p=x;
			r=y;
			n=z;
		}
		sI(int z, float x, float y){
			p=x;
			r=y;
			n=z;
		}
		sI(float x, float y){
			p=x;
			r=y;
			n=1;
		}
		sI(float x, int z){
			p=x;
			r=8.5;
			n=z;
		}
		sI(int z, float x){
			p=x;
			r=8.5f;
			n=z;
		}
		sI(sI &ref){
			p=ref.p;
			r=ref.r;
			n=ref.n;
		}
		~sI(){
		cout<<"\nDeleting Object...";}
	
};

int main(){
	sI 	s1,
		s2(6000.0f),
		s3(4),
		s4(45000.0f, 7.6f, 6),
		s5(1200.99f,2,8.1),
		s6(3, 90000.00f,6.0f),
		s7(37000.0f,3.5f),
		s8(3200.0f,4),
		s9(7,4600.0f), 
		s10(s1);
	s1.putdata();
	s2.putdata();
	s3.putdata();
	s4.putdata();
	s5.putdata();
	s6.putdata();
	s7.putdata();
	s8.putdata();
	s9.putdata();
	s10.putdata();
	return 0;
}
