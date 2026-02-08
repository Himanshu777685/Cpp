#include<bits/stdc++.h>
using namespace std;

int romanToInt(string s){
    unordered_map<char , int> m;
    int ans = 0;
    m['I'] = 1; 
    m['V'] = 5; 
    m['X'] = 10; 
    m['L'] = 50; 
    m['C'] = 100; 
    m['D'] = 500; 
    m['M'] = 1000; 

    for(int i = s.length()-1 ; i>=0 ; i--){
        if(m[s[i]] >= ans){
            ans += m[s[i]];
        }else{
            ans = m[s[i]] -ans;
        }
    }
    return ans;
}