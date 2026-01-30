#include<bits/stdc++.h>
using namespace std;

int missing(vector<int> & v , int k){
    int n =1;
    int ans = -1;
    int i =0;
    while(i<k){
        if(binary_search(v.begin() ,v.end() ,  n)){
            n++;
        }else{
            i++;
            ans = n;
            n++;
        }
    }
    return ans;
}

int main(){
    vector<int> v = { 1,2,3,4};
    cout<<missing(v,2);
}