#include <bits/stdc++.h>

using namespace std;

int missingNumber(vector<int>& nums) {
        int ans=0, temp=0, s=nums.size(), cnt=0;
        while(cnt<s){
            ans ^= cnt;
            temp ^= nums[cnt];
            cnt++;
        }
        ans ^= cnt;
        ans ^= temp;
        return ans;
}

int main(){

    vector<int> nums = {3,0,1};
    cout<<missingNumber(nums);
    

    return 0;
}