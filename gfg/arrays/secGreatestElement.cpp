#include <bits/stdc++.h>
using namespace std;

// int maxElement(vector<int> &v)
// {
//     int maximum = INT_MIN;
//     int size = v.size();
//     for (int i = 0; i < size; i++)
//     {
//         maximum = maximum < v.at(i) ? v.at(i) : maximum;
//     }
//     return maximum;
// }

int SecondMaxElement(vector<int> &v)
{
    

//     int fmax = maxElement(v);
//     for (int i = 0; i < size; i++)
//     {
//         if (v.at(i) < fmax)
//         {
//             if (smax == -1)
//                 smax = i;
//             if (v.at(smax) < v.at(i))
//             {
//                 smax = i;
//             }
//         }
//     }
//     return smax;

    // int fmax = INT_MIN, smax = INT_MIN;
    // // int res = -1;

    // for (int i = 0; i < size; i++)
    // {
    //     if(fmax < v.at(i)){
    //         smax = fmax;
    //         // res = i;
    //         fmax = v.at(i);
    //     }
    //     if(smax<v.at(i) && v.at(i)<fmax){
    //         smax = v.at(i);
    //         // res = 1;
    //     }
    // }
    // // return res;
    // return smax;

    int s = v.size();
    if (s < 2) return -1;
    int smax = -1;

    int fmax = 0;
    for(int i = 1; i<s; i++){
        if(v.at(fmax)<v.at(i)){
            smax = fmax;
            fmax = i;
        }
        else if(v.at(i) != v.at(fmax)){
            if(smax==-1 || v.at(smax) < v.at(i)){
                smax = i;
            }
        }
    }
    return smax;
}

int main()
{
    //                0   1   2   3   4   5   6   7    8   9
    vector<int> v = {12, 43, 65, 13, 10, -1, -43, 159, 20, 199};

    int maximum = SecondMaxElement(v);
    cout << maximum;
    return 0;
}