#include<bits/stdc++.h>
using namespace std;

vector<int> rearrange(vector<int>& arr){
    int odd = 1; 
    int even = 0;
    int n = arr.size();
    vector<int> ans(n,0);
    
    for(int i =0 ; i<n ; i++){
        if(arr[i] < 0){
            ans[odd] =arr[i];
            odd = odd+2;
        }else{
            ans[even]= arr[i];
            even = even+2;
        }
    }

    return ans;
}

int main(){
    vector<int> arr = {-1 ,-3 , 4,5,2,-5};
    vector<int>ans = rearrange(arr);
    for(int x :  ans){
        cout<<x<<"      ";
    }

}