#include<bits/stdc++.h>
using namespace std;

int subarray(vector<int> arr , int k){
    int count =0;
    int n = arr.size();
    vector<int> ps (n , 0);
    //first we make prefixsum arra..
    ps[0] =arr[0];
    for(int i =1 ; i<n ;i++){
        ps[i] = ps[i-1]+arr[i];
    }

    // now our prefix sum is read and now we use hash map;

    unordered_map<int ,int>m;
    for(int i =0 ; i<n; i++){
        if(ps[i] == k) count++;

        int val = ps[i] - k;
        if(m.find(val) != m.end()){
            count += m[val];
        }
        m[ps[i]]++;
    }
return count;
}

int main(){

    vector<int> arr ={9,4,20,3,10,5};
    int ans = subarray(arr , 33);
    cout<<ans;

}

