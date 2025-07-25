// Naive approach

// class Solution {
// public:
//     void rotate(vector<int>& nums, int k) {
//         int s = nums.size();
//         k %= s;
//         vector<int> v;
//         for (int i = s - k; i < s; i++) {
//             v.push_back(nums[i]);
//         }

//         for (int i = 0; i < s - k; i++) {
//             nums[s - i - 1] = nums[s - k - i - 1];
//         }

//         for (int i = 0; i < k; i++) {
//             nums[i] = v[i];
//         }
//     }
// };

