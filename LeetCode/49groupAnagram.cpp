#include<bits/stdc++.h>
#include<iostream>
#include<vector>
#include<string>

using namespace std;


vector<vector<string>> groupAnagrams(vector<string>& strs) {

    vector<string> temp;
    unordered_map<string, vector<int>> m;
    vector<vector<string>> result;
    

    for(string s : strs){
        sort(s.begin(), s.end());
        temp.push_back(s);
    }
    for(int i = 0; i<temp.size(); i++){
        m[temp[i]].push_back(i);
    }
    for(auto mElement : m){
        vector<string> inter;
        for(auto mVector : mElement.second){
            inter.push_back(strs[mVector]);
        }
        result.push_back(inter);
    }
    return result;
}

int main(){

    vector<string> st = {"eat","tea","tan","ate","nat","bat"};

    groupAnagrams(st);
    
    return 0;
}