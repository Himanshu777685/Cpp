#include<bits/stdc++.h>
using namespace std;

void move(vector<int>& nums){
    int n = nums.size();
    nums.erase(remove(nums.begin() , nums.end() ,0),nums.end());
    int k = nums.size();
    for(int i = 0 ; i<n-k ; i++){
        nums.push_back(0);
    }
}

int main(){
    vector<int> arr ={1,0,5,0,6,7,0,4};
    move(arr);
    for(int x:arr){
        cout<<x<< "     ";
    }
}