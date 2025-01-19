//Class/Object(constructor) students details in C++

#include<iostream>
using namespace std;

class student{
	
	private:	
		int rollno;
		string name;
		
	public:
		void getdata(){
			cout<<"\nEnter Roll No.: ";
			cin>>rollno;
			cout<<"Enter Name: ";
			cin>>name;
		}
		
		void putdata(){
			cout<<"\nRoll No.: "<<rollno<<"\nName: "<<name;
		}
		
		student(){
			rollno=0;
			name="";
		}
		
		student(int r){
			rollno=r;
			name="";
		}
		
		student(string n){
			rollno=0;
			name=n;
		}
		
		student(int r, string n){
			rollno=r;
			name=n;
		}
		
		student(string n, int r){
			rollno=r;
			name=n;
		}
		
		student(student & ref){
			rollno=ref.rollno;
			name=ref.name;
		}
};


int main(){
	
	student s1("sdfs");
	s1.putdata();
	
	student s2(s1);
	s2.putdata();
	
	student s3(12,"efsd");
	s3.putdata();
	
	student s4("fssd",312);
	s4.putdata();
	
	student s5(23);
	s5.putdata();
	
	student s6;
	s6.putdata();
	
	return 0;
}
