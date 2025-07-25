class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        vector<int> v;
        int n1 = 0, n2 = 0;
        while(n1<m && n2<n){
            if(nums1[n1]<nums2[n2]){
                v.push_back(nums1[n1]);
                n1++;
            }
            if(nums2[n2]<=nums1[n1]){
                v.push_back(nums2[n2]);
                n2++;
            }
        }
        while(n1<m){
            v.push_back(nums1[n1]);
            n1++;
        }
        while(n2<n){
            v.push_back(nums2[n2]);
            n2++;
        }
        for(int i = 0; i<(n+m); i++){
            nums1[i] = v[i];
        }
    }
};