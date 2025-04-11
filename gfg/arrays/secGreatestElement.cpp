#include <bits/stdc++.h>
using namespace std;

int SecondMaxElement(vector <int> v){
    int fmax = INT_MIN, smax = INT_MIN;

    int size = v.size();
    
    if(size<2)
        return -1;

    for (int i = 0; i < size; i++)
    {
        if(fmax < v.at(i)){
            smax = fmax;
            fmax = v.at(i);
        }
        if(smax<v.at(i) && v.at(i)<fmax){
            smax = v.at(i);
        }
    }
    return smax;
}

int main()
{
    vector<int> v = {12, 43, 65, 13, 100, -1, -43, 159, 200};
    
    int maximum = SecondMaxElement(v);
    cout << maximum;
    return 0;
}