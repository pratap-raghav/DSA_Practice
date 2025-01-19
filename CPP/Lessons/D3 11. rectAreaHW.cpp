#include<iostream>

using namespace std;

class Rectangle{
	private:
		int l;
		float w;
		
	public:
		
		void getdata(){
			cout<<"Enter Length: ";
			cin>>l;
			cout<<"Enter Width: ";
			cin>>w;
		}
		
		void putdata(){
			cout<<"\n\nArea of the rectangle: "<<l*w;
		}
		
		Rectangle(){
			l=0;
			w=0;
		}
		Rectangle(int x){
			l=x;
			w=1;
		}
		Rectangle(float y){
			l=1;
			w=y;
		}
		Rectangle(int x, float y){
			l=x;
			w=y;
		}
		Rectangle(float y, int x){
			l=x;
			w=y;
		}
		
		float areaCal(){
			return l*w;
		}
		
		~Rectangle(){
		cout<<"\nDeleting Object...";
		}
};

int main(){
	Rectangle rect1, rect2(1, 2.0f), rect3(3.0f, 4), rect4(5), rect5(6.0f);
	cout<<"\n\nArea of Rectangle 1: "<<rect1.areaCal();
	cout<<"\n\nArea of Rectangle 2: "<<rect2.areaCal();
	cout<<"\n\nArea of Rectangle 3: "<<rect3.areaCal();
	cout<<"\n\nArea of Rectangle 4: "<<rect4.areaCal();
	cout<<"\n\nArea of Rectangle 5: "<<rect5.areaCal();
	
	return 0;
}
