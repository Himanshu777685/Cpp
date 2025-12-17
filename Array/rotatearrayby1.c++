#include<bits/stdc++.h>
using namespace std;

void rotate(vector<int>& nums){
    int temp = nums[0];
    for(int i = 1 ;i<nums.size() ; i++){
        nums[i-1] = nums[i];
    }
    nums[nums.size()-1] = temp;
}

int main(){
    vector<int> nums = {1,2,4,3,2,5,5,2};
    rotate(nums);
    for(int x:nums){
        cout<<x<<"    ";
    }
}