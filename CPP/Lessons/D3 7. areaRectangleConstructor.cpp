#include<iostream>

using namespace std;

class area{
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
		
		area(){
			l=1;
			w=1;
		}
		area(int x){
			l=x;
			w=1;
		}
		area(float y){
			l=1;
			w=y;
		}
		area(int x, float y){
			l=x;
			w=y;
		}
		area(float y, int x){
			l=x;
			w=y;
		}
		area(area &ref){
			l=ref.l;
			w=ref.w;
		}
};

int main(){
	area a1,a2(12),a3(4.6f),a4(12, 3.5f),a5(12.1f, 3),a6(a4);
	a1.putdata();
	a2.putdata();
	a3.putdata();
	a4.putdata();
	a5.putdata();
	a6.putdata();
	return 0;
}
