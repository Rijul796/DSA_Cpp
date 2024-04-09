#include<bits/stdc++.h>
using namespace std;
 
class node{
    public:
    int val;
    node* next;
    node(int val)
    {
        this->val=val;
        this->next=NULL;
    }
};

node* convert2LL(vector<int>&v)
{
    node* head=new node(v[0]);
    node* ptr=head;
    int n=v.size();
    for (int i = 1; i < n; i++)
    {
        node* temp=new node(v[i]);
        ptr->next=temp;
        ptr=temp;
    }
    return head;
}

void print(node* head)
{
    node* temp=head;
    while (head!=NULL)
    {
        cout<<temp->val<<"-->";
        temp=temp->next;
    }
}

void deleteNode(node* &n)//instead of deleting the node we will update the node's val with the next node's val
{
    n->val=n->next->val;
    n->next=n->next->next;
    return ;
}



int main()
{
    vector<int>v;
    int n;
    cout<<"enter size of LL";
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        int x;
        cout<<"enter value: ";
        cin>>x;
        v.push_back(x);
    }
    node*head=convert2LL(v);
    deleteNode(head->next->next);
    print(head);
    return 0;
}