#include<iostream>
#include<vector>
#include<map>

using namespace std;

// Approach 1


// class Solution {
// public:
//     bool containsDuplicate(arrector<int>& nums) {
//         int s = nums.size();
//         for (int i = 0; i < s-1; i++) {
//             for (int j = i+1; j < s; j++){
//                 if(nums.at(i)==nums.at(j)){
//                     return true;
//                 }
//             }
//         }
//         return false;
//     }
// };

bool containsDuplicate(vector<int> & nums) {
    map<int, int> m;

    for (int i = 0; i < nums.size(); i++)
    {
        int key = nums[i];
        // loc = m.find(key);
        if(m.find(key) == m.end()){
            m.insert({key, 1});
        }
        else{
            return true;
        }
    }
    return false;
}

int main(){

    vector<int> arr = {1,2,3,4,5};
    cout<<"Vector contains duplicate(0-False / 1-True)- "<<containsDuplicate(arr);

    return 0;
}