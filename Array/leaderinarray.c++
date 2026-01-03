// A leader in an array is an element whose value is strictly greater than all elements to its right in the given array. The rightmost element is always a leader. The elements in the leader array must appear in the order they appear in the nums array.

#include<bits/stdc++.h>
using namespace std;

vector<int> leader(vector<int> v){
    vector<int> ans;
    int n = v.size();
    int currmax = v[n-1];
    ans.push_back(currmax);
    for(int i = n-2 ; i>= 0 ;i--){
        if(v[i] >= currmax){
            ans.push_back(v[i]);
            currmax = v[i];
        }
    }
    reverse(ans.begin(), ans.end());
    return ans;
}

int main(){
    vector<int> arr = {-3, 4, 5, 1, -4, -5};
    vector<int> ans = leader(arr);
    for(int x : ans){
        cout<<x<<"      ";
    }
}