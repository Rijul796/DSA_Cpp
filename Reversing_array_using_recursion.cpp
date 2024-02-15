#include <bits/stdc++.h>
using namespace std;
void rev(int *arr, int low, int high)
{
    if (low >= high)
    {
        return;
    }
    int temp = arr[low];
    arr[low] = arr[high];
    arr[high] = temp;
    rev(arr,low+1,high-1);
}
int main()
{
    int n;
    cout << "Enter the size of array : ";
    cin >> n;

    int arr[n];

    cout << "Enter the elements of array : ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    rev(arr, 0, n - 1);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i];
    }
    return 0;
}