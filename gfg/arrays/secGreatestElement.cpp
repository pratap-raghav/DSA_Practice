#include <bits/stdc++.h>
using namespace std;

int SecondMaxElement(vector <int> v){
    int fmax = INT_MIN, smax = INT_MIN;

    int size = v.size();

    if(size<2)
        return -1;

    // int res = -1;

    for (int i = 0; i < size; i++)
    {
        if(fmax < v.at(i)){
            smax = fmax;
            // res = i;
            fmax = v.at(i);
        }
        if(smax<v.at(i) && v.at(i)<fmax){
            smax = v.at(i);
            // res = 1;
        }
    }
    // return res;
    return smax;
}

int main()
{                     
    //                0   1   2   3   4    5    6    7    8
    vector<int> v = {12, 43, 65, 13, 100, -1, -43, 159, 200};
    
    int maximum = SecondMaxElement(v);
    cout << maximum;
    return 0;
}