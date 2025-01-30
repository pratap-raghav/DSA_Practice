#include<iostream>
#include<vector>
#include <bits/stdc++.h>

using namespace std;

vector<int> twoSum(vector<int>& nums, int target) {
    int s = nums.size();
    for(int i =0; i<s; i++){

        auto it = find(nums.begin(), nums.end(), (target-nums[i]));
        int loc = distance(nums.begin(), it);

        if(loc != s && i!=loc){
            cout<<i<<", "<<loc<<endl;
            return {i, loc};
        }
    }
    return nums;
}

int main(){

    vector<int> v = {3,2,4};
    twoSum(v,6);

    // auto it = find(v.begin(), v.end(), 6);
    // cout << distance(v.begin(), it);
  
    return 0;
}