#include<bits/stdc++.h>
using namespace std;
 
// int main()
// {
//     int n;
//     cout << "Enter the size of array : ";
//     cin >> n;

//     int arr[n];

//     cout << "Enter the elements of array : ";
//     for (int i = 0; i < n; i++)
//     {
//         cin >> arr[i];
//     }

//     int new_arr[n+1]={0};
//     for (int i = 0; i < n; i++)
//     {
//         int x;
//         x=arr[i];
//         new_arr[x]=1;
//     }
//     for (int i = 0; i <= n+1; i++)
//     {
//         cout<<new_arr[i]<<" ";
//     }
//     new_arr[0]=0;
//     for (int i = 1; i <= n+1; i++)
//     {
//         new_arr[i]=new_arr[i]+new_arr[i-1];
//     }
//     cout<<endl<<"incremented array is: "<<endl;
//     for (int i = 0; i <= n+1; i++)
//     {
//         cout<<new_arr[i]<<" ";
//     }
// }





// int main()
// {
//     int n;
//     cin >> n;
//     int* arr = new int[n];
//     for(int i = 0; i < n; i++)
//     {
//         cin >> arr[i];
//     }
//     int max = -1;
//     for(int i = 0; i < n; i++)
//     {
//         if(arr[i] > max)
//         {
//             max = arr[i];
//         }
//     }

//     int* freq = new int[max + 1];
//     for(int i = 0; i < max + 1; i++)
//     {
//         freq[i] = 0;
//     }
//     for(int i = 0; i < n; i++)
//     {
//         freq[arr[i]]++;
//     }
//     cout << "freq array: ";
//     for(int i = 0; i < max+1; i++)
//     {
//         cout << freq[i] << " ";
//     }
//     int k = 0;
//     for(int i = 0; i < max + 1; i++)
//     {
//         while(freq[i] > 0)
//         {
//             arr[k++] = i;
//             freq[i]--;
//         }
//     }
//     cout << endl << "sorted array: ";
//     for(int i = 0; i < n; i++)
//     {
//         cout << arr[i] << " ";
//     }
    
//     return 0;
// }

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

    cout << "The array is : ";
    int max=0;
    for (int i = 0; i < n; i++)
    {
        if(arr[i]>max)
        {
            max=arr[i];// to get the size of new array
        }
        cout << arr[i] << " ";
    }
    cout << endl;

    int ar[max+1]={0};// set all elements as 0
    int x=0;
    for (int i = 0; i < n; i++)
    {
        x=arr[i];//set x to the value present at the index of the origional array 
        ar[x]=1;//set value at the index x of new array to 1 ,rest elements remains 0
    }
    cout<<"incremened array is: ";
    for (int i = 0; i < max+1; i++)
    {
        cout<<ar[i]<< " ";
    }
    int k=0;
    for (int i = 0; i < max+1; i++)// loop runs from 0 to the size=largest element 
    {
        while (ar[i]>0)//to check where element is present
        {
            arr[k++]=i;//it will set the value of i to the index where ar[i]>0
            ar[i]--;// it will decrement the value at the index of ar 
        }
        
    }
    cout<<"sorted array is: "<<endl;
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    
    return 0;
}