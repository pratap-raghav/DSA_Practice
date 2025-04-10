#include <bits/stdc++.h>
using namespace std;

int searchElement(int* arr, int n, int element){
    for(int i=0; i<n; i++){
        if(arr[i]==element){
            return i;
        }
    }
    return -1;
}

int insertElement(int* arr, int n, int size, int element, int index){
    if(n<size){
        for(int i=n; i>-index; i--){
            arr[i+1]=arr[i];
        }
        arr[index]=element;
        cout<<"Element added"<<endl;
        return n+1;
    }
    cout<<"Array already full, element not added"<<endl;
}

int deleteElement(int* arr, int element, int n){
    int index = searchElement(arr, n, element);
    if(index!=-1){
        for(int i=index; i<=n; i++){
            arr[i]=arr[i+1];
        }
        return n-1;
    }
    return n;
}


int main(){
    int arr[] = {1,2,3,4,5,6,7,8,9,0};
    int index = searchElement(arr, 10, 8);
    cout<<index;
    return 0;
}