#include<bits/stdc++.h>
using namespace std;

int subarray(vector<int> arr , int k){
    int ans = 0 ; 
    int n = arr.size();
    vector<int>ps(n,0);

    ps[0] = arr[0];
    for(int i =1 ; i<n ;i++){
        ps[i] = ps[i-1]+arr[i];
    }

    unordered_map<int ,int>m;
    for(int j = 0; j<n ;j++){
        if(ps[j]==k){
            ans = max(ans , j+1);
        }
        if(m.find(ps[j]) == m.end()){
             m[ps[j]]=j;
        }

        int val = ps[j]-k;
        if(m.find(val)!=m.end()){
            ans = max(ans ,(j-(m[val])));
        }
    }
    return ans;
}

int main(){

    vector<int> arr ={1, 2, 3, 1, 0,1, 1, 1,0 , 0, 1};
    int ans = subarray(arr , 2);
    cout<<ans;

}

