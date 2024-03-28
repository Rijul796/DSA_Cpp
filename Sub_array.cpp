#include<bits/stdc++.h>
using namespace std;

// void subset(char input[],char output[],int i,int j,vector<string>&list)
// {
//     if(input[i]=='\0')
//     {
//         output[j]='\0';
//         // if(output[0]=='\0')
//         // {
//         //     cout<<"null";
//         // }
//         // cout<<output<<endl;
//         string temp(output);
//         list.push_back(temp);
//         return ;
//     }

//     output[j]=input[i];
//     subset(input, output,i+1, j+1,list);
//     subset(input, output,i+1, j,list);
// }

// int main()
// {
//     char input[100];
//     char output[100];
//     vector<string>list;
//     cin>>input;
//     subset(input,output,0,0,list);
//     sort(list.begin(),list.end(),greater<string>());
//     for(auto i:list)
//     {
//         cout<<i<<endl;
//     }
//     return 0;
// }
// #include<bits/stdc++.h>
// using namespace std;

// void subset(char input[], char output[], int i, int j, vector<string>& list) {
//     if(input[i]=='\0') {
//         output[j]='\0';
//         string temp(output);
//         list.push_back(temp);
//         return;
//     }

//     output[j]=input[i];
//     subset(input, output, i+1, j+1, list);
//     subset(input, output, i+1, j, list);
// }

// // Custom comparator function to sort strings by length
// bool compareByLength(const string &a, const string &b) {
//     if(a.length()==b.length())
//     {
//         return a<b;
//     }
//     return a.length() < b.length();
// }

// int main() {
//     char input[100];
//     char output[100];
//     vector<string> list;
//     cin >> input;
//     subset(input, output, 0, 0, list);
//     list.push_back(""); // Adding the empty subset "\0"
//     sort(list.begin(), list.end(), compareByLength);
//     for(auto i : list) {
//         cout << i << endl;
//     }
//     return 0;
// }


int main()
{
    int n;
    cout<<"enter size of array: ";
    cin>>n;
    int arr[20];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    cout<<"the sub-array are: "<<endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            for (int k = i; k <= j; k++)
            {
                cout<<arr[k]<<" ";
            }
            cout<<endl;
        }
    }
    return 0;
}