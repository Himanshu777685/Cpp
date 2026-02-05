#include<bits/stdc++.h>
using namespace std;

string greatest(string s){
    unordered_set<char> word;

    for(char st : s){
        word.insert(st);
    }

    for(char ch = 'Z' ;  ch >= 'A' ; ch--){
        if(word.count(ch) && word.count(tolower(ch))){
            return string(1,ch);
        }
    }
    return "";
}

int main(){
    string s= "lEeTcOdE";
    cout<<greatest(s);
}