class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n = nums.size();
        if (n <= 2) return n;

        int p1 = 1;
        int p2 = 1;
        int count = 1;

        while (p2 < n) {
            if (nums[p2] == nums[p2 - 1]) {
                count++;
            } else {
                count = 1;
            }

            if (count <= 2) {
                nums[p1] = nums[p2];
                p1++;
            }

            p2++;
        }

        return p1;
    }
};