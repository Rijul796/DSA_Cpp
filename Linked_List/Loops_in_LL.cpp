#include<bits/stdc++.h>
using namespace std;
class Node
{
public:
    int data;
    Node *next;
    Node(int data1, Node *next1)
    {
        data = data1;
        next = next1;
    }
    Node(int data1)
    {
        data = data1;
        next = nullptr;
    }
};
Node *convert(vector<int> &v) // creation of linked list
{
    Node *head = new Node(v[0]); // fixing the head at the first element
    Node *mover = head;          // creating a node for transversing
    int n = v.size();
    for (int i = 1; i < n; i++) // iterates over the remaining elements of the vector. Each new node is linked to the previous node.
    {
        Node *temp = new Node(v[i]); // creating a temp node to store element and a nullptr
        mover->next = temp;          // assigning the address of new node to the mover
        mover = temp;                // upating / shifting mover at next node
    }                                // linking is done
    return head;                     // returns a pointer to the head -- the next element's address is at head next --and so on
}

void print(Node *head)
{
    while (head != NULL)
    {
        cout << head->data << " ";
        head = head->next;
    }
    cout<<endl;
}

Node *insertHead(Node *head, int val)
{
    return new Node(val, head);
}

Node *getTail(Node *head)
{
    if (head == NULL)
    {
        return NULL;
    }
    Node *temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    return temp;
}

bool check_circular(Node* head)
{
    if(head==NULL)
    {
        return false;
    }
    Node* temp=head;
    map<Node*,bool>visited;
    while (temp!=NULL)
    {
        if(visited[temp]==true)
        {
            return true;
        }
        visited[temp]=true;
        temp=temp->next;
    }
    return false;
}

// Function to detect and remove loop in linked list
void detectAndRemoveLoop(Node* head) {
    if (head == nullptr || head->next == nullptr)
        return;

    Node *slow = head, *fast = head;
    // Move slow pointer one step and fast pointer two steps at a time
    while (fast != nullptr && fast->next != nullptr) {
        slow = slow->next;
        fast = fast->next->next;

        // If slow and fast pointers meet, there is a loop
        if (slow == fast)
            break;
    }

    // If loop exists
    if (slow == fast) {
        slow = head;
        while (slow->next != fast->next) {
            slow = slow->next;
            fast = fast->next;
        }//slow and fast will be pointing to the node where the loop starts. This is because both pointers started from the same node when they met, and they move at the same pace within the loop. So, when they meet again, they are at the start of the loop.
        // Set the next of the last node of the loop to nullptr
        fast->next = nullptr;
    }
}

int main()
{
    vector<int> arr = {1, 3, 5, 7, 9};
    Node *head = convert(arr);
    head=insertHead(head,-2);
    print(head);
    Node* tail=getTail(head);
    tail->next=head->next->next;
    cout<<check_circular(head)<<endl;
    detectAndRemoveLoop(head);
    cout<<check_circular(head);
    return 0;
}