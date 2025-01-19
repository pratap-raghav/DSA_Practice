//Reference variable in C++

#include<iostream>
using namespace std;

class complex{
    public: 
        int real, img;

        complex(){
            real = 0;
            img = 0;
        }
        
        complex(int r, int i){
            real = r;
            img = i;
        }

        void output(){
            if(img>0){
                cout<<real<<" + "<<img<<"i"<<endl;
            }
            else{
                cout<<real<<" - "<<-img<<"i"<<endl;
            }
        }

        complex add(complex &c){
            // complex temp(real + c.real, img + c.img);

            // temp.real = real + c.real;
            // temp.img = img + c.img;

            return complex(real + c.real, img + c.img);
        }

        complex operator+(complex &c){
            return complex(real + c.real, img + c.img);
        }

        complex operator-(complex &c){
            return complex(real - c.real, img - c.img);
        }
};

int main(){
	complex c1(14, -11), c2(7, 6), c3;

    c3 = c1 + c2;
    c1.output();
    c2.output();
    c3.output();
    c3 = c3 - c1;
    c3.output();
	return 0;
}

// c1------c1
// .add()-------+
// c2-------c2

// (a + bi)*(c + di)