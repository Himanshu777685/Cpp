#include<bits/stdc++.h>
using namespace std;

int singleElement(vector<int> nums){
    int ans = 0;
    for(int x : nums){
        ans ^= x;
    }
}