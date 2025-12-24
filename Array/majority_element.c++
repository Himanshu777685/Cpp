#include <bits/stdc++.h>
using namespace std;

int majority(vector<int> nums)
{
    int count = 0;
    int ans = nums[0];
    int n = nums.size();
    for (int i = 0; i < n; i++)
    {
        if (count == 0)
        {
            ans = nums[i];
        }
        if (ans == nums[i])
        {
            count++;
        }
        else
        {
            count--;
        }
    }
    return ans;
}

int main()
{
    vector<int> arr = {2, 2, 3, 4, 2, 2, 5, 2, 2};
    int ans = majority(arr);
    cout << ans;
}