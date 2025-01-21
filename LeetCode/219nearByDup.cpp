#include<iostream>
#include<vector>

using namespace std;

// bool containsNearbyDuplicate(vector<int>& nums, int k) {
//     int s = nums.size();

//     for (int i=0; i < s-1; i++) {
//         for (int j = i+1; j <= i+k; j++){

//             if(nums[i]==nums[j]){
//                 return true;
//             }
//         }
//     }
//     return false;
// }
bool containsNearbyDuplicate(vector<int>& nums, int k) {
    int s = nums.size();
    for (int i=0; i <= s-2; i++) {
        for (int j = i+1; j <= i+k &&  j<=s-1; j++){

            if(nums[i]==nums[j]){
                return true;
            }
        }
    }
    return false;
}



int main(){

    vector<int> arr = {1,2,3,1};
    int  k = 3;
    cout<<"Vector contains duplicate(0-False / 1-True)- "<<containsNearbyDuplicate(arr, k);

    return 0;
}