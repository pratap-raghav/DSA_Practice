#include <bits/stdc++.h>
using namespace std;

int searchElement(int *arr, int n, int element)
{
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == element)
        {
            return i;
        }
    }
    return -1;
}

int insertElement(int *arr, int n, int size, int element, int index)
{
    if (n < size)
    {
        for (int i = n; i >= index; i--)
        {
            arr[i + 1] = arr[i];
        }
        arr[index] = element;
        cout << "Element added" << endl;
        return n + 1;
    }
    cout << "Array already full, element not added" << endl;
    return n;
}

int deleteElement(int *arr, int element, int n)
{
    int index = searchElement(arr, n, element);
    if (index != -1)
    {
        for (int i = index; i <= n; i++)
        {
            arr[i] = arr[i + 1];
        }
        cout << "Element deleted" << endl;
        return n - 1;
    }
    cout << "Element not found" << endl;
    return n;
}

void printArray(int *arr, int n)
{
    cout << "Array: ";
    for (int i = 0; i <= n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    return;
}

int main()
{
    int arr[100] = {1, 2, 3, 4, 5, 6, 7};
    int track = 0;
    // cout<<"Enter elements - ";
    // cin>>track;
    // track--;
    // cout<<"Enter elements into array - "<<endl;
    // for(int i=0; i<=track; i++){
    //     cin>>arr[i];
    // }
    track = 6;
    printArray(arr, track);
    track = insertElement(arr, track, 100, 12, 5);
    printArray(arr, track);
    track = deleteElement(arr, 12, track);
    printArray(arr, track);
    return 0;
}