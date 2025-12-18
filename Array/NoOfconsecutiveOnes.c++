#include<bits/stdc++.h>
using namespace std;

int consecutiveOnes(vector<int> nums){
    int n = nums.size();
    int temp = 0;
    int ans =0;
    for(int i = 0 ;i<n ;i++){
        if(nums[i] ==1){
            temp++;
            ans = max(temp , ans);
        }else{
            temp = 0;
        }
    }
    return ans;
}

int main(){
    vector<int> arr ={0,1,1,0,0,0,1,1,1,1,0,0,1,1,1,1,1,1,1};
    int num = consecutiveOnes(arr);
    cout<<num<<endl;
}