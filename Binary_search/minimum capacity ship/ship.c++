#include<bits/stdc++.h>
using namespace std;

int ship(vector<int>& v , int days){
    int low = *max_element(v.begin() , v.end());
    int high = 0;
    for(int w : v){
        high += w;
    }

    int ans = high;

    while(low <= high){
        int mid = low + (high - low)/2;
        int d = 1;      
        int sum = 0;

        for(int i = 0; i < v.size(); i++){
            if(sum + v[i] <= mid){
                sum += v[i];
            } else {
                d++;           
                sum = v[i];    
            }
        }

        if(d<=days){
            ans = min(mid , ans);
            high = mid - 1;
        }else{
            low = mid + 1;
        }
    }
    return ans;
}

int main(){
    vector<int> v = {1,2,3,4,5,6,7,8,9,10};
    cout<<ship(v,5);
}