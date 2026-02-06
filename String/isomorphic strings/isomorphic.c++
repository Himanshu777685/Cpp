#include<bits/stdc++.h>
using namespace std;

bool isomorphic(string s1 , string s2){
    if(s1.length() != s1.length()) return false;
    unordered_map<char , char>m1;
    unordered_map<char , char>m2;

    for(int i = 0 ; i < s1.length() ; i++){
        char a = s1[i];
        char b = s2[i];

        if(m1.count(a) && m1[a]!= b ) return false;
        if(m2.count(b) && m2[b]!= a ) return false;

        m1[a] = b;
        m2[b] = a;
    }
    return true;
    
}
int main(){
    string s1 = "title";
    string s2 = "paper";

    cout<<isomorphic(s1,s2);
}