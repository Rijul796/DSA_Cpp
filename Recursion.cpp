#include <bits/stdc++.h>
using namespace std;
// int x = 10;
// int n = 0;
// void fun()
// {
//     if (x > n)
//     {
//         cout << n << endl;
//         n++;
//         fun();
//     }

//     return;
// }
// int main()
// {
//     fun();
//     return 0;
// }

// void fun(int i,int n)
// {
//     if(i>=n)
//     {
//         return ;
//     }
//     cout<<i<<" ";
//     fun(i+1,n);
// }
// int main()
// {
//     int i,n;
//     cin>>i>>n;
//     fun(i,n);
//     return 0;
// }

// void fun(int i, int n)
// {
//     if (i < 1)
//     {
//         return;
//     }
//     // cout << i << " ";//to print accordingly
//     fun(i - 1, n);
//     cout << i << " ";// to print in reverse order #backtracking
// }
// int main()
// {
//     int n;
//     cin >> n;
//     fun(n, n);
//     return 0;
// }


// void fun(int i,int n)
// {
//     if(i>n)
//     {
//         return ;
//     }
//     fun(i,n-1);
//     cout<<n<<" ";

// }
// int main()
// {
//     int i=1;
//     int n=10;
//     // cin>>i>>n;
//     fun(i,n);
//     return 0;
// }

// void fun(int n,int sum)
// {
//     if(n<1)
//     {
//         cout<<sum;
//         return ;
//     }
//     fun(n-1,sum+n);
// }

// int main()
// {
//     int n;
//     cin>>n;
//     fun(n,0);
//     return 0;
// }

// int fun(int n)
// {
//     if(n==0)
//     {
//         return 0;
//     }
//     return n+fun(n-1);
// }
// int main()
// {
//     int n;
//     cin>>n;
//     cout<<fun(n);
//     return 0;
// }

// int fact(int n)
// {
//     if (n==0 ||n==1)
//     {
//         return 1;
//     }
//     return n*fact(n-1);
// }
// int main()
// {
//     int n;
//     cin>>n;
//     cout<<fact(n);
//     return 0;
// }


// void fun(int i,int arr[],int n)
// {

//     if(i>=(n/2))
//     {
//         for (int j = 0; j < n; j++)
//         {
//             cout<<arr[j]<<" ";
//         }
        
//         return;
//     }
//     swap(arr[i],arr[n-i-1]);
//     fun(i+1,arr,n);

// }

// int main()
// {
//     int arr[100];
//     int n;
//     cout<<"enter size of array: ";
//     cin>>n;
//     for (int i = 0; i < n; i++)
//     {
//         cin>>arr[i];
//     }
//     fun(0,arr,n);
// }


//to compare two strings
// bool fun(int i,int n,int n1,string s,string s1)
// {
//     if(n!=n1)
//     {
//         return 0;
//     }
//     if (s[i]==s1[n-1-i])
//     {
//         return 1;
//     }
//     else
//     {
//         return 0;
//     }
//     fun(i+1,n,n1,s,s1);
    
// }
// int main()
// {
//     string s,s1;
//     cout<<"enter string s: ";
//     getline(cin,s);
//     cout<<"enter string s1: ";
//     getline(cin,s1);
//     int n=s.length();
//     int n1=s1.length();
//     cout<<boolalpha<<fun(0,n,n1,s,s1);
//     return 0;
// }


//palindrome
// bool fun(int i,int n,string s)
// {
//     if (i>=n/2)
//     {
//         return 1;
//     }
//     if(s[i]!=s[n-i-1])
//     {
//         return 0;
//     }    
//     else
//     {
//         return 1;
//     }
//     fun(i+1,n,s); 
// }
// int main()
// {
//     string s;
//     cout<<"enter string s: ";
//     getline(cin,s);
//     int n=s.length();
//     // cout<<boolalpha<<fun(0,n,s);
//     if (fun(0,n,s)==1)
//     {
//         cout<<"Palindrome";
//     }
//     else
//     {
//         cout<<"it is not a palindrome";
//     }
//     return 0;
// }



int fib(int n)
{
    if(n<=1)
    {
        return n;
    }
    return fib(n-1)+fib(n-2);
}

int main()
{
    int n;
    cin>>n;
    cout<<fib(n);
    return 0;
}