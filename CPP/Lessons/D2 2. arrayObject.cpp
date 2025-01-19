//Class, Array of object in C++

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
			cout<<"\nName: "<<name<<"\nRoll No.: "<<rollno;
		}
};


int main(){
	
	student s[5];
	
	for(int i=0; i<5; i++){
		cout<<"\nEnter the data of student "<<i+1;
		s[i].getdata();
	}
	
	for(int i=0; i<5; i++){
		cout<<"\nData of student "<<i+1<<":";
		s[i].putdata();
	}
	return 0;
}
