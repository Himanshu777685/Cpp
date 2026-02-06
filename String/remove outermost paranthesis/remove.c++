#include<bits/stdc++.h>
using namespace std;

string remove(string s){
    // int n = 0;
    // string ans = "";
    // for(char c : s){
    //    if(c == '('){
    //     if(n >0) ans += c;
    //     n++;
    //    }else{
    //     n--;
    //     if(n > 0) ans += c;
    //    }
    // }
    // return ans;

    int n = -1;
        string ans ="";
        for(int i= 0; i<s.size() ;i++){
            if(s[i] == '('){
                n++;
                if(n!=0) ans += s[i];
            }else{
                if(n!=0) ans += s[i];
                n--;
            }
        }
        return ans;
}

int main(){
    string s = "(()())(())";
    cout<<remove(s);
    
}