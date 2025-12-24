#include<bits/stdc++.h>
using namespace std;

int maxsubarray(vector<int> arr){
    int sum = 0;
    int maxsum = INT_MIN;  
    int n = arr.size();
    for(int i =0; i<n ; i++){
        sum = sum + arr[i];
        maxsum = max(sum , maxsum);
        if(sum<0){
            sum = 0;
        }
    }
    return maxsum;
}

int main(){
    vector<int> arr = {9,4,20,-10,5};
    int ans = maxsubarray(arr);
    cout<<ans<< endl ;
    return 0;
}
