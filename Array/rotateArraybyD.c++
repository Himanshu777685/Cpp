#include<bits/stdc++.h>
using namespace std;

void leftrotate(vector<int>& nums , int d){
    int n = nums.size();
    d = d%n;
    reverse(nums.begin() , nums.begin()+(n));
    reverse(nums.begin()+d , nums.end());
    reverse(nums.begin() , nums.end());
}

void rightrotate(vector<int>& nums , int d){
    int n = nums.size();
    d = d%n;
    reverse(nums.begin() , nums.begin()+(n-d));
    reverse(nums.begin()+(n-d) , nums.end());
    reverse(nums.begin() , nums.end());
}


int main(){
    vector<int> arr ={1,2,3,4,5,6,7};
    rightrotate(arr , 4);
    for(int x:arr){
        cout<<x<<"  ";
    }
    
}