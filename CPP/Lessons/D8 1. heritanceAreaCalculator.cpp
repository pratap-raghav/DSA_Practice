#include<iostream>
using namespace std;

class calculate{
    protected:
		int a, b;
	   
    public:
        void getDimension(){
            cout<<"Enter Demension 1 :";
            cin>>a;
            cout<<"Enter Dimension 2 :";
            cin>>b;
        }
        
        void putResult(){
            cout<<"Dimension 1: "<<a<<"\nDimention 2: "<<b;
        }
};

class rectangle : public calculate{
	int areaRect;
	
	public:
	 	void getAreaRect(){
	    	getDimension();
	 	}
	 	void putAreaRect(){
	     	putResult();
	     	areaRect = a*b;
	     	cout<<"\nRectangle Area(Width="<<a<<", Length="<<b<<"): "<<areaRect<<endl<<endl;
	 	}
};

class triangle : public calculate
{
     int areaTri;
     
     public:
        void getAreaTri(){
           	getDimension();
       	}
       	void putAreaTri(){
           	putResult();
            areaTri = 0.5*a*b;
            cout<<"\nTriangle Area(Heigth="<<a<<", Base="<<b<<"): "<<areaTri<<endl<<endl;
        }
};

int main()
{
    rectangle r1;
    triangle t1;
    cout<<"____Rectangle Area____"<<endl;
    r1.getAreaRect();
    r1.putAreaRect();
    cout<<"\n\n____Triangle Area____"<<endl;
    t1.getAreaTri();
    t1.putAreaTri();
    return(0);
}
