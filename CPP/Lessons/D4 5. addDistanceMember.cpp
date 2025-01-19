//ADDING 2 DISTANCES(KM, M) USING MEMBER FUNCTION.

#include <iostream>
using namespace std;

class addDistance {
private:
    int km, m;

public:

    void getdata(){
    	cout << "\n\nEnter distance in Kilometer and meter: "<<endl;
    	cin >> km;
    	cin >> m;
	}
	
	void putdata(){
		cout<<"Entered Distance: "<<km<<" Kilometers and "<<m<<" Meters";
	}
	
	addDistance add(addDistance obj){
		addDistance temp;
		
		temp.km = km + obj.km;
		temp.m = m + obj.m;
		temp.km = temp.km + temp.m/1000;
    	temp.m = temp.m%1000;
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
