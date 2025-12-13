#include<bits/stdc++.h>
using namespace std;

vector<int> bubblesort(vector<int> nums){
    int n = nums.size();
    if( n==1){
        return nums;
    }
    for(int i = 0 ; i<n-1 ; i++){
        if(nums[i]>nums[i+1]){
            swap(nums[i],nums[i+1]);
        }
    }

    int last = nums.back();
    nums.pop_back();
    nums = bubblesort(nums);
    nums.push_back(last);
    return nums;





}
int main(){
    vector<int> nums ={2,4,6,1,5,1,8,3,2,0};

    vector<int> sorted = bubblesort(nums);
    for(int x: sorted){
        cout<<x<<"  ";
    }
}