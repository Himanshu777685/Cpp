#include<bits/stdc++.h>
using namespace std;

bool check(vector<int>& nums){
    int flag = 0;
    int n = nums.size();
    bool SR = true;

    for(int i = 0 ; i< n;i++){
        if(nums[i]>nums[(i+1)%n]){
            flag++;
            if(flag>1){
                SR =false;
                break;
            }
        }
    }
    return SR;

}

int main(){
    vector<int> arr ={5,6,7,8,1,2,8,3,4};

    cout<<check(arr)<<endl;
}