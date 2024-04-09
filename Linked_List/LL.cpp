#include <bits/stdc++.h>
using namespace std;
//Linked List is a data structure where we represent linear data into non-linear form using nodes
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

int lengthll(Node *head) // convert fn is used to get the length of ll
{
    int count = 0;
    Node *temp = head;
    while (temp != nullptr)
    {
        temp = temp->next;
        count++;
    }
    return count;
}

int checkele(Node *head, int val)
{
    Node *temp = head;
    while (temp->next != nullptr)
    {
        if (temp->data == val)
        {
            return 1;
        }
        temp = temp->next;
    }
    return 0;
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

Node *removeHead(Node *head)
{
    if (head == NULL)
        return head;
    Node *temp = head;
    head = head->next;
    delete temp;
    return head;
}

Node *removeTail(Node *head)
{
    if (head == NULL || head->next == NULL)
        return NULL;

    Node *temp = head;
    while (temp->next->next != NULL)
    {
        temp = temp->next;
    }
    delete temp->next;
    temp->next = nullptr;
    return head;
}

Node *removeK(Node *head, int k)
{
    if (head == NULL)
        return head;
    if (k == 1)
    {
        Node *temp = head;
        head = head->next;
        delete temp->next;
        return head;
    }
    int count = 0;
    Node *temp = head;
    Node *prev = NULL;
    while (temp != NULL)
    {
        count++;
        if (count == k)
        {
            prev->next = prev->next->next;
            free(temp);
            break;
        }
        prev = temp;
        temp = temp->next;
    }
    return head;
}

Node *removeele(Node *head, int ele)
{
    if (head == NULL)
        return head;
    if (head->data == ele)
    {
        Node *temp = head;
        head = head->next;
        delete temp->next;
        return head;
    }

    Node *temp = head;
    Node *prev = NULL;
    while (temp != NULL)
    {
        if (temp->data == ele)
        {
            prev->next = prev->next->next;
            free(temp);
            break;
        }
        prev = temp;
        temp = temp->next;
    }
    return head;
}

Node *insertHead(Node *head, int val)
{
    return new Node(val, head);
}

Node *insertTail(Node *head, int val)
{
    if (head == NULL)
    {
        return new Node(val);
    }
    Node *temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    Node *newNode = new Node(val);
    temp->next = newNode;
    return head;
}

Node *insertPosition(Node *head, int ele, int k)
{
    if (head == NULL)
    {
        if (k == 1)
        {
            return new Node(ele);
        }
        else
        {
            return head;
        }
    }
    if (k == 1)
    {
        return new Node(ele, head);
    }
    int count = 0;
    Node *temp = head;
    while (temp != NULL)
    {
        count++;
        if (count == (k - 1))
        {
            Node *x = new Node(ele, temp->next);
            temp->next = x;
            break;
        }
        temp = temp->next;
    }
    return head;
}

Node *insertBeforeValue(Node *head, int ele, int val)
{
    if (head == NULL)
    {
        return NULL;
    }
    if (head->data == val)
    {
        return new Node(ele, head);
    }

    Node *temp = head;
    while (temp->next != NULL)
    {

        if (temp->next->data == val)
        {
            Node *x = new Node(ele, temp->next);
            temp->next = x;
            break;
        }
        temp = temp->next;
    }
    return head;
}

Node* reverse_LL(Node*head)
{
    if(head==NULL || head->next==NULL)
    {
        return head;
    }
    Node*prev=NULL;
    Node* current=head;
    Node*forward=NULL;
    while (current!=NULL)
    {
        forward=current->next;
        current->next=prev;
        prev=current;
        current=forward;
    }
    return prev;   
}

void reverse(Node* &head, Node* prev, Node* current) {
    if (current == nullptr) {
        head = prev;
        return;
    }
    reverse(head, current, current->next);
    current->next = prev;
}

Node* reverse_rec_ll(Node* &head) {
    Node* current = head;
    Node* prev = nullptr;
    reverse(head, prev, current);
    return head;
}

void middle_of_LL(Node* head) {
    if (head == nullptr) {
        cout << "LL Empty";
        return;
    }

    Node* slow = head;
    Node* fast = head;

    // Move 'fast' two steps ahead and 'slow' one step ahead in each iteration
    while (fast != nullptr && fast->next != nullptr) {
        slow = slow->next;
        fast = fast->next->next;
    }

    cout << "Middle element: " << slow->data;
}



int main()
{
    vector<int> arr = {1, 2, 3, 4, 5};
    // Node x=Node(arr[0],nullptr);
    // cout<<x.data<<" "<<x.next;
    // Node *x=new Node(arr[0],nullptr);
    // cout<<x->data;
    // Node *head=convert(arr);
    // cout<<head->data;

    // Node *head=convert(arr);//fetching the ll
    // Node *temp=head;// a pointer to the head of the list

    // while (temp!=nullptr)
    // {
    //     cout<<temp->data<<" ";
    //     temp=temp->next;//updating temp for accessing next element
    // }

    // Node *head=convert(arr);
    // cout<<"the length of link list is: "<<lengthll(head)<<endl;
    // cout<<checkele(head,43);

    // Node *head=convert(arr);
    // head=removeHead(head);

    // Node *head=convert(arr);
    // head=removeTail(head);
    // print(head);

    Node *head = convert(arr);
    // head=removeK(head,3);
    // head=removeele(head,5);
    // print(head);

    // head=insertHead(head,123);
    // head=insertTail(head,726);

    // head=insertPosition(head,121,3);

    // head = insertBeforeValue(head, 9, 5);
    // head=reverse_LL(head);
    // reverse_rec_ll(head);
    middle_of_LL(head);
    // print(head);

    return 0;
}