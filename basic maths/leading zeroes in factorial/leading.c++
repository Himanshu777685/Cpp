#include<iostream>
using namespace std;


int trailingZeroes(int n)
{
   
    int ans = 0;
    while (n> 0)
    {
     n /= 5;
     ans += n;  
    }
    return ans;
}

int main(){
    cout<<trailingZeroes(5);
}