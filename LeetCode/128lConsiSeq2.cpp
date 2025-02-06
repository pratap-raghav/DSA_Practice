#include <bits/stdc++.h>

using namespace std;

int longestConsecutive(vector<int>& nums) {
        set<int> num;
        int len = INT_MIN, curLen = 0;
        for(int it : nums){
            num.insert(it);
        }
        int pre = *(num.begin());
        // cout<<pre;

        for(int it : num){
            if(it-1 == pre){
                curLen++;
                pre = it;
                
            }
            else{
                curLen=1;
                pre = it;
            }
            if(curLen>len){
                len = curLen;
            }
        }

        // cout<<len;

        return len;

}

int main(){
    vector<int> v = {0,3,7,2,5,8,4,6,0,1};
    // auto it = find(v.begin(), v.end(), 10);
    // cout << distance(v.begin(), it);
    // cout<<longestConsecutive(v);
    longestConsecutive(v);
    return 0;

}