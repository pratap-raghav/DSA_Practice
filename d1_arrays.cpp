#include<iostream>
using namespace std;

int bSearch(int arr[], int element, int length){
    int s = 0, e = length-1;

    while(s<=e){
        int mid  =(s+e)/2;
        if(arr[mid]==element){
            return mid;
        }

        else if(arr[mid]<element){
            s = mid + 1;
        }
        else if(arr[mid]>element){
            e = mid - 1;
        }
    }
    return -1;
}

int main(){

    // Array Print

    // int arr[] = {34,56,23,67,43,98,34,67,27,9,25};
    
    // int length = sizeof(arr)/sizeof(int);

    // cout<<"Array- ";
    // for(int i = 0; i<length; i++){
    //     cout<<arr[i]<<"  ";
    // }
    // cout<<endl<<endl<<"Array- "<<endl;

    // for(int i = 0; i<length; i++){

    //     cout<<arr+i<<"  "<<" - "<<*(arr+i)<<endl;

    // }

    

    // Linear Search

    // int arr[] = {34,56,23,67,43,98,34,67,27,9,25}, flag = 0;
    // int length = sizeof(arr)/sizeof(int);

    // int e;
    // cout<<"enter element to search- ";
    // cin>>e;
    // for(int i=0; i<length; i++){
    //     if(e==arr[i]){
    //         cout<<"element found at "<<i<<" index.";
    //         flag = 1;
    //         break;
    //     }
    // }

    // if(flag==0)
    //     cout<<"Element not found.";


    


    int arr[] = {23,  9,  25,  27,  34,  34,  43,  56,  67,  67,  98 }, flag, count = 0;
    int length = sizeof(arr)/sizeof(int), element;

    cout<<"Array- ";
    for(int i = 0; i<length; i++){
        cout<<arr[i]<<"  ";
    }
    for(int i=0; i<length; i++){
        flag = 0;
        for(int j=i; j<length; j++){

            count++;
            
            if(arr[i]>arr[j]){
                flag = 1;
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
        if(flag == 0){
            break;
        }
    }
    cout<<endl<<count<<endl;
    cout<<endl<<"Sorted Array- ";
    for(int i = 0; i<length; i++){
        cout<<arr[i]<<"  ";
    }

    cout<<endl<<"Enter element to search- ";
    cin>>element;

    int res = bSearch(arr, element, length);
    if(res != -1){
        cout<<"element found at "<<res<<" index.";
    }
    else{
        cout<<"element not found";
    }
    return 0;
}