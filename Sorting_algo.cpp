#include <iostream>
using namespace std;

void selection_sort(int arr[], int n)
{
    for (int i = 0; i <= n - 2; i++) // last element will get sorted automatically so n-1 ,last index is n-1 in array so n-1-1
    {
        int min = i;
        int c = 0;
        for (int j = i; j <= n-1; j++)
        {
            if (arr[min] > arr[j])
            {
                min = j;
                c = 1;
            }
        }
        if (c == 1)
        {
            int temp = arr[i];
            arr[i] = arr[min];
            arr[min] = temp;
        }
        else{
            cout<<"the array is pre sorted-- ";
            break;
        }
    }
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}


void bubble_sort(int arr[],int n)
{
    for (int i = n-1; i >= 0; i--)//compare two and swap , at last index the array is sorted by +1 index everytime
    {
        int x=0;
        for (int j = 0; j <= i-1; j++)
        {
            if (arr[j]>arr[j+1])
            {
                int temp=arr[j+1];
                arr[j+1]=arr[j];
                arr[j]=temp;
                x=1;
            }   
        }
        if (x==0)
        {
            break;
        }
        
    }
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
}


void insertion_sort(int arr[],int n)
{
    for (int i = 0; i <= n-1; i++)
    {
        int j=i;
        while (j>0&&arr[j-1]>arr[j])//swap till no is at correct position
        {
            int temp=arr[j-1];
            arr[j-1]=arr[j];
            arr[j]=temp;
            j--;
        }
        
    }
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }    
}

int main()
{
    int n;
    cout << "enter size of array: ";
    cin >> n;
    int arr[100];
    cout << "enter elements: " << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    // cout << "the sorted array using selection sort is: " << endl;
    // selection_sort(arr, n);
    // cout << "the sorted array using bubble sort is: " << endl;
    // bubble_sort(arr,n);
    cout<<"the sorted array using insertion sort is: "<<endl;
    insertion_sort(arr,n);
    return 0;
}