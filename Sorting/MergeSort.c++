#include<bits/stdc++.h>
using namespace std;


void merge(int arr[] , int low , int mid , int high){
    vector<int> temp;
    int l = low;
    int r = mid+1;

    while(l<=mid && high>=mid+1){
        if(arr[l]<arr[r]){
            temp.push_back(arr[l]);
            l++;
        }else{
            temp.push_back(arr[r]);
            r++;
        }
    }
    while(l<=mid){
        temp.push_back(arr[l]);
        l++;
    };
    while(r<=high){
        temp.push_back(arr[r]);
        r++;
    }

    for(int i = 0; i<temp.size() ; i++){
        arr[low+i] = temp[i];
    }
}


void mergesort(int arr[] , int low , int high){
    int mid = (low + high)/2;
    if(high <= low){
        return;
    }
    mergesort(arr , low , mid);
    mergesort(arr , mid+1 , high);
    merge(arr , low , mid , high );
}


int main(){
    int arr[7] = {1,4,6,2,3,8,9};
    mergesort(arr , 0,6);

    for(int i = 0 ; i<7 ; i++){
        cout<<arr[i]<<"     ";
    }
}