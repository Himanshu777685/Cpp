#include <bits/stdc++.h>
using namespace std;

int largest(vector<int> &nums)
{
    int l = INT_MIN;

    for (int x : nums)
    {
        l = max(x, l);
    }
    return l;
}
int secondLargestElement(vector<int> &nums)
{
    // your code goes here

    int l1 = largest(nums);
    nums.erase(remove(nums.begin(), nums.end(), l1), nums.end());

    if (nums.empty())
    {
        return -1;
    }
    else
    {
        int l2 = largest(nums);
        return l2;
    }
}

int main()
{
    vector<int> nums = {4,4,4,4,4,4};
    int l2 = secondLargestElement(nums);
    cout << l2 << endl;
}