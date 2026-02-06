#include<bits/stdc++.h>
using namespace std;

string frequent(string& s){
    string ans = "";
    vector<int> ch(26 ,0);
    for(int i = 0 ; i < s.size() ; i++){
        if(isalpha(s[i])){
            int c = tolower(s[i]) - 'a';
            ch[c]++;
        }
    }
    int a = 0;
    for(int i = 1 ; i < 26 ; i++){
        if(ch[a] < ch[i]){
            a = i;
        }
    }
    ans += char('a' + a);
    return ans;

}

int main(){
    string s = "hello";
    cout<<frequent(s);
}