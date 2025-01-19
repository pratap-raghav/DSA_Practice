#include<iostream>
using namespace std;

class intMarks{
	protected:
		int iMarks[5];
		
	public:
		void getInternalMarks(){
			cout<<"\nPlease Enter Internal Marks(Max Marks: 30)"<<endl;
			
			for(int i=0; i<5; i++){
				cout<<"Enter Subject "<<i+1<<" Score: ";
				cin>>iMarks[i];
			}
		}
		
		void putInternalMarks(){
			cout<<"\nInternal Marks:"<<endl;
			
			for(int i=0; i<5; i++){
				cout<<"Subject "<<i+1<<" Score: "<<iMarks[i]<<endl;
			}
		}
};

class extMarks{
	protected:
		int eMarks[5];
		
	public:
		void getExternalMarks(){
			cout<<"\nPlease Enter External Marks(Max Marks: 70)"<<endl;
			
			for(int i=0; i<5; i++){
				cout<<"Enter Subject "<<i+1<<" Score: ";
				cin>>eMarks[i];
			}
		}
		
		void putExternalMarks(){
			cout<<"\nExternal Marks:"<<endl;
			
			for(int i=0; i<5; i++){
				cout<<"Subject "<<i+1<<" Score: "<<eMarks[i]<<endl;
			}
		}
};

class student : public intMarks, public extMarks{
	private:
		int roll, tMarks=0;
		string name;
		
	public:
		void getStudent(){
			cout<<"Enter Student Details\nName: ";
			cin>>name;
			cout<<"Roll No.: ";
			cin>>roll;
			getInternalMarks();
			getExternalMarks();
		}
		
		void putStudent(){
			cout<<"\n\nStudent Detils:\nName: "<<name<<"\nRoll No.: "<<roll<<endl;
			putInternalMarks();
			putExternalMarks();
			
			for(int i=0; i<5; i++){
				tMarks+=iMarks[i] + eMarks[i];
			}
			cout<<"Total Score: "<<tMarks<<"/500"<<endl;;
		}
		
};

int main(){
	student s;
	s.getStudent();
	s.putStudent();
	return 0;
}
