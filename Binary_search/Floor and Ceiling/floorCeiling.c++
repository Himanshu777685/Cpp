#include<bits/stdc++.h>
using namespace std;

vector<int> floorCeiling(vector<int>& v, int x){
    int low = 0; 
    int high = v.size()-1;
    vector<int> ans ={-1,-1};

    while(low <= high){
        int mid = low + (high - low)/2;
        if(v[mid]==x){
            ans[0]= v[mid];
            ans[1] = v[mid];
            return ans;
        }
        else if(v[mid]>x){
            high = mid -1;
            ans[1] = v[mid];
        }else{
            low = mid+1;
            ans[0] = v[mid];
        }
        
    }
    
    return ans;
}

int main(){
    vector<int> v = {2,3,4,7,9,10};
    vector<int> ans = floorCeiling(v,11);
    for(int x : ans){
        cout<<x<<"  ";
    }
}