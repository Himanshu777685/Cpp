#include<bits/stdc++.h>
using namespace std;

void sortcolor(vector<int>& arr){
    int mid = 0;
    int low = 0;
    int n = arr.size();
    int high = n-1;

    while(mid<=high){
        if(arr[mid] == 0){
            swap(arr[low],arr[mid]);
            low++;
            mid++;
        }
        else if(arr[mid]==1){
            mid++;
        }else{
            swap(arr[mid], arr[high]);
            high--;
        }
    }
}

int main(){
    vector<int> arr ={1,0,0,1,2,0,2};
    sortcolor(arr);
    for(int x : arr){
        cout<< x <<"    ";
    }

}