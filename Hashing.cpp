#include<bits/stdc++.h>
using namespace std;
 
// int main()
// {
//     int arr[100];
//     int n;
//     cout<<"enter size of arry: ";
//     cin>>n;
//     for (int i = 0; i < n; i++)
//     {
//         cin>>arr[i];
//     }
//     //pre compute
//     int ar[n]={0};
//     for (int i = 0; i < n; i++)
//     {
//         ar[arr[i]]+=1;
//     }
//     for (int i = 0; i < n; i++)
//     {
//         cout<<i<<" "<<ar[i]<<endl;
//     }
//     return 0;
// }

// int main()
// {
//     string s;
//     getline(cin,s);
//     int n=s.length();
//     int hash[26]={0};
//     for (int i = 0; i < n; i++)
//     {
//         hash[s[i]-'a']++;
//     }
//     for (int i = 0; i < 26; i++)
//     {
//         if (hash[i]>0)
//         {
//             cout<<"number of times "<<char('a'+i)<<" appeares is: "<<hash[i]<<" "<<endl;

//         }   
//     }   
// }


int main()
{
    int arr[100];
    int n;
    cin>>n;
    map<int,int>mp;

    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
        mp[arr[i]]++;

    }
    // for (int i = 0; i < n; i++)
    // {
    //     cout<<i<<"--"<<mp[i]<<" "<<endl;
    // }
    for (auto i:mp)
    {
        cout<<i.first<<" "<<i.second<<endl;
    }
}