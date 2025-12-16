#include<bits/stdc++.h>
using namespace std;

int largestElement(vector<int>& nums ){
    int largest = INT_MIN;

    for(int x:nums){
        largest = max(x, largest);
    }
    return largest;
}

int main(){
    vector<int> nums ={1,3,4,6,2,0,99,-3,54,100};
    int l = largestElement(nums);
    cout<<l<<endl;

}