#include <bits/stdc++.h>
using namespace std;

 void insertionsort(vector<int>& nums, int i ,int n ){
    
    if(i==n){
        return ;
    }


    int j =i;
    while(j>=1 && nums[j-1]>nums[j]){
        swap(nums[j] , nums[j-1]);
        j--;
    }
    insertionsort(nums , i+1 , n);
}



int main() {
    vector<int> nums = {1, 3, 2, 5, 7, 5};

    insertionsort(nums ,0 ,nums.size());

    for (int x : nums)
        cout << x << " ";
}


