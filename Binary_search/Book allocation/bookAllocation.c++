#include<bits/stdc++.h>
using namespace std;

bool canAllocate( vector<int>&v ,int k , int allowedPages){
    int student = 1;
    int book = v.size();
    int page = 0;
    for(int i =0 ; i< v.size() ; i++){
        if(v[i] > allowedPages) return false;
        if(v[i] + page <= allowedPages ){
            page += v[i];
        }else{
            student++;
            page = v[i];
        }
        if(student > k) return false;
    }

    return true;
}

int findPages(vector<int>& v , int k){
    int low = *max_element(v.begin() , v.end());
    int sum = 0;
    for(int i = 0 ; i <v.size() ; i++){
        sum += v[i];
    }
    int high =sum;
    int ans = -1;

    while(low <= high ){
        int mid = low + (high - low)/2;
        if(canAllocate(v , k , mid)){
            high = mid -1;
            ans = mid;
        }else{
            low = mid +1;
        }
    }

    return ans;
}

int main(){
    vector<int> v = {12, 34, 67, 90};
    cout<<findPages(v,2);
}