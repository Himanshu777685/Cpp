#include<bits/stdc++.h>
using namespace std;

int missing(vector<int> nums){
    int n= nums.size();
    int sum = 0;
    int nsum = (n*(n+1))/2;
    for(int x : nums){
        sum = sum+x;
    }
    int ans = nsum - sum;
    return ans;
}


int main(){
    vector<int> arr ={0,1,2,3,6,7,8,5};
    cout<<missing(arr)<<endl;
}