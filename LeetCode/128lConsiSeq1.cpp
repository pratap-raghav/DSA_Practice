#include <bits/stdc++.h>

using namespace std;

int longestConsecutive(vector<int>& nums) {
        unordered_set<int> num;

        for(int it : nums){
            // cout<<it<<endl;

            num.insert(it);
        }

        // for(int it : num){
        //     cout<<it<<endl;
        // }

        int idx = 0;
        vector<vector<int>> grp;
        vector<int> track;

        for(int it : num){
            auto index = find(track.begin(), track.end(), (it-1));
            int loc = distance(track.begin(), index);
            // cout<<it<<"    "<<loc<<endl;
            if( loc == track.size()){
                grp.push_back({it});
                track.push_back(it);
            }
            else{
                grp[loc].push_back(it);
                track[loc]=it;
            }
        }
        
        for(vector<int> grpit : grp){
            int t=0;
            for(int it : grpit){
                cout<<it<<"    ";
                t++;
            }
            cout<<endl;
        }


        return 0;

}

int main(){
    vector<int> v = {0,3,7,2,5,8,4,6,0,1};
    // auto it = find(v.begin(), v.end(), 10);
    // cout << distance(v.begin(), it);
    // cout<<longestConsecutive(v);
    longestConsecutive(v);
    return 0;

}