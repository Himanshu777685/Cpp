#include<bits/stdc++.h>
using namespace std;

int depth(string s){
    int ans = 0;
    int d = 0;

    for(char c : s){
        if(c == '('){
            d++;
        }
        if(c == ')'){
            d--;
        }
        ans = max(ans , d);
    }
    return ans;
}