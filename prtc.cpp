#include <bits/stdc++.h>
using namespace std;

// int main()
// {
//     int n;
//     cin>>n;
// char ch='A';
// for (int i = 0; i < n; i++)
// {
//     for (int j = 0; j <= i; j++)
//     {
//         cout<<ch<<" ";
//         ch++;
//     }
//     cout<<endl;
// }
// ch='A';
// for (int i = 0; i < n; i++)
// {
//     for (int j = 0; j < i+1; j++)
//     {
//         cout<<char(ch+j)<<" ";
//     }
//     cout<<endl;
// }
// for (int i = 0; i < n; i++)
// {
//     for (int j = 0; j < n; j++)
//     {
//         if(j==0||j==n-1||i==0||i==n-1)
//         {
//             cout<<" * ";
//         }
//         else
//         {
//             cout<<"   ";
//         }
//     }
//     cout<<endl;
// }
//     return 0;
// }

// int main()
// {
//     int arr[50];
//     int n;
//     cin >> n;
//     for (int i = 0; i < n; i++)
//     {
//         cin >> arr[i];
//     }
//     // sort(arr,arr+n);
//     sort(arr,arr+n,greater<int>());
//     int max=*max_element(arr,arr+n);
//     cout<<max;
// for (int i = 0; i < n; i++)
// {
//     cout << arr[i];
// }
// }

// int main()
// {
//     string s="123";
//     do{
//         cout<<s<<endl;}
//         while (next_permutation(s.begin(),s.end()));

// }

// int main()
// {
//     int n;
//     cin >> n;
//     int count=0;
//     while (n>0)
//     {
//         int last=n%10;
//         cout<<last;
//         count++;
//         n=n/10;
//     }
// cout<<endl<<count;
// cout<<int(log10(n)+1);//another way to find the number of digits in a number

// }

// int main()
// {
//     int n;
//     cin>>n;
//     int digit=0;
//     while(n>0)
//     {
//         int last=n%10;
//         digit=(digit*10)+last;
//         n=n/10;
//     }
//     cout<<digit;
// }

// int main()
// {
//     int n;
//     cin>>n;
//     int revnum=0;
//     int x=n;
//     while (x>0)
//     {
//         int ld=x%10;
//         revnum=(revnum*10)+ld;
//         x=x/10;
//     }
//     if(revnum==n)
//     {
//         cout<<"it is a palindrome";
//     }

//     return 0;
// }

// int main()
// {
//     int x;
//     cin>>x;
//     int a=x;
//     int sum=0;
//     while (x>0)
//     {
//         int ld=x%10;
//         sum+=pow(ld,3);
//         x=x/10;
//     }
//     if(a==sum)
//     {
//         cout<<"armstrong";
//     }
//     return 0;
// }

// int main()
// {
//     int x;
//     cin>>x;
//     vector<int>v;
//     for (int i = 1; i <= sqrt(x); i++)// or we can use i*i<=x
//     {
//         if(x%i==0)
//         {
//             v.push_back(i);
//             cout<<i<<" ";
//             if((x/i)!=i)
//             {
//                 cout<<x/i<<" ";
//                 v.push_back(x/i);
//             }
//         }
//     }
//     cout<<endl;
//     sort(v.begin(),v.end());
//     for(auto i:v)
//     {
//         cout<<i<<" ";
//     }
// }

// int main()
// {
//     int n;
//     cin>>n;
//     int count=0;
//     for (int i = 1; i <= sqrt(n); i++)
//     {
//         if(n%i==0)
//         {
//             count++;
//             if((n/i)!=i)
//             {
//                 count++;
//             }
//         }
//     }
//     if(count==2)
//     {
//         cout<<"prime";
//     }
//     else{
//     cout<<"not prime";}
// }

// GCD
//  int main()
//  {
//      int n1,n2;
//      cin>>n1>>n2;
//      for(int i=min(n1,n2);i>=1;i--)
//      {
//          if((n1%i==0)&&(n2%i==0))
//          {
//              cout<<i;
//              break;
//          }
//      }
//  }
// alternative od greatest common divisor
//  int main()
//  {
//      int n1,n2;
//      cin>>n1>>n2;
//      while (n1>0&&n2>0)
//      {
//          if(n1>n2)
//          {
//              n1=n1%n2;
//          }
//          else{
//              n2=n2%n1;
//          }
//      }
//      if(n1==0)
//      {
//          cout<<n2;
//      }
//      else{
//          cout<<n1;
//      }
//      return 0;
//  }

// int main()
// {
//     int arr[] = {5, 4, 3, 2, 1};
//     int n=sizeof(arr)/sizeof(arr[0]);
//     for (int i = 0; i < n-2; i++)//n-2 because the last element will be sorted automatically
//     {
//         int min=i;
//         {
//             for (int j = i; j < n; j++)
//             {
//                 if(arr[min]>arr[j])
//                 {
//                     min=j;
//                 }
//             }
//             int temp=arr[i];
//             arr[i]=arr[min];
//             arr[min]=temp;
//         }

//     }
//     for (int i = 0; i < n; i++)
//     {
//         cout<<arr[i]<<" ";
//     }

// }

// int main()
// {
//     int arr[] = {5, 4, 3, 2, 1};
//     int n=sizeof(arr)/sizeof(arr[0]);
//     for (int j = 0; j < n; j++)
//     {
//         for (int i = 0; i < n-j; i++)
//         {
//         if (arr[i]>arr[i+1])
//         {
//             int temp=arr[i];
//             arr[i]=arr[i+1];
//             arr[i+1]=temp;
//         }
//         }

//     }
//     for (int i = 0; i < n; i++)
//     {
//         cout<<arr[i]<<" ";
//     }
// }

void bctrk(vector<int> &arr,int i, int n)
{
    if (i == n)
    {
        for (int i : arr)
        {
            cout << i << " ";
        }
        return;
    }
    else
    {
        bctrk(arr,i++, n );
    }
}

int main()
{
    vector<int> arr;
    int n;
    cout << "enter length of array: ";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        arr.push_back(x);
    }
    bctrk(arr,0,n);
}