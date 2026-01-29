#include<bits/stdc++.h>
using namespace std;

int koko(vector<int>& v , int hrs){
    int low = 1;
    int high = *max_element(v.begin() , v.end());
    int ans = high;

    while(low <= high){
        int mid = low + (high - low)/2;

        int t_hrs = 0;

        for(int pile : v){
            t_hrs += pile/mid;
            if(pile%mid){
                t_hrs++;
            } 
        }

        if(t_hrs > hrs){
            low = mid + 1;
        }else{
            ans = mid;
            high = mid -1;
        }

    }

    return ans;
}

int main(){
    vector<int> v = {30 , 11 , 23 , 4 , 20};

    cout<<koko(v,6);
}