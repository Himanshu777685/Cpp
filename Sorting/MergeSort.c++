#include<bits/stdc++.h>
using namespace std;


void merge(int arr[] , int low , int mid , int high){
    vector<int> temp;
    int l = low;
    int r = mid+1;

    while(l<=mid && high>=mid+1){  // this will take two pointer and compare both values 
        if(arr[l]<arr[r]){ // push the value of left pointer to temp
            temp.push_back(arr[l]);
            l++;
        }else{  //push the value of right pointer to temp
            temp.push_back(arr[r]);
            r++;
        }
    }
    while(l<=mid){  // if right part is exhausted the run for remaining left part
        temp.push_back(arr[l]);
        l++;
    };
    while(r<=high){ // if left part is exhausted run for remaining right part
        temp.push_back(arr[r]);
        r++;
    }

    for(int i = 0; i<temp.size() ; i++){   // copy the temp into original array
        arr[low+i] = temp[i];
    }
}


void mergesort(int arr[] , int low , int high){
    int mid = (low + high)/2;
    if(high <= low){
        return;
    }
    mergesort(arr , low , mid); //this will divide the left half
    mergesort(arr , mid+1 , high); // this will divide the right half
    merge(arr , low , mid , high ); // this will merge 
}


int main(){
    int arr[7] = {1,4,6,2,3,8,9};
    mergesort(arr , 0,6);

    for(int i = 0 ; i<7 ; i++){
        cout<<arr[i]<<"     ";
    }
}