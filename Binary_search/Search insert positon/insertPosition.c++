#include<bits/stdc++.h>
using namespace std;

int insert(vector<int>v , int x){
    int low = 0;
    int high = v.size()-1;
   
    while(low <= high){
        int mid = low + (high-low)/2;
        if(v[mid] == x){
            return mid;
        }
        else if(v[mid]>x){
            high = mid-1;
        }
        else{
            low = mid+1;
        }
    }
    return low;
    
}

int main(){
    vector<int> v = {2,4,5,6,8,10};
    cout<<insert(v,11);
}