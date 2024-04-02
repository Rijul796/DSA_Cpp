#include <iostream>
#include <queue>
using namespace std;
struct Node
{
    int data;
    Node *next;
    Node *child;
    Node(int data)
    {
        this->data = data;
        next = nullptr;
        child = nullptr;
    }
};
// Function to print the flattened linked list
void printList(Node *head)
{
    while (head != nullptr)
    {
        cout << head->data << " ";
        head = head->next;
    }
    cout << endl;
}

// Function to flatten the multilevel linked list using a queue
Node *flatten(Node *head)
{
    if (head == nullptr)
    {
        return nullptr; // Handle empty list case
    }
    queue<Node *> q;
    q.push(head);
    Node *prev = nullptr;
    while (!q.empty())
    {
        Node *current = q.front();
        q.pop();
        // Connect current node to the previous node (if it exists)
        if (prev != nullptr)
        {
            prev->next = current;
        }
        prev = current;
        // Enqueue child nodes **after** processing the current node
        if (current->next != nullptr)
        { // Enqueue next node first
            q.push(current->next);
        }
        if (current->child != nullptr)
        { // Then enqueue child nodes
            q.push(current->child);
        }
    }
    // Set the next pointer of the last node to nullptr to terminate the list
    prev->next = nullptr;
    return head;
}
int main()
{
    Node *head = new Node(1);
    head->child = new Node(2);
    head->child->child = new Node(3);
    head->next = new Node(4);
    head->next->child = new Node(5);
    head->next->child->child = new Node(6);
    cout << "Original linked list: ";
    printList(head);
    head = flatten(head);
    cout << "Flattened linked list: ";
    printList(head);
    return 0;
}