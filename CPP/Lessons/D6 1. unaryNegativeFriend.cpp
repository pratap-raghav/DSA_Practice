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
   
    friend complex operator-(complex);
   
};
complex operator-(complex obj){
	complex temp;
	temp.real = -obj.real;
    temp.img = -obj.img;   
		
	return temp;
}
int main()
{
    complex c1, c2;
    c1.getdata();
   
    cout<<endl<<"Complex No. :"<<endl;
    c1.putdata();
   
    c2 = -c1;   
    cout<<endl<<"Negation"<<endl;
   
    c2.putdata();
   
    return(0);
}
