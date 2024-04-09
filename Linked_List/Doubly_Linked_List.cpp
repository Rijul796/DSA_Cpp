#include <bits/stdc++.h>
using namespace std;

class node
{
public:
    int data;
    node *next;
    node *back;

    node(int data, node *next, node *back)
    {
        this->data = data;
        this->next = next;
        this->back = back;
    }

    node(int data)
    {
        this->data = data;
        this->next = NULL;
        this->back = NULL;
    }
};

void print(node *head)
{
    while (head != NULL)
    {
        cout << head->data << " ";
        head = head->next;
    }
}

node *convert2dll(vector<int> &v)
{
    node *head = new node(v[0]);
    node *current = head;
    int n = v.size();
    for (int i = 1; i < n; i++)
    {
        node *temp = new node(v[i], NULL, current);
        current->next = temp;
        current = temp;
    }
    return head;
}

node *deletehead(node *head)
{
    if (head == NULL || head->next == NULL)
    {
        delete head;
        return NULL;
    }
    node *temp = head;
    head = head->next;
    head->back = NULL;
    temp->next = NULL;
    delete temp;
    return head;
}

node *deleteTail(node *head)
{
    if (head == NULL || head->next == NULL)
    {
        delete head;
        return NULL;
    }
    node *tail = head;
    while (tail->next != NULL)
    {
        tail = tail->next;
    }
    node *prev = tail->back;
    prev->next = NULL;
    tail->back = NULL;
    delete tail;
    return head;
}

node *delete_K_ele(node *head, int k)
{
    if (head == NULL || k <= 0) // If head is NULL or k is invalid, return head as it is
        return head;

    int count = 1;
    node *temp = head;
    while (temp != NULL && count < k)
    {
        temp = temp->next;
        count++;
    }

    if (temp == NULL) // If k is larger than the number of nodes in the list, return head as it is
        return head;

    // Now temp points to the k-th node

    if (temp == head)
    { // If k-th element is head
        head = head->next;
        if (head != NULL)
            head->back = NULL;
        delete temp;
        return head;
    }

    if (temp->next == NULL)
    { // If k-th element is tail
        temp->back->next = NULL;
        delete temp;
        return head;
    }

    // k-th element is neither head nor tail
    temp->back->next = temp->next;
    temp->next->back = temp->back;
    delete temp;
    return head;
}

void deleteNode(node *temp)
{
    node *prev = temp->back;
    node *front = temp->next;

    if (front == NULL)
    {
        prev->next = NULL;
        temp->back = NULL;
        delete temp;
        return;
    }
    prev->next = front;
    front->back = prev;
    temp->next = temp->back = NULL;
    delete temp;
}

node *insert_before_head(node *head, int val)
{
    node *temp = new node(val, head, NULL);
    head->back = temp;
    head = temp;
    return head;
}

node *insert_before_tail(node *head, int val)
{
    if (head->next == NULL)
    {
        return insert_before_head(head, val);
    }
    node *temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    node *n = new node(val, temp, temp->back);
    temp->back->next = n;
    temp->back = n->next;
    return head;
}

node *insert_before_K(node *head, int val, int k)
{
    if (head == NULL || k <= 1) // If head is NULL or k is invalid, insert before head
    {
        return insert_before_head(head, val);
    }

    int count = 1;
    node *temp = head;
    while (temp != NULL && count < k - 1) // Traverse till (k - 1)th node
    {
        temp = temp->next;
        count++;
    }

    // if (temp == NULL) // If k is larger than the number of nodes in the list, insert at tail
    // {
    //     return insert_after_tail(head, val);
    // }

    // Now temp points to (k - 1)th node

    node *newNode = new node(val); // Create a new node with given value
    newNode->next = temp->next;
    newNode->back = temp;
    
    if (temp->next != NULL) // If (k - 1)th node is not the tail
    {
        temp->next->back = newNode;
    }
    temp->next = newNode;
    
    return head;
}

node* insert_after_tail(node* head,int val)
{
    node* tail=head;
    while (tail->next!=NULL)
    {
        tail=tail->next;
    }
    node* temp=new node(val,NULL,tail);
    tail->next=temp;
    return head;
    
}

node* insert_after_head(node* head,int val)
{
    if(head==NULL)
    {
        return new node(val);
    }
    node* temp=new node(val,head->next,head);
    head->next=temp;
    return head;
}

int main()
{
    vector<int> arr = {1, 3, 5, 7, 9};
    node *head = convert2dll(arr);
    // head=deletehead(head);
    // head=deleteTail(head);
    // head = delete_K_ele(head, 5);
    // deleteNode(head->next);
    // head = insert_before_head(head, 0);
    // head = insert_before_tail(head, 6);
    // head=insert_before_K(head,4,3);
    head=insert_after_tail(head,10);
    head=insert_after_head(head,2);
    print(head);
    return 0;
}