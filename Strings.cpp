#include <bits/stdc++.h>
using namespace std;

// int main()
// {
// char x[]="abc";
// cout<<x<<endl;
// char a[]={'a','b','c','\0'};
// cout<<a<<endl;
// string b;
// getline(cin,b);
// cout<<b;
// char b[100];
// cin>>b;// it will not accept two words
// char temp;
// int dig=0,wsp=0,alp=0;
// char c[100];
// int n=0;
// while (temp!='\n')
// {
//     temp=cin.get();
//     c[n++]=temp;
//     if(temp>='0'&&temp<='9')
//     {
//         dig++;
//     }
//     if ((temp>='a'&&temp<='z')||(temp>='A'&&temp<='Z'))
//     {
//         alp++;
//     }
//     if(temp==' '||temp=='\n')
//     {
//         wsp++;
//     }
// }
// cout<<"number of digits are: "<<dig<<endl;
// cout<<"number of spaces are: "<<wsp<<endl;
// cout<<"number of alphabets are: "<<alp<<endl;
// cout<<c;

//     char a[]="priyank";
//     char b[]="bachu";
//     cout<<strcmp(a,b)<<endl;
//     char c[100];
//     strcpy(c,a);
//     cout<<c;
//     return 0;
// }

// int main()
// {
//     int n;
//     cin>>n;
//     cin.get();
//     char sen[100];
//     char output[100];
//     int ll=0;
//     while(n--)
//     {
//         cin.getline(sen,100);
//         // cout<<sen<<endl;
//         int l=strlen(sen);
//         if (l>ll)
//         {
//             ll=l;
//             strcpy(output,sen);
//         }
//     }
//     sort(output,output+ll);
//     cout<<"the final string is:  "<<output<<endl;
// }



// int main()
// {
//     string s;
//     cout<<"enter a string: ";
//     getline(cin,s);
//     int n=s.length();
//     string v="aeiou";
//     for (int i = 0; i < n; i++)
//     {
//         if ((s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u')||(s[i]=='A'||s[i]=='E'||s[i]=='I'||s[i]=='O'||s[i]=='U'))
//         {
//             cout<<s[i]<<" ";
//         }

//     }
// }

// int main()
// {
//     string s;
//     getline(cin, s);
//     sort(s.begin(), s.end());
//     vector<int> freq(100, 0);

//     // Count the frequency of each character
//     for (char ch : s)
//     {
//         freq[ch]++;
//     }

//     // Print unique characters
//     cout << "Unique characters in the string: ";
//     for (char ch : s)
//     {  
//         if (freq[ch] > 0)
//         {
//             cout << ch << " ";
//             freq[ch] = 0; // Mark the character as printed
//         }
//     }
//     cout << endl;
//     return 0;
// }


// int main()
// {
//     string s;
//     cin>>s;
//     int sum=0;
//     int n=s.length();
//     for (int i = 0; i < n; i++)
//     {
//         if(s[i]=='1')
//         {
//             sum=(sum*2)+1;
//         }
//         else
//         {
//             sum=sum*2;
//         }
//     }
//     cout<<sum;
// }

// vector<int> getSpace(string s)
// {
//     int n = s.size();
//     vector<int> temp(1);
//     for(int i = 0;i<n;i++)
//     {
//         if(s[i]==' ')
//         {
//             temp.push_back(i+1);
//         }
//     }
//     temp.push_back(n+1);
//     return temp;
// }

// void reverser(string &s,vector<int> space)
// {
//     int n = space.size();
//     int k = 0;
//     for(int i = 0;i<n-1;i++)
//     {
//         k=0;
//         for(int j = space[i];j<(space[i]+space[i+1]-1)/2;j++)
//         {
//             swap(s[j],s[j+space[i+1]-space[i]-2-k]);
//             k = k + 2;
//         }
//     }
// }

// int main()
// {
//     string s;
//     getline(cin,s);
//     vector<int> space(getSpace(s));
//     for(int i = 0;i<space.size();i++)
//     {
//         cout << space[i] << " ";
//     }
//     cout << endl;
//     reverser(s,space);
//     cout << s <<endl;
// }


// int main() {
//     string s;
//     getline(cin, s);

//     istringstream iss(s);//to seperate the word from the string
//     string word;
//     string reversedSentence;

//     while (iss >> word) {
//         reverse(word.begin(), word.end());
//         reversedSentence += word + " ";
//     }

//     // Remove the trailing space
//     reversedSentence.pop_back();

//     cout << reversedSentence << endl;
//     return 0;
// }


// void reverse(string &st, int s , int e ){
//     while(s<=e){
//         swap(st[s],st[e]);
//         s++;
//         e--;
//     }
// }
// int main(){
//     int s=0;
//     string st;
//     getline(cin,st);
//     int l=st.length();
//     for(int i=0;i<l;i++){
//         if(st[i]==' '|| st[i] =='\0'){
//             reverse(st,s,i-1);
//             s=i+1;
//         }
//     }
//     reverse(st,s,l-1);
//     cout<<st;
// }

// int main() {
//     string s;
//     getline(cin, s);

//     istringstream iss(s);
//     string word[100];
//     int c = 0;

//     while (iss >> word[c]) {
//         c++;
//     }
//     reverse(word, word + c);
//     for (int i = 0; i < c; i++) {
//         cout << word[i] << " ";
//     }
//     return 0;
// }
