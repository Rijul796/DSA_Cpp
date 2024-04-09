#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int data;//to store integer
    Node *next;//to store address of next node
    Node(int data)//constructor
    {
        this->data=data;
        next=NULL;
    }
    ~Node()
    {
        int val=this->data;
        if(this->next!=NULL)
        {
            delete next;
            this->next=NULL;
        }
        cout<<"memory freed for value:  "<<val<<endl;
    }
};

void insertAtTail(Node* &tail, int d)
{
    Node* n2 = new Node(d);
    tail -> next = n2;
    tail = n2;
}

int getlength(Node* head)
{
    int len=0;
    while (head)
    {
        len++;
        head=head->next;
    }
    return len;
}

Node* middle(Node* head)
{
    int len=getlength(head);
    int res=len/2;
    Node* temp=head;
    int count=0;

    while (count<res)
    {
        temp=temp->next;
        count++;
    }
    return temp;
}

Node* getmiddle(Node* head)
{
    if(head==NULL || head->next==NULL)
    {
        return head;
    }
    if(head->next->next==NULL)
    {
        return head;
    }
    Node* slow=head;
    Node* fast=head->next;
    while (fast!=NULL)
    {
        fast=fast->next;
        if(fast!=NULL)
        {
            fast=fast->next;
        }
        slow=slow->next;
    }
    return slow;
    
}

int main()
{
    Node* n=new Node(1) ;
    Node* tail=n;
    insertAtTail(tail,2); 
    insertAtTail(tail,3); 
    insertAtTail(tail,4); 
    insertAtTail(tail,5); 
    cout<<middle(n)->data<<endl;
    cout<<getmiddle(n)->data;
    return 0;
} 