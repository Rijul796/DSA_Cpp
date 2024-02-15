#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void solve(vector<string>& ans, vector<vector<int>> m, int r, int c, string temp, int n, vector<pair<int,int>> v)
    {
        // base case
        if(r==(n-1) && c==(n-1))
        {
            ans.push_back(temp);
            return;
        }

        int k;

        if(r<n-1)
        {
            k = 1;
            for(int i = 0; i < v.size(); i++)
            {
                if(v[i].first==r+1 && v[i].second==c)
                {
                    k = 0;
                }
            }
            if(temp.empty()==0)
            {
                if(m[r+1][c]==1 && temp[temp.length()-1]!='U' && k)
                {
                    temp.push_back('D');
                    v.push_back(make_pair(r,c));
                    solve(ans,m,r+1,c,temp,n,v);
                    temp.pop_back();
                }
            }
            else
            {
                if(m[r+1][c]==1 && k)
                {
                    temp.push_back('D');
                    v.push_back(make_pair(r,c));
                    solve(ans,m,r+1,c,temp,n,v);
                    temp.pop_back();
                }
            }
        }

        if(c>0)
        {
            k = 1;
            for(int i = 0; i < v.size(); i++)
            {
                if(v[i].first==r && v[i].second==c-1)
                {
                    k = 0;
                }
            }
            if(temp.empty()==0)
            {
                if(m[r][c-1]==1 && temp[temp.length()-1]!='R' && k)
                {
                    temp.push_back('L');
                    v.push_back(make_pair(r,c));
                    solve(ans,m,r,c-1,temp,n,v);
                    temp.pop_back();
                }
            }
            else
            {
                if(m[r][c-1]==1 && k)
                {
                    temp.push_back('L');
                    v.push_back(make_pair(r,c));
                    solve(ans,m,r,c-1,temp,n,v);
                    temp.pop_back();
                }
            }
        }
        
        if(c<n-1)
        {
            k = 1;
            for(int i = 0; i < v.size(); i++)
            {
                if(v[i].first==r && v[i].second==c+1)
                {
                    k = 0;
                }
            }
            if(temp.empty()==0)
            {
                if(m[r][c+1]==1 && temp[temp.length()-1]!='L' && k)
                {
                    temp.push_back('R');
                    v.push_back(make_pair(r,c));
                    solve(ans,m,r,c+1,temp,n,v);
                    temp.pop_back();
                }
            }
            else
            {
                if(m[r][c+1]==1 && k)
                {
                    temp.push_back('R');
                    v.push_back(make_pair(r,c));
                    solve(ans,m,r,c+1,temp,n,v);
                    temp.pop_back();
                }
            }
        }


        if(r>0)
        {
            k = 1;
            for(int i = 0; i < v.size(); i++)
            {
                if(v[i].first==r-1 && v[i].second==c)
                {
                    k = 0;
                }
            }
            if(temp.empty()==0)
            {
                if(m[r-1][c]==1 && temp[temp.length()-1]!='D' && k)
                {
                    temp.push_back('U');
                    v.push_back(make_pair(r,c));
                    solve(ans,m,r-1,c,temp,n,v);
                    temp.pop_back();
                }
            }
            else
            {
                if(m[r-1][c]==1 && k)
                {
                    temp.push_back('U');
                    solve(ans,m,r-1,c,temp,n,v);
                    temp.pop_back();
                }
            }
        }
    }

int main() {
    vector<vector<int>> m = {{1,0,0,0},{1,1,1,1},{1,1,1,0},{0,1,1,1}};
    int n = 4;
    vector<string> ans;
    vector<pair<int,int>> v;
    string temp = "";
    int r = 0, c = 0;
    solve(ans,m,r,c,temp,n,v);
    for(int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }
    return 0;
}
