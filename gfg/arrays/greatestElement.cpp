#include <bits/stdc++.h>
using namespace std;

int maxElement(vector <int> v){
    int maximum = INT_MIN;
    int size = v.size();
    for (int i = 0; i < size; i++)
    {
        maximum = maximum < v.at(i) ? v.at(i) : maximum;
    }
    return maximum;
}

int main()
{
    vector<int> v = {12, 43, 65, 13, 100, -1, -43, 159};
    
    int maximum = maxElement(v);
    cout << maximum;
    return 0;
}