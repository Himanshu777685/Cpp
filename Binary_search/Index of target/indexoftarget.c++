#include<bits/stdc++.h>
using namespace std;

int indexOf(vector<int>& v , int target){
    int n = v.size();
    int low = 0;
    int high = n-1;
    while(low <= high){
        int mid = low + ((high - low)/2);
        if(v[mid] > target){
            high = mid -1;
        }
        else if(v[mid]< target){
            low = mid+1;
        }
        else if(v[mid] == target){
            return mid;
        }
    }
    return -1;
}

int main(){
    vector <int> v= {1,2,3,4,5,6,7,8,9};
    cout<< indexOf( v, 1);

}