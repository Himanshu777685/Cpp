#include<bits/stdc++.h>
using namespace std;

int bouquet(vector<int>& v , int m , int k){
    int low = *min_element(v.begin() , v.end());
    int high = *max_element(v.begin() , v.end());
    int ans = high;

    if((long long)m*k > v.size()){
        return -1;
    }

    while(low <= high){
        int mid = low + (high - low )/2;
        int n = 0;
        int f = 0;
        for(int i = 0 ; i < v.size(); i++){
            if(v[i]<=mid){
                f++;
                if(f==k){
                n++;
                f=0;
            }
            }
            
            else{
                f=0;
            }
        }

        if(n>=m){
            ans = min(mid,ans);
            high = mid -1;
        }else{
            low = mid +1;
        }
    }
    return ans;
}
int main(){
    vector<int> v = {7,7,7,7,7,13,11,12,7};
    cout<<bouquet(v,3,2);
}