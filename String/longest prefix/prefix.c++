#include<bits/stdc++.h>
using namespace std;

string longestPrefix(vector<string>& v){
    int n = INT_MAX;
    for(string s : v){
        n = min(n , int(s.length()));
    }

    string ans = "";
    
    for(int i = 0 ; i < n ; i++){
        char c = v[0][i];
        for(int j = 1 ; j < v.size() ; j++){
            if(v[j][i] != c){
                return ans;
            }
        }
        ans += c;
    }

    return ans;
}

int main(){
    vector<string> v= {"hello" , "how"};
    cout<<longestPrefix(v);

    // string s = "hello";
    // string f = s;
    // cout<<f;
}