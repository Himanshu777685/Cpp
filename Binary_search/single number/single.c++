#include <bits/stdc++.h>
using namespace std;

int single(vector<int>& v){
    int n = v.size();
    int low = 0; 
    int high = n -1;

    if(n == 1) return v[0];

    while(low <= high){
        int mid = low + (high -low)/2;

       if(mid == 0 && v[0] != v[1]) return v[mid] ;

       if(mid == n-1 && v[n-1] != v[n-2]) return v[mid] ;

       if(mid>0 && mid <n && v[mid] != v[mid-1] && v[mid] != v[mid +1]) return v[mid];

       if(mid % 2 == 0){
        if(v[mid] == v[mid - 1]) {
            high = mid - 1;
        }else{
            low = mid + 1;
        }
       }else{
        if(v[mid] == v[mid -1]){
            low = mid + 1;
        }else{
            high = mid - 1;
        }
       }
    }

    return -1;
}

int main(){
    vector<int> v= {1,1,2};
    cout<<single(v);

}