#include<bits/stdc++.h>
using namespace std;

string largestOddNumber(string s) {
    int n = s.length();
    string ans = "";
    for(int i = n-1 ;  i >= 0 ; i--){
        if(int(s[i])%2 == 0){
            s.pop_back();
        }else{
            return s;
        }
    }
    return ans;
}


int main() {
    string s = "123452";
    cout<<largestOddNumber(s);
}