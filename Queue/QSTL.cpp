#include<bits/stdc++.h>
using namespace std;
//in stack we can make the stack act like a queue using another stack to store the top element to the end of the another stack
int main()
{
    queue<int>q;
    q.push(10);
    q.push(20);
    q.pop();
    cout<<q.front()<<endl;
    cout<<q.empty()<<endl;
    cout<<q.back()<<endl;
    return 0;
}