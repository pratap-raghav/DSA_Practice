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
    int size = v.size();
//     int smax = -1;
//     if (size < 2)
//         return smax;

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

    int fmax = 0, smax = -1;
    for(int i = 0; i<size; i++){
        cout<<v.at(i)<<" ";
        if(v.at(fmax)<v.at(i)){
            smax = fmax;
            fmax = i;
        }
        if(v.at(smax) < v.at(i) && v.at(i)<v.at(fmax)){
            smax = i;
        }
    }
    return smax;
}

int main()
{
    //                0   1   2   3   4    5    6    7    8   9
    vector<int> v = {1222, 43, 65, 13, 100, -1, -43, 159, 200, 199};

    int maximum = SecondMaxElement(v);
    cout << maximum;
    return 0;
}