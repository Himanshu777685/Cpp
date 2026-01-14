#include<bits/stdc++.h>
using namespace std;

int longest(vector<int> v){
    unordered_set<int> s = {v.begin() , v.end()};
    int largest = 0 ;
    for(int n : s){
        if(s.find(n-1)==s.end()){
            int current = n;
            int length = 1;
            while(s.find(current+1)!=s.end()){
                current += 1;
                length++; 
            }
            largest = max(largest , length);
        }
    }
    return largest;
}

int main(){
    vector<int> n = {1,2,3,5,6,1,1,1,4,100,101,103,102,105,104,106,107};
    int ans = longest(n);
    cout<<ans<<endl;
}
