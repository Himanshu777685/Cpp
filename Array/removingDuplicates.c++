#include<bits/stdc++.h>
using namespace std;

void removeDuplicates(vector<int>& nums){
    for(int i = 1 ; i<nums.size() ; ){
        if(nums[i] == nums[i-1]){
            nums.erase(nums.begin()+i);
        }else{
            i++;
        }
    }
}

int main(){

    vector<int> nums ={1,1,2,2,3,4,4,5,6,6};

    removeDuplicates(nums);
    for(int i = 0 ; i< nums.size() ; i++){
        cout<<nums[i]<<"    ";
    }
    cout<<endl<<nums.size()<<endl;
}