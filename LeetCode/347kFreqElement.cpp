#include<bits/stdc++.h>

using namespace std;

vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> count;
        for (int num : nums) {
            count[num]++;
        }

        vector<pair<int, int>> arr;
        for (const auto& p : count) {
            arr.push_back({p.second, p.first});
        }
        sort(arr.rbegin(), arr.rend());

        vector<int> res;
        for (int i = 0; i < k; ++i) {
            res.push_back(arr[i].second);
        }
        return res;
}

int main(){
    vector<int> v = {1,1,1,2,2,3,44,4,4,44,4,4,4,4,4,5,5,5,5,6,6,7,7,7,73,3,3,3,3};
    topKFrequent(v,2);
    return 0;
}