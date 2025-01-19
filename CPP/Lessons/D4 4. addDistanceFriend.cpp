//ADDING 2 DISTANCES(KM, M) USING FRIEND FUNCTION.

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
    	/*if (m>999){
    		km = km + m/1000;
    		m = m%1000;
		}*/
	}
	
	void putdata(){
		cout<<"Entered Distance: "<<km<<" Kilometers and "<<m<<" Meters";
	}
	
	friend void add(addDistance x, addDistance y);
};

void add(addDistance x, addDistance y){
	
	int addkm, addm;
	addkm=x.km + y.km;
	addm=x.m + y.m;
	
    addkm = addkm + addm/1000;
    addm = addm%1000;
	cout<<"\n\n\nResulted Distance: "<<addkm<<" Kilometers and "<<addm<<" Meters\n";
}

int main(){
	addDistance d1, d2;
	d1.getdata();
	d1.putdata();
	d2.getdata();
	d2.putdata();
	add(d1,d2);
	return 0;
}
