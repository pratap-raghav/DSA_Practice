
#include <iostream>
using namespace std;

class addDistance {
private:
    int f, i;

public:

    void getdata(){
    	cout << "\n\nEnter distance in Feet and Inches: "<<endl;
    	cin >> f;
    	cin >> i;
    	
	}
	
	void putdata(){
		cout<<"Entered Distance: "<<f<<" Feet and "<<i<<" Inches";
	}
	
	addDistance operator+(addDistance x){
	
	addDistance temp;
	
	temp.i = i + x.i;
	temp.f = f +  x.f + (temp.i)/12;
	temp.i = temp.i%12;
	return temp;
	}
};



int main(){
	addDistance d1, d2, d3;
	d1.getdata();
	d1.putdata();
	d2.getdata();
	d2.putdata();
	d3 = d1 + d2;
	cout<<endl<<endl;
    d3.putdata();
	return 0;
}
