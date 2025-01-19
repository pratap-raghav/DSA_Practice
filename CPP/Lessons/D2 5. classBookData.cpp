//Class/Object book details in C++

#include<iostream>
using namespace std;

class book{
	
	private:	
		float price;
		char title[20];
		char author[20];
		
	public:
		void getdata(){
			cout<<"\nEnter Title.: ";
			cin>>title;
			cout<<"Enter Author Name: ";
			cin>>author;
			cout<<"Enter Price: ";
			cin>>price;
		}
		
		void putdata(){
			cout<<"\nBook: "<<title<<"\nAuthor.: "<<author<<"\nPrice: "<<price;
		}
};


int main(){
	
	book s[3];
	
	for(int i=0; i<3; i++){
		cout<<"\nEnter the data of Book "<<i+1;
		s[i].getdata();
	}
	
	for(int i=0; i<3; i++){
		cout<<"\n\nData of Book "<<i+1<<":";
		s[i].putdata();
	}
	return 0;
}
