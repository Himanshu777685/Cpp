#include<bits/stdc++.h>
using namespace std;

int lowerBound(vector<int> v , int target){
    int low = 0;
    int high = v.size()-1;
    int ans = v.size();
    while(high>=low){
        int mid = low + ((high - low)/2);
        if(v[mid] >= target){
            ans = mid;
            high = mid -1;
        }else{
            low = mid+1;
        }
    }
    return ans;

}

int main(){
    vector<int> v = {1,2,3,4};
    cout<<lowerBound(v,10);
}