#include<iostream>
using namespace std;

class student{
	protected:
		int roll, m1, m2, m3;
		string name;
		
	public:
		void getStudent(){
			cout<<"Enter Roll No.: ";
			cin>>roll;
			cout<<"Enter Name: ";
			cin>>name;
			cout<<"Enter marks of subject 1: ";
			cin>>m1;
			cout<<"Enter marks of subject 2: ";
			cin>>m2;
			cout<<"Enter marks of subject 3: ";
			cin>>m3;
		}
		
		void putStudent(){
			cout<<"\n\nRoll No.: "<<roll<<endl;
			cout<<"Name: "<<name<<endl;
			cout<<"Marks of subject 1: "<<m1<<endl;
			cout<<"Marks of subject 2: "<<m2<<endl;
			cout<<"Marks of subject 3: "<<m3<<endl;
		}
};

class average : public student{
	protected:
		float avg;
		
	public: 
		void getAvg(){
			getStudent();
			avg = (m1+m2+m3)/3.0f;
			putStudent();
			cout<<"Average Marks: "<<avg<<endl;
		}
};

class printResult : public average{
	private:
		string res;
	
	public:
		void getResult(){
			getAvg();
			if (avg>=40){
				res = "Pass";
			}
			else{
				res = "Fail";
			}
			cout<<"Result: "<<res;
		}
};

int main(){
	printResult r1;
	r1.getResult();
	return 0;
}
