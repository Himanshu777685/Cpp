#include<bits/stdc++.h>
using namespace std;

int search(vector<int>& v , int target){
    int low = 0;
    int high = v.size()-1;
    int ans = -1;

    while(low<=high){
        int mid = low + (high - low)/2;
        if(v[mid] == target){
            return mid;
        }
        if(v[low]<=v[mid]){
            if(v[low]<=target && v[mid]>target){
                high = mid -1;
            }else{
                low = mid +1;
            }
        }else{
            if(v[mid]<=target && v[high] > target){
                low = mid +1;
            }else{
                high = mid -1;
            }
        }
    }
    return ans;
}

int main(){
    vector<int> v = {7,8,9,1,2,3,4,5,6};
    cout<<search(v,4);
}