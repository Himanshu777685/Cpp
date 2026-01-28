#include<bits/stdc++.h>
using namespace std;

int peak(vector<int>& v){
    int n = v.size();
    int low = 0;
    int high = n -1;

    if(n==1) return 0;

    while(low <= high){
        int mid = low + (high - low)/2;

        if(mid == 0 && v[mid]>v[1]) return mid;
        if(mid == n-1 && v[mid]>v[n-2]) return mid;

        if(mid>0 && mid<n-1 && v[mid] > v[mid -1] && v[mid] > v[mid + 1]) return mid;

        if( v[mid] < v[mid+1]){
            low = mid +1;
        }
        else{
            high = mid -1;
        }

    }
    return -1;
}

int main(){
    vector<int> v = {4,6,3,2,1,0};
    cout<<peak(v);
}