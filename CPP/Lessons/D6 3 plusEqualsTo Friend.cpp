#include<iostream>
using namespace std;

class complex
{
    int real;
    int img;
   
    public:
        void getdata(){
    	cout << "\n\nEnter real part: ";
    	cin >> real;
    	cout << "Enter imaginary part: ";
    	cin >> img;
	}
	
	void putdata(){
		if(img>=0){
		cout<<"Complex Number: "<<real<<" + "<<img<<"i";
		}
		else{
			cout<<"Complex Number: "<<real<<" - "<<(-1)*img<<"i";
		}
	}
   
    friend complex operator+=(complex &, complex);
   
};

complex operator+=(complex &obj1, complex obj2)
    {
    	obj1.real = obj1.real + obj2.real;
    	obj1.img = obj1.img + obj2.img;
	}

int main()
{
    complex c1, c2, c3, c4;
    c1.getdata();
    cout<<endl<<"Complex No. :"<<endl;
    c1.putdata();
    c2.getdata();
    cout<<endl<<"Complex No. :"<<endl;
    c2.putdata();
    c1+=c2;  
    cout<<endl<<"Result"<<endl;
    c1.putdata();
   
   
    return(0);
}
