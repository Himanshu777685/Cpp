#include<bits/stdc++.h>
using namespace std;

int divisor(vector<int>& v , int threshold){

    int low = 1;
    int high = *max_element(v.begin() , v.end());
    int ans = high;

    while(low <= high){
        int mid = low + (high - low)/2;
        int sum = 0;
        for(int i = 0; i<=v.size()-1 ; i++){
            sum = sum + (v[i]/mid);
            if(v[i]%mid){
                sum++;
            }
        }
        if(sum<=threshold){
            ans = min(mid , ans);
            high = mid -1;
        }else{
            low = mid +1;
        }
    }
    return ans;

}

int main(){
    vector<int> v = {44,22,33,11,1};
    cout<<divisor(v,5);
}