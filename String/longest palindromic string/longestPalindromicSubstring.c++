#include<bits/stdc++.h>
using namespace std;

string palindromicString(string s){
    int n = s.length();
    int ans = 0;
    int len = 1;

    for(int i = 0 ; i < n ; i++){
        int l = i;
        int r = i+1;
        while(l >= 0 && r < n && s[l] == s[r]){
            if(len < r-l+1){
                ans = l;
                len = r-l+1;
            }
            l--;
            r++;
        }

        r = i;
        l = i;
        while(l >= 0 && r < n && s[l] == s[r]){
            if(len < r-l+1){
                ans = l;
                len = r-l+1;
            }
            l--;
            r++;
        }
    }

    return s.substr(ans , len);
}

int main(){
    cout<<palindromicString("abaababba");
}