//ADDING 2 TIME(HH:MM:SS) USING MEMBER FUNCTION.

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
		if (s>59){
    		m = m + s/59;
    		s = s%59;
		}
		if (m>59){
    		h = h + m/59;
    		m = m%12;
		}
		cout<<"Entered Time: "<<h<<":"<<m<<";"<<s;
	}
	
	addTime add(addTime obj){
		addTime temp;
		
		temp.h = h + obj.h;
		temp.m = m + obj.m;
		temp.s = s + obj.s;
		return temp;
	}
};



int main(){
	addTime t1, t2, t3;
	t1.getdata();
	t1.putdata();
	t2.getdata();
	t2.putdata();
	t3 = t1.add(t2);
	cout<<endl<<endl;
    t3.putdata();
	return 0;
}
