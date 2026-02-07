#include<bits/stdc++.h>
using namespace std;

bool anagram(string s , string t){
    if(s.length() != t.length()) return false;

    unordered_map<char ,int> m1;
    unordered_map<char ,int> m2;
    
    for(char c :s){
        m1[c]++;
    }
    for(char c :t){
        m2[c]++;
    }

    return m1 == m2;
}

int main(){
    string s = "care";
    string t = "race";

    cout<<anagram(s,t);
}