#include<bits/stdc++.h>
using namespace std;
void lowerCase(string& s){
    for(int i = 0 ; i< s.length() ; i++){
        if(s[i]>='A' && s[i] <= 'Z'){
            s[i] = s[i] - 'A' + 'a';
        }
    }
}

bool ifPalindrome(string s){
    int st = 0;
    int end = s.length() -1;

    lowerCase(s);
    while(st < end){
        if((s[st] >= 'a' && s[st] <= 'z') || (s[st] >= '0' && s[st] <='9') ){
            if((s[end] >= 'a' && s[end] <= 'z') || (s[end] >= '0' && s[end] <='9') ){
                if(s[st] == s[end]){
                    st++;
                    end--;
                }else{
                   return false;
                }
            }else{
                end--;
            }
        }else{
            st++;
        }
    }

    return true;
}

int main(){
    string s = "A man, a plan, a canal: Panama";
    cout<<ifPalindrome(s);
}