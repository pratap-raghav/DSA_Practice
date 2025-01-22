#include<iostream>
#include<string>
#include<map>

using namespace std;

bool isAnagram(string s, string t) {
    map<char, int> m;

    for(auto element : s){
        if(m.find(element) == m.end()){
            m.insert({element, 1});
        }
        else{
            m[element]++;
        }
    }

    for(auto element : t){
        if(m.find(element) != m.end()){
            m[element]--;
        }
        else{
            return false;
        }
    }

    for(auto key : m){
        if(key.second!=0){
            return false;
        }
    }
    return true;
}


int main(){

    string s = "rat", t = "carrr";
    cout<<"Anagram (0-False / 1-True)- "<<isAnagram(s,t);
    return 0;
}