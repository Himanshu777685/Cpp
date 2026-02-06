#include<bits/stdc++.h>
using namespace std;

string reversewords(string s){
    int n = s.length();
    string temp = "";
    string ans = "";

    for(int i = n-1 ; i>=0 ; i--){
        if(isalnum(s[i])){
            temp.insert(temp.begin() ,s[i]);
        }
        else{
            if(!temp.empty()){
                if (!ans.empty()) ans.push_back(' ');
                ans.append(temp);
                temp.clear();
            }
        }
       
    }
    if(!temp.empty()){
                if (!ans.empty()) ans.push_back(' ');
                ans.append(temp);
                temp.clear();
            }
    
    return ans;
}

int main(){
    string s = "  hello    world     ";
    string ans = reversewords(s);
    for(int i =0 ; i<ans.size() ; i++){
        cout<<ans[i];
    }
}