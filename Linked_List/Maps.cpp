#include<bits/stdc++.h>
using namespace std;
// int main() {
/*    // Creating an empty map
    map<int, std::string> myMap;

    // Insertion test cases
    myMap.insert({1, "One"});
    myMap.insert({2, "Two"});
    myMap.insert({3, "Three"});
    
    // Accessing elements test cases
    cout << "Value corresponding to key 2: " << myMap[2] << endl;

    // Iteration test case
    cout << "Elements in the map:" << std::endl;
    for (auto& pair : myMap) {
        cout << pair.first << " => " << pair.second << endl;
    }

    // Size test case
    cout << "Size of the map: " << myMap.size() << endl;

    // Deletion test case
    myMap.erase(2);
    cout << "Value corresponding to key 2 after deletion: " << myMap[2] << endl;

    // Clear test case
    myMap.clear();
    cout << "Size of the map after clearing: " << myMap.size() << endl;
*/

    // int n;
    // cout<<"enter size of hash: ";
    // cin>>n;
    // int arr[n];
    // for(int i=0;i<n;i++)
    // {
    //     cin>>arr[i];
    // }
    // int hash[10]={0};
    // for(int i=0;i<n;i++)
    // {
    //     hash[arr[i]]+=1;
    // }
    // cout<<"two appears: "<<hash[2]<<" times"<<endl;

//     string s;
//     cin>>s;
//     int hash1[256]={0};
//     int n=s.size();
//     for(int i=0;i<n;i++)
//     {
//         hash1[s[i]]++;
//     }
//     cout<<s[2]<<hash1[s[2]]<<endl;
//     return 0;
// }


// int main()
// {
//     int n;
//     cout<<"enter size of n: ";
//     cin>>n;
//     int arr[n];
//     // unordered_map<int,int>mp;//un-sorted in random order
//     map<int,int>mp;
//     for(int i=0;i<n;i++)
//     {
//         cin>>arr[i];
//         mp[arr[i]]++;
//     }
//     for(auto i:mp)
//     {
//         cout<<i.first<<" "<<i.second<<endl;
//     }
// }


int main()
{
    unordered_map<string,int>m;
    pair<string,int>p=make_pair("abc",1);
    m.insert(p);
    cout<<m.size();
    cout<<m["abc"];
    cout<<m.at("abc");
    // cout<<m.at("x");
    cout<<m["x"];
    cout<<m.at("x");
    cout<<m.count("abc");
    // m.erase("abc");
    // cout<<m["abc"];
    for(auto i:m)
    {
        cout<<i.first<<" "<<i.second<<endl;
    }

}