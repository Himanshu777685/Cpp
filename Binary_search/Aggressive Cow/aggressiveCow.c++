#include<bits/stdc++.h>
using namespace std;


bool canPlaced(vector<int>& v , int c , int distance){
    int cow = 1;
    int last = v[0];
    for(int i = 1 ; i< v.size() ; i++){
        if(v[i]>= last + distance){
            cow++;
            last = v[i];
        }
        if(cow>=c) return true;
    }
    return false;
}
int cows(vector<int>& v , int c ){
    sort(v.begin() , v.end());
    int ans = 0;
    int low = 1;
    int high = v[v.size() -1] - v[0];

    while(low <= high){
        int mid = low + (high - low )/2;
        
        if(canPlaced(v , c, mid)){
            low = mid + 1;
            ans = mid;
        }else{
            high = mid -1;
        }
    }
    return ans;
}

int main(){
    vector<int> v= {2, 12, 11, 3, 26, 7};
    cout<<cows( v, 5);
}