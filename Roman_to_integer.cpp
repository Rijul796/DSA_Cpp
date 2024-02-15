#include<bits/stdc++.h>
using namespace std;
int romanToInt(string s) {
        unordered_map<char, int> roman = {{'I', 1}, {'V', 5}, {'X', 10}, {'L', 50}, {'C', 100}, {'D', 500}, {'M', 1000}};
        int sum = 0;
        int n = s.length();
        for(int i = 0; i < n; i++) {
            if(i < n - 1 && roman[s[i]] < roman[s[i+1]]) {
                sum -= roman[s[i]];
            } else {
                sum += roman[s[i]];
            }
        }
        return sum;
    }
int main()
{
    string s;
    cout<<"enter a roman number: ";
    getline(cin,s);
    cout<<romanToInt(s);
    return 0;
}