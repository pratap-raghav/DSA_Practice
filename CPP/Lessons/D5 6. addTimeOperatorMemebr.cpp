
#include <iostream>
using namespace std;

class addTime {
private:
    int h, m, s;

public:

    void getdata(){
    	cout << "\n\nEnter Time(H:M:S): "<<endl;
    	cin >> h;
    	cin >> m;
    	cin >> s;
    	
	}
	
	void putdata(){
		cout<<"Time: "<<h<<":"<<m<<":"<<s;
	}
	
	addTime operator+(addTime x){
	
	addTime temp;
	
	temp.s = s + x.s;
	temp.m = m + x.m + temp.s/60;
	temp.h = h + x.h + temp.m/60;
	temp.s = temp.s%60;
	temp.m = temp.m%60;
	return temp;
	}
};



int main(){
	addTime d1, d2, d3;
	d1.getdata();
	d1.putdata();
	d2.getdata();
	d2.putdata();
	d3 = d1 + d2;//t1.operator(t2)
	cout<<endl<<endl;
    d3.putdata();
	return 0;
}
