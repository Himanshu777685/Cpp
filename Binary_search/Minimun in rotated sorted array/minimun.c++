#include<bits/stdc++.h>
using namespace std;

int minimun(vector<int>& v){
    int low = 0;
    int high = v.size() -1;
    int ans = INT_MAX;

    while(low <= high){
        int mid = low + (high -low)/2;

        if(v[low] <= v[high]){
            ans = min(ans , v[low]);
            break;
        }

        if(v[mid] <= v[high]){
            ans = min(v[mid] , ans);
            high = mid -1;
        }else{
            ans = min(v[low] , ans);
            low = mid+1;
        }

        // 
    }

    return ans;
}

int main(){
    vector<int> v = {6,7,1,2,3,4,5};
    cout<<minimun(v);
}