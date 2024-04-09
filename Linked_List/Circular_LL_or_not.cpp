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

bool check_circular(Node* head)
{
    Node* temp=head->next;
    while (temp!=NULL && temp!=head)
    {
        temp=temp->next;
    }
    // if(temp==NULL)
    // {
    //     return false;
    // }
    if(temp==head)
    {
        return true;
    }
    return false;
}

Node* circle(Node* head, int val) {
    Node* temp = new Node(val);
    Node* current = head;
    while (current->next != nullptr) {
        current = current->next;
    }
    current->next = temp;
    temp->next = head;  // Connect the last node to the head
    return head;        // Return head to maintain the reference to the start of the list
}

int main()
{
    Node* n=new Node(1) ;
    Node *head=n;
    // Node* tail=n;
    insertAtHead(head,12);
    insertAtHead(head,123);
    cout<<check_circular(n)<<endl;
    head = circle(head, 5); // Update head to the new circular node
    cout << "Is circular: " << check_circular(head) << endl;
    return 0;
}