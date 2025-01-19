//ADDING 2 DISTANCES(FEET, INCHES) USING MEMBER FUNCTION.

#include <iostream>
using namespace std;

class addDistance {
private:
    int f, i;

public:

    void getdata(){
    	cout << "\n\nEnter distance in feets and inches: "<<endl;
    	cin >> f;
    	cin >> i;
	}
	
	void putdata(){
		if (i>12){
    		f = f + i/12;
    		i = i%12;
		}
		cout<<"Entered Distance: "<<f<<" Feets and "<<i<<" Inches";
	}
	
	addDistance add(addDistance obj){
		addDistance temp;
		
		temp.f = f + obj.f;
		temp.i = i + obj.i;
		return temp;
	}
};



int main(){
	addDistance d1, d2, d3;
	d1.getdata();
	d1.putdata();
	d2.getdata();
	d2.putdata();
	d3 = d1.add(d2);
	cout<<endl<<endl;
    d3.putdata();
	return 0;
}
