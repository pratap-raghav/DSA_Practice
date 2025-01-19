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
   
    friend complex operator++(complex &);
    friend complex operator++(complex &, int);
   
};
complex operator++(complex &obj){
	
	++obj.real;
    ++obj.img;
}

complex operator++(complex &obj, int){
	
	obj.real++;
    obj.img++;
}

int main()
{
    complex c1, c2;
    c1.getdata();
    c1.putdata();
    ++c1;   
    cout<<endl<<"Pre-increment"<<endl;
    c1.putdata();
    
    c2.getdata();
    c2.putdata();
    c2++;   
    cout<<endl<<"Pre-increment"<<endl;
    c2.putdata();

    return(0);
}
