
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
		cout<<"\nDistance: "<<f<<" Feet and "<<i<<" Inches";
	}
	
	friend addDistance operator+(addDistance, addDistance);
};

addDistance operator+(addDistance x , addDistance y){
	
	addDistance temp;
	
	temp.i = x.i + y.i;
	temp.f = x.f +  y.f + (temp.i)/12;
	temp.i = temp.i%12;
	return temp;
}

int main(){
	addDistance d1, d2, d3;
	d1.getdata();
	d1.putdata();
	d2.getdata();
	d2.putdata();
	d3 = d1+d2; //operator+(d1,d2)
	d3.putdata();
	return 0;
}
