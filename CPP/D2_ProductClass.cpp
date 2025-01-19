// #include<iostream> 
// #include<string>
// using namespace std;

// class product{
//     public: 
//     int pid;
//     string pname;
//     int price;

//     void enterdata(){
//         cout<<"Product ID: ";
//         cin>>pid;
//         cout<<"Product name: ";
//         cin>>pname;
//         cout<<"Price: ";
//         cin>>price;
//     }

//     void printdata(){
//         cout<<"Product ID: "<<pid<<endl;
//         cout<<"Product name: "<<pname<<endl;
//         cout<<"Price: "<<price<<endl;
//     }

    

// };

// // Product Management

// int main(){
//     int id, size=2, flag=0;
//     product p[2];
//     for(int i=0;i<size;i++){
//         p[i].enterdata();
//     }

//     cout<<"Enter pid to search: "<<endl;
//     cin>>id;
//     for(int i=0;i<size;i++){
//         if(id==p[i].pid){
//             p[i].printdata();
//             flag = 1;
//             break;
//         }
//     }
//     if(flag==0){
//         cout<<"Item not found";
//     }

//     flag = 0;
//     cout<<"Enter pid to update price: "<<endl;
//     cin>>id;
//     for(int i=0;i<size;i++){
//         if(id==p[i].pid){
//             cout<<"Enter new price: ";
//             cin>>p[i].price;
//             cout<<"Updated info: ";
//             p[i].printdata();
//             flag = 1;
//             break;
//         }
//     }
//     if(flag==0){
//         cout<<"Item not found";
//     }
// }



//Reference variable in C++

#include<iostream>
using namespace std;


int main(){
	
	int a = 234, b = 44;
	int &a1 = a;
	cout<<a<<" "<<a1<<endl;
    cout<<&a<<" "<<&a1<<endl;
    a1=10;
    cout<<a<<" "<<a1<<endl;
    cout<<&a<<" "<<&a1<<endl;
	a1=b;
	cout<<b<<" "<<a1<<" "<<a<<endl;
    cout<<&b<<" "<<&a1<<" "<<&a<<endl;
	
	
	return 0;
}
