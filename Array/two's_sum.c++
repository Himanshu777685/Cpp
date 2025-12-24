// Given an array of integers nums and an integer target. Return the indices(0 - indexed) of two elements in nums such that they add up to target.
// Each input will have exactly one solution, and the same element cannot be used twice. Return the answer in increasing order.

#include<bits/stdc++.h>
using namespace std;

vector<int> twosum(vector<int> arr , int k){
    int n = arr.size();
    unordered_map<int , int>m;
    for(int i = 0 ; i < n ; i++){
        int val = k-arr[i+1];
        if(m.find(val)!=m.end()){
            
            return {m[val] , i};
        }

        m[arr[i]] =i;
    }

    return {};
}


int main(){
    vector<int> arr={1,2,32,42,5,2,1};
    vector<int> ans = twosum(arr , 32);
    for(int x : ans){
        cout<< x<<" , ";
    }
}