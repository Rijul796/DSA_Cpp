#include <bits/stdc++.h>
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
    if (head == NULL)
    {
        cout << "List is Empty !" << endl;
    }
    while (head != NULL)
    {
        cout << head->data << " ";
        head = head->next;
    }
    cout << endl;
}

// Define a function to sum two numbers represented as linked lists
Node* sum_two(Node* num1, Node* num2)
{
    // Create a dummy node to hold the result
    Node* dummy = new Node(-1);
    // Pointer to traverse the result linked list
    Node* current = dummy;
    // Pointers to traverse the input linked lists
    Node* temp1 = num1;
    Node* temp2 = num2;
    // Variable to hold the carry while adding digits
    int carry = 0;

    // Iterate through both input linked lists until both are traversed
    while (temp1 != NULL || temp2 != NULL)
    {
        // Initialize sum with carry
        int sum = carry;
        // If there are nodes remaining in num1, add its data to sum
        if (temp1)
        {
            sum += temp1->data;
        }
        // If there are nodes remaining in num2, add its data to sum
        if (temp2)
        {
            sum += temp2->data;
        }
        // Create a new node with the digit at units place of sum
        Node* newNode = new Node(sum % 10);
        // Update carry for next iteration
        carry = sum / 10;
        // Link the newly created node to the result linked list
        current->next = newNode;
        // Move the current pointer to the newly added node
        current = current->next;
        // Move temp1 and temp2 pointers to the next nodes if they exist
        if (temp1)
        {
            temp1 = temp1->next;
        }
        if (temp2)
        {
            temp2 = temp2->next;
        }
    }

    // If there is any remaining carry after processing all digits
    if (carry)
    {
        // Create a new node for the carry and add it to the result
        Node* newNode = new Node(carry);
        current->next = newNode;
    }

    // Return the next of the dummy node which holds the result
    return dummy->next;
}


int main()
{
    vector<int> arr1 = {1, 2, 3, 4, 5};
    vector<int> arr2 = {6, 7, 8, 9, 10};
    Node* head1=convert(arr1);
    Node* head2=convert(arr2);
    Node* head=sum_two(head1,head2);
    print(head);
    return 0;
}

// int main()
// {
//     int a = 10;
//     int b = 3;
    
//     int remainder = a % b;  // remainder will be 1
//     int quotient = a / b;   // quotient will be 3

//     // Output the remainder and quotient
//     cout << "Remainder: " << remainder << endl;
//     cout << "Quotient: " << quotient << endl;
// }