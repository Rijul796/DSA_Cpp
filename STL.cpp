#include<bits/stdc++.h>
using namespace std;

// void p()
// {
//     pair<int,int>x={1,3};
//     cout<<x.first<<" "<<x.second;
// }

// int main()
// {
//     p();
//     return 0;
// }

// void vec()
// {
    // vector<int> v;
    // v.push_back(1);
    // v.emplace_back(2);
    // vector<int> v(5,100);
    // vector<int> v2(v);
    // v2.erase(v2.begin(),v2.end()-2);
    // for(int i:v2)
    // {
    //     cout<<i<<" ";
    // }
    // vector<int>::iterator x=v.begin();//similar to int i=0; in loop
    // x++;
    // cout<<*(x)<<" ";

// }
// int main()
// {
//     vec();
//     return 0;
// }

// void lst()
// {
//     list<int> ls;
//     ls.push_back(1);
//     ls.emplace_back(2);
//     ls.push_front(0);
//     ls.emplace_front(-1);
//     for(auto i:ls)
//     {
//         cout<<i<<" ";
//     }
//     deque<int> dq;//same as list and vector
//     dq.push_back(1);
//     dq.emplace_back(2);
// }
// int main()
// {
//     lst();
//     return 0;
// }


// void st()
// {
//     stack<int> s;//LIFO
//     s.push(1);
//     s.push(2);
//     s.emplace(3);
//     cout<<s.top()<<" ";
//     queue<int> q;//similar to stack , FIFO
//     q.push(1);
//     q.push(2);
//     q.emplace(3);
//     cout<<q.front()<<" ";
// }
// int main()
// {
//     st();
//     return 0;
// }


// void prq()
// {
    // priority_queue<int>pq;//stores data in like desc order
    // pq.push(1);
    // pq.push(52);
    // pq.emplace(3);
    // cout<<pq.top()<<" ";//prints the largest
    // for(int i=0;i<3;i++)
    // {
    //     cout<<pq.top()<<" ";
    //     pq.pop();
    // }
    // cout<<endl;
//     priority_queue<int,vector<int>,greater<int>> pq;//stores in asc order
//     pq.push(4);
//     pq.push(6);
//     pq.emplace(1);
//         for(int i=0;i<3;i++)
//     {
//         cout<<pq.top()<<" ";
//         pq.pop();
//     }
// }
// int main()
// {
//     prq();
//     return 0;
// }


// void st()
// {
//     set<int>st;//stores unique and in sorted order
//     st.insert(1);
//     st.emplace(2);
//     st.insert(2);
//     for(auto i:st)
//     {
//         cout<<i<<" ";
//     }
//     auto x=st.find(2);
//     cout<<*(x);
// }
// int main()
// {
//     st();
//     return 0;
// }

// void mset()
// {
//     multiset<int>ms;//sorted but not unique
//     ms.insert(1);
//     ms.insert(1);
//     ms.insert(1);
//     ms.erase(ms.find(1));//will not erase the whole set but only earse single ele using address
//     int x=ms.count(1);
//     cout<<x;
// }
// int main()
// {
//     mset();
//     return 0;
// }

// void uset()
// {
//     unordered_set<int> st;//unordered and not unique
//     st.insert(1);
//     st.emplace(2);
//     st.insert(0);
//     for(auto i:st)
//     {
//         cout<<i<<" ";
//     }
// }
// int main()
// {
//     uset();
//     return 0;
// }


// void mp()
// {
//     map<int,int>m;
//     multimap<int,int>//same as map but can store multiple keys i.e duplicate keys
//     unordered_map//unique
//     m[1]=2;
//     m[2]=3;
//     m[4]=5;
//     for(auto i:m)
//     {
//         cout<<i.first<<" "<<i.second<<endl;
//     }
//     cout<<m[2];
// }
// int main()
// {
//     mp();
//     return 0;
// }
