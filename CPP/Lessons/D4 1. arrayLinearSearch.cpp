#include <iostream>
using namespace std;



int main() {
	
	int n, e, i, t=-1;
	cout<<"Enter number of elements for array: ";
	cin>>n;
	
	int *arr = new int[n];
	
	
	cout<<"Enter elements for array"<<endl;
	for(i = 0; i<n; i++){
		cout<<endl<<"Element at "<<i<<": ";
		cin>>arr[i];
	}
	
	
	cout<<"\n\nElements of array: \n";
	for(i = 0; i<n; i++){
		cout<<arr[i]<<"\t";
	}
	
	
	cout<<"\n\nEnter the element you want to search: ";
	cin>>e;
	
	
	for(i = 0; i<n; i++){
		if(arr[i]==e){
			t=1;
			break;
		}
	}
	
	
	if(t==1){
		cout<<e<<" was found at "<<i;
	}
	else{
		cout<<e<<" not found";
	}
	
    return 0;
}
