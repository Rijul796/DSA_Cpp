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

void insertAtHead(Node* &head, int d)
{
    Node* n2 = new Node(d);
    n2->next = head;
    head = n2;
}


void insertAtTail(Node* &tail, int d)
{
    Node* n2 = new Node(d);
    tail -> next = n2;
    tail = n2;
}

void print(Node* head)
{
    while(head!=NULL)
    {
        cout << head->data << " ";
        head = head->next;
    }
    cout << endl;
}

void insertAtPosition(Node* &head, Node* &tail,int pos ,int d)
{
    Node* head1 = head;
    Node* temp = new Node(d);
    if(pos == 1)
    {
        temp->next = head;
        head = temp;
        return;
    }
    int count = 1;
    while(count < pos - 1)
    {
        head1 = head1->next;
        count++;
    }
    temp->next = head1->next;
    head1->next = temp;
    if(temp->next==NULL)
    {
        tail = temp;
    }
}

void deleteAtPos(Node* &head,Node* &tail, int pos)
{
    Node* head1 = head;
    if(pos == 1)
    {
        head = head->next;
        head1->next = NULL;
        delete head1;
        return;
    }
    int count = 1;
    while(count < pos - 1)
    {
        head1 = head1->next;
        count++;
    }
    Node* temp1 = head1->next;
    head1->next = (head1->next)->next;
    temp1->next = NULL;
    delete temp1;
    if(head1->next == NULL)
    {
        tail = head1;
    }
}

int main()
{
    Node* n=new Node(1) ;
    // cout<<n->data<<" "<<n->next;
    Node *head=n;
    Node* tail=n;
    insertAtHead(head,12);
    insertAtHead(head,123);
    insertAtTail(tail,2); 
    insertAtPosition(head,tail,3,50);
    deleteAtPos(head,tail,3);
    print(head);
    cout<<tail->next;
    return 0;
}