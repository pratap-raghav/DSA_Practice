#include<iostream>
using namespace std;
class complex
{
    int real;
    int img;
   
    public:
        void getdata(){
    	cout << "Enter real part: ";
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
       
        complex operator*(complex obj)
        {
            complex temp;
            temp.real = (real*obj.real) - (img*obj.img);
            temp.img  = (real*obj.img) + (img*obj.real);
            return(temp);
        } 
};

int main()
{
    complex c1,c2,c3;
    cout<<"Complex No.1"<<endl;
    c1.getdata();
    c1.putdata();  
   
    cout<<"\n\nComplex No.2"<<endl;
    c2.getdata();
    c2.putdata();
       
   	c3 = c1 * c2;
   
    cout<<"\n\nResult:"<<endl;
   
    c3.putdata();
   
    return(0);
}
