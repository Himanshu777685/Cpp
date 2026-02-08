#include<bits/stdc++.h>
using namespace std;

string sort(string s){
    string ans = "";
    unordered_map<char , int> m1;
    for(char c : s){
        m1[c]++;
    }
    
    vector<vector<char>> buckets(s.length() + 1);
    for(auto it : m1){
        buckets[it.second].push_back(it.first);
    }

    for(int i = s.length() ; i>0 ; i--){
        for(char c : buckets[i]){
            ans += string(i , c);
        }
    }

    return ans;
}

int main(){
    string s = "tTree";
    cout<<sort(s);
}