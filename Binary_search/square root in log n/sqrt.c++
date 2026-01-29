#include<bits/stdc++.h>
using namespace std;

int sqrt(int n){
    if(n==0 || n==1) return n;

    int low = 2;
    int high = n/2;
    int ans;

    while(low<=high){
        int mid = low + (high - low)/2;
        int sqr = mid * mid;
        if(sqr == n){
            return mid;
        }
        else if(sqr < n){
            ans = mid;
            low = mid +1;
        }else{
            high = mid -1;
        }
    }
    return ans;
}

int main(){
    int n = 150;
    cout<<sqrt(n);
}