#include <bits/stdc++.h>
using namespace std;

int upperBound(vector<int> v , int target){
    int ans = v.size();
    int low = 0;
    int high = v.size()-1;

    while(low <= high){
        int mid = low +(high - low)/2;
        if(v[mid]<=target){
            low = mid+1;
        }else{
            ans = mid;
            high = mid-1;
        }
    }
    return ans;
}

int main(){
    vector<int> v= {1,2,3,4,5};
    cout<<upperBound(v,4);
}