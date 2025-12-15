#include <bits\stdc++.h>
using namespace std;

int partition(int arr[], int low, int high)
{
    int i = low;
    int j = high;
    int pivot = arr[low];

    while (i < j)
    {
        while (arr[i] <= pivot && i <= high - 1)
        {
            i++;
        }
        while (arr[j] > pivot && j >= low + 1)
        {
            j--;
        }
        if (i < j)
        {
            swap(arr[i], arr[j]);
        }
    }
    swap(arr[j],arr[low]);
    return j;
}

void qs(int arr[], int low, int high)
{
    if (low < high)
    {
        int pr = partition(arr, low, high);
        qs(arr, low, pr - 1);
        qs(arr, pr + 1, high);
    }else{
        return;
    }
}

int main()
{
    int arr[] = {1, 5, 2, 4, 3, 7, 6, 5, 2, 9, 10};

    qs(arr, 0, 10);
    for (int i = 0; i < 11; i++)
    {
        cout << arr[i] << "     ";
    }
}