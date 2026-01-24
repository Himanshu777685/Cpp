#include<bits/stdc++.h>
using namespace std;

vector<int> searchRange(vector<int>& v , int x){
    int low = 0;
    int high = v.size()-1;
    int n = -1;
    vector<int> ans = {-1,-1};
    while(low <= high){
        int mid = low +(high - low)/2;

        if(v[mid] == x){
            n = mid;
            break;
        }
        else if(v[mid]>x){
            high = mid-1;
        }else{
            low = mid+1;
        }
    }

    if(n==-1){
        return ans;
    }else{
        int strt = n;
        while(v[strt] == x){
            strt--;
        };
        int end = n;
        while(v[end]==x){
            end++;
        }
        ans[0] = strt+1;
        ans[1] = end-1;
        return ans;
    }
}

int main(){
    vector<int> v = {1,2,3,3,3,4,5,5,5};
    vector<int> ans = searchRange(v,5);

    for(int x : ans){
        cout<<x<<"  ";
    }
}