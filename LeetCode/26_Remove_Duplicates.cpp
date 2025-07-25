class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int p1 = 0, p2 = 0, s = nums.size();
        while(p2<s){
            if(nums[p1]==nums[p2]){
                p2++;
            }
            else{
                p1++;
                nums[p1] = nums[p2];
            }
        }
        return p1+1;
    }
};