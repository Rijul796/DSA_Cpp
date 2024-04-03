#include<bits/stdc++.h>
using namespace std;
//in stack we can make the stack act like a queue using another stack to store the top element to the end of the another stack
// int main()
// {
//     queue<int>q;
//     q.push(10);
//     q.push(20);
//     q.pop();
//     cout<<q.front()<<endl;
//     cout<<q.empty()<<endl;
//     cout<<q.back()<<endl;
//     return 0;
// }
int main()
{
    queue<int>q;
    q.push(1);
    q.push(2);
    q.push(3);
    cout<<"the size of q is : "<<q.size()<<endl;
    q.pop();
    cout<<"size of q is: "<<q.size()<<endl;
    if(q.empty())
    {
        cout<<"q is empty ! "<<endl;
    }
    else
    {
        cout<<"q!empty"<<endl;
    }
    cout<<"front is: "<<q.front()<<endl;
    cout<<q.back();
    return 0;
}