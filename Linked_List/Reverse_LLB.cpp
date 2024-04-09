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
void print(Node* head)
{
    while(head!=NULL)
    {
        cout << head->data << " ";
        head = head->next;
    }
    cout << endl;
}

void insertAtTail(Node* &tail, int d)
{
    Node* n2 = new Node(d);
    tail -> next = n2;
    tail = n2;
}

Node* reverseLinkedList(Node* head)
{
    if(head==NULL || head->next==NULL)
    {
        return head;
    }
    Node* prev=NULL;
    Node* current=head;
    Node* forward=NULL;
    while (current!=NULL)
    {
        forward=current->next;
        current->next=prev;
        prev=current;
        current=forward;
    }
    return prev;
}

void reverse_LL_rec(Node* &head,Node* curr,Node* prev )
{
    if(curr==NULL)
    {
        head=prev;
        return;
    }
    Node* forward=curr->next;
    reverse_LL_rec(head,forward,curr);
    curr->next=prev;
}
int main()
{
    Node* n=new Node(1) ;
    Node* tail=n;
    insertAtTail(tail,2); 
    insertAtTail(tail,3); 
    insertAtTail(tail,4); 
    // n=reverseLinkedList(n);
    reverse_LL_rec(n,n,NULL);
    print(n);
    return 0;
}