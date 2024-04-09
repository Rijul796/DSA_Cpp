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

Node* kreversell(Node* head, int k) {
    if (head == NULL) {
        return NULL;
    }
    Node* next = NULL;
    Node* curr = head;
    Node* prev = NULL;
    int count = 0;
    // Reverse first k nodes of the linked list
    while (curr != NULL && count < k) {
        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
        count++;
    }
    // Recursively call for the rest of the list and link the reversed part
    if (next != NULL) {
        head->next = kreversell(next, k); 
    }
    // prev is now the new head of the reversed sublist
    return prev;
    
}

int main()
{
    Node* n=new Node(1) ;
    Node* tail=n;
    insertAtTail(tail,2); 
    insertAtTail(tail,3); 
    insertAtTail(tail,4);  
    n=kreversell(n,2);
    print(n);
    return 0;
}