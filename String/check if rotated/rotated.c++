#include<bits/stdc++.h>
using namespace std;

bool rotated(string s , string t){
    if(s.length() != t.length()) return false;

    return (s+s).find(t) != string::npos;
}

int main(){
    string s = "abcccdc";
    string t = "cadcabc";
    cout<<rotated(s,t);
}