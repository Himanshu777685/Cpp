#include<bits/stdc++.h>
using namespace std;

bool searchII(vector<int> &v , int target){
    int low = 0; 
    int high = v.size()-1;
    // bool ans = false;

    while(low<=high){
        int mid = low + (high -low)/2;

        if(v[mid]== target){
            return true;
        }

        if(v[mid] == v[low] && v[mid] == v[high]){
            low++;
            high--;
            
        }

        
        else if(v[low]<=v[mid]){
            if(v[low]<=target && v[mid]> target){
                high = mid -1;
            }else{
                low = mid +1;
            }
        }else{
            if(v[mid]<target && v[high]>=target){
                low = mid + 1;
            }else{
                high = mid -1;
            }
        }
    }

    return false;
}


int main(){
    vector<int> v = {1,0,1,1,1};
    cout<<searchII(v,0);
}