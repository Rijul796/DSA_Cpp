#include <bits/stdc++.h>
using namespace std;

class node
{
public:
    int data;
    node *prev;
    node *next;
    node(int data)
    {
        this->data = data;
        prev = NULL;
        next = NULL;
    }
};

void print(node *head)
{
    node *temp = head;
    while (temp)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

int length(node *head)
{
    int count = 0;
    while (head)
    {
        count++;
        head = head->next;
    }
    return count;
}

void insertAtHead(node *&head, int val)
{
    node *temp = new node(val);
    if (head == NULL)
    {
        head = temp;
    }
    else
    {
        head->prev = temp;
        temp->next = head;
        head = temp;
    }
}

void insertAtTail(node *&head, int val)
{
    node *temp = head;
    while (temp->next != nullptr)
    {
        temp = temp->next;
    }
    node *n = new node(val);
    temp->next = n;
    n->prev = temp;
}

void insertAtPos(node *&head, int pos, int val)
{
    if (pos == 1 || head == nullptr)
    {
        insertAtHead(head, val);
        return;
    }
    node *n = new node(val);

    int count = 1;
    node *current = head;
    node *previous = nullptr;

    while (current != nullptr && count < pos)
    {
        previous = current;
        current = current->next;
        count++;
    }

    if (current == nullptr && count == pos)
    {
        // Insert at the end of the list
        previous->next = n;
        n->prev = previous;
    }
    else if (current != nullptr)
    {
        // Insert in the middle of the list
        previous->next = n;
        n->prev = previous;
        n->next = current;
        current->prev = n;
    }
}

void deleteAtPos(node* &head, int pos)
{
    if (head == nullptr) {
        cout << "List is empty. Cannot delete from an empty list." << endl;
        return;
    }

    node* current = head;
    node* previous = nullptr;
    int count = 1;

    while (current != nullptr && count < pos)
    {
        previous = current;
        current = current->next;
        count++;
    }

    if (current == nullptr) {
        cout << "Invalid position. Position exceeds the length of the list." << endl;
        return;
    }

    if (previous == nullptr) {
        // Deleting the head node
        head = current->next;
    } else {
        previous->next = current->next;
    }

    if (current->next != nullptr) {
        current->next->prev = previous;
    }

    delete current;
}


int main()
{
    // node *n = new node(10);
    // cout<<n->prev<<" "<<n->data<<" "<<n->next<<endl;
    // print(n);
    // cout<<"the length of dll is: "<<length(n)<<endl;
    // insertAtHead(n, 5);
    // insertAtTail(n, 15);
    // insertAtTail(n, 25);
    // insertAtHead(n, 0);
    // print(n);
    // insertAtPos(n, 1, -5);
    // insertAtPos(n, 6, 20);
    // insertAtPos(n, 8, 30);
    node *n = NULL;
    insertAtHead(n, 2);
    insertAtHead(n, 1);
    print(n);
    deleteAtPos(n,1);
    print(n);
    return 0;
}