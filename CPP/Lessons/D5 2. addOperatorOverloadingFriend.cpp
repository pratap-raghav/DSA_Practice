#include<iostream>
using namespace std;
class num
{
    int n;
   
    public:
        void getdata(){
    	cout << "Enter Number: ";
    	cin >> n;
	}
	
	void putdata(){
		cout<<n;
	}
       
        friend num operator+(num x, num y);
        
};

num operator+(num x, num y){
			num temp;
			temp.n = x.n + y.n;
            return temp;
        } 
        
int main()
{
    num c1,c2,c3;
    cout<<"No.1"<<endl;
    c1.getdata();
    c1.putdata();  
   
    cout<<"\n\nNo.2"<<endl;
    c2.getdata();
    c2.putdata();
       
   	c3 = c1 + c2;
   
    cout<<"\n\nResult :"<<endl;
   
    c3.putdata();
   
    return(0);
}
