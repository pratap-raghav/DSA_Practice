#include <iostream>
using namespace std;

class complex {
private:
    int real, img;

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
	
	int realPart(){
		return real;
	}
	
	int imgPart(){
		return img;
	}
	
	
};

int main() {
    complex c1, c2;
    c1.getdata();
    c1.putdata();
    c2.getdata();
    c2.putdata();
    
    int addR, addI;
    addR = c1.realPart() + c2.realPart();
    addI = c1.imgPart() + c2.imgPart();
    
    if(addI>=0){
		cout<<"\n\nSum: "<<addR<<" + "<<addI<<"i";
		}
		
		else{
			cout<<"\n\nSum: "<<addR<<" - "<<(-1)*addI<<"i";
		}
    

    return 0;
}
