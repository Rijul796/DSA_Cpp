#include <iostream>
using namespace std;

class node
{
public:
    int data;
    node *next;
    node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};

// function to add a node to an empty list
node *addToEmpty(node *&tail, int data)
{
    if (tail != NULL)
        return tail;
    node *n1 = new node(data);
    n1->next = n1;
    tail = n1;
    return tail;
}

// function to insert a node after a given node
void insert(node *&tail, int element, int data)
{
    // empty list
    if (tail == NULL)
    {
        addToEmpty(tail, data);
        return;
    }
    node *n1 = new node(data);
    node *curr = tail;
    // find the node with the given value
    while (curr->data != element)
    {
        curr = curr->next;
        // if the node is not found, break the loop
        if (curr == tail)
            break;
    }
    // insert the new node after the found node
    n1->next = curr->next;
    curr->next = n1;
    // if the found node is the tail, update the tail pointer
    if (curr == tail)
        tail = n1;
}

// function to print the list
void print(node *tail)
{
    if (tail == NULL)
    {
        cout << "the list is empty";
    }
    node *temp = tail;
    do
    {
        cout << tail->data << " ";
        tail = tail->next;
    } while (tail != temp);
    cout << endl;
}

// function to delete a node with a given value
void deleteNode(node *&tail, int value)
{
    if (tail == NULL)
    {
        cout << "List is empty";
        return;
    }

    node *prev = tail;
    node *current = prev->next;
    // find the node with the given value
    while (current->data != value)
    {
        prev = current;
        current = current->next;
        // if the node is not found, break the loop
        if (current == prev)
            break;
    }
    // delete the node if found
    if (current->data == value)
    {
        prev->next = current->next;
        // if the node is the only node in the list, make the tail NULL
        if (current == prev)
            tail = NULL;
        // if the node is the tail, update the tail pointer
        else if (tail == current)
            tail = prev;
        current->next = NULL;
        delete current;
    }
    else
    {
        cout << "Node not found";
    }
}

int main()
{
    node *tail = NULL;
    // insert the first node with value 5
    addToEmpty(tail, 5);
    print(tail);
    // delete the node with value 5
    deleteNode(tail, 5);
    print(tail);
    return 0;
}
