#include<iostream>
using namespace std;

class internalMarks{
	protected:
		int im1, im2, im3;
		
	public:
		void getInternal(){
			cout<<"Enter internal marks of subject 1: ";
			cin>>im1;
			cout<<"Enter internal marks of subject 2: ";
			cin>>im2;
			cout<<"Enter internal marks of subject 3: ";
			cin>>im3;
		}
		
		void putInternal(){
			cout<<"\nInternal marks of subject 1: "<<im1<<endl;
			cout<<"Internal marks of subject 2: "<<im2<<endl;
			cout<<"Internal marks of subject 3: "<<im3<<endl;
		}
};

class externalMarks : public internalMarks{
	protected:
		int exm1, exm2, exm3;
		
	public:
		void getExternal(){
			getInternal();
			cout<<"\nEnter external marks of subject 1: ";
			cin>>exm1;
			cout<<"Enter external marks of subject 2: ";
			cin>>exm2;
			cout<<"Enter external marks of subject 3: ";
			cin>>exm3;
		}
		
		void putExternal(){
			cout<<"\n\nExternal marks of subject 1: "<<exm1<<endl;
			cout<<"External marks of subject 2: "<<exm2<<endl;
			cout<<"External marks of subject 3: "<<exm3<<endl;
		}
};

class student : public externalMarks{
	protected:
		int roll, m1, m2, m3;
		string name;
		
	public:
		void getStudent(){
			cout<<"Enter Roll No.: ";
			cin>>roll;
			cout<<"Enter Name: ";
			cin>>name;
		}
		void putStudent(){
			cout<<"\n\nRoll No.: "<<roll<<endl;
			cout<<"Name: "<<name<<endl;
		}
};

class average : public student{
	protected:
		int avg;
		
	public: 
		void getAvg(){
			getStudent();
			getExternal();
			
			putStudent();
			
			putInternal();
			putExternal();
			cout<<"\nSubject 1 Score: "<<exm1 + im1<<endl;
			cout<<"Subject 2 Score: "<<exm2 + im2<<endl;
			cout<<"Subject 3 Score: "<<exm3 + im3<<endl;
			avg = (im1+im2+im3+exm1+exm2+exm3)/3.0f;
			
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
			cout<<"\n\nScore: "<<avg<<"%"<<"\nResult: "<<res;
		}
};

int main(){
	printResult r1;
	r1.getResult();
	return 0;
}
