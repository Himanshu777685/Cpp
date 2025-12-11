#include <iostream>
#include <vector>

using namespace std;

int binarySearch(vector<int>arr , int tar ){
    int st = 0 , end = arr.size()-1;
    while(st <= end){

        int mid = st+ (end - st)/2;
        if(arr[mid] < tar){
            st = mid+1;
        }
        else if(arr[mid] > tar){
            end = mid- 1;
        }
        else{
            return mid;
        }


    }
    return -1;
}

int main(){
    vector<int> arr = {1,2,3,4,5,6,7,8,9};
    int tar = 5;
    cout<<binarySearch(arr , tar);
    return 0;
    
}