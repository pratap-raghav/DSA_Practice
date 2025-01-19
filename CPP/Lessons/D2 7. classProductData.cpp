//Class, Object intro in C++

#include<iostream>
using namespace std;

class student{
	
	private:	
		int rollno;
		char name[20];
		
	public:
		void getdata(){
			cout<<"\nEnter Roll No.: ";
			cin>>rollno;
			cout<<"Enter Name: ";
			cin>>name;
		}
		
		void putdata(){
			cout<<"\n\nName: "<<name<<"\nRoll No.: "<<rollno;
		}
};


int main(){
	
	student s1, s2, s3;
	
	s1.getdata();
	s2.getdata();
	s3.getdata();
	s1.putdata();
	s2.putdata();
	s3.putdata();
	
	return 0;
}
