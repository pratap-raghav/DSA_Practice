#include<iostream>
using namespace std;

template <class data>

data sorted(data a[], int n){
	for(int i=0; i<n; i++){
        for(int j=i+1; j<n; j++) { 
			if(a[i]>a[j]){
                data temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
} 

int main(){
	int arri[20], n;
	float arrf[20];
	double arrd[20];
	
	cout<<"Enter number of element for IntArray(<20): ";
	cin>>n;
	cout<<"Enter element for IntArray"<<endl;
	
	for(int i=0; i<n; i++){
		cout<<"Element "<<i+1<<":";
		cin>>arri[i];
	}
	
	cout<<"\n\nSorted IntArray:"<<endl;
	sorted(arri, n);
	for (int i = 0; i<n; i++){
		cout<<arri[i]<<"\t";
	}
	
	cout<<"\n\nEnter number of element for FloatArray(<20): ";
	cin>>n;
	cout<<"Enter element for FloatArray"<<endl;
	
	for(int i=0; i<n; i++){
		cout<<"Element "<<i+1<<":";
		cin>>arrf[i];
	}
	
	cout<<"\n\nSorted FloatArray:"<<endl;
	sorted(arrf, n);
	for (int i = 0; i<n; i++){
		cout<<arrf[i]<<"\t";
	}
	
	cout<<"\n\nEnter number of element for DoubleArray(<20): ";
	cin>>n;
	cout<<"Enter element for DoubleArray"<<endl;
	
	for(int i=0; i<n; i++){
		cout<<"Element "<<i+1<<":";
		cin>>arrd[i];
	}
	
	cout<<"\n\nSorted DoubleArray:"<<endl;
	sorted(arrd, n);
	for (int i = 0; i<n; i++){
		cout<<arrd[i]<<"\t";
	}
	
	return 0;
}
