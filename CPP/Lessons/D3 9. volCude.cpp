#include<iostream>

using namespace std;

class vol{
	int l, w;
	float h;
	
	public:
		void getdata(){
			cout<<"Enter Lenght: ";
			cin>>l;
			cout<<"Enter Width: ";
			cin>>w;
			cout<<"Enter Height: ";
			cin>>h;
		}
		
		void putdata(){
			cout<<"\n\nVolume of Cube: "<<l*w*h<<" meter cube";
		}
		vol(){
			l=1;
			w=1;
			h=1;
		}
		vol(int x){
			l=x;
			w=1;
			h=1;
		}
		vol(float z){
			l=1;
			w=1;
			h=z;
		}
		vol(int x, int y){
			l=x;
			w=y;
			h=1;
		}
		vol(float z, int x){
			l=x;
			w=1;
			h=z;
		}
		vol(int y, float z){
			l=1;
			w=y;
			h=z;
		}
		vol(int x, int y, float z){
			l=x;
			w=y;
			h=z;
		}
		vol(int x, float z, int y){
			l=x;
			w=y;
			h=z;
		}
		vol(float z, int x, int y){
			l=x;
			w=y;
			h=z;
		}
		vol(vol &ref){
			l=ref.l;
			w=ref.w;
			h=ref.h;
		}
		
		~vol(){
		cout<<"\nDeleting Object...";}
	
};

int main(){
	vol v1,
	v2(12),
	v3(3.14f),
	v4(3,3,3.5f),
	v5(4,4.5f,4),
	v6(5.5f,5,5),
	v7(6,6),
	v8(7.5f,7),
	v9(8,8.5f),
	v10(v2);
	v1.putdata();
	v2.putdata();
	v3.putdata();
	v4.putdata();
	v5.putdata();
	v6.putdata();
	v7.putdata();
	v8.putdata();
	v9.putdata();
	v10.putdata();
	
	
	return 0;
}
