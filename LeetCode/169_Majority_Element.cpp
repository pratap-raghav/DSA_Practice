class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int, int> m;
        int n = nums.size()/2;

        for(int e: nums){
            if(m.find(e) == m.end()){
                m.insert({e, 1});
            }
            else{
                m[e]++;
            }
        }
        for(auto it: m){
            if(it.second > n){
                return it.first;
            }
        }
        return -1;
    }
};