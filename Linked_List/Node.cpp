#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int data;
    Node *next;
    Node(int data)
    {
        this->data = data;
        next = NULL;
    }
};

Node *create(int n)
{
    Node *head = NULL;
    Node *tail = NULL;
    while (n--)
    {
        int val;
        cout << "enter element: ";
        cin >> val;
        Node *n = new Node(val);
        if (head == NULL)
        {
            head = tail = n;
        }
        else
        {
            tail->next = n;
            tail = n;
        }
    }
    return head;
}

void print(Node *head)
{
    while (head)
    {
        cout << head->data << "-->";
        head = head->next;
    }
    cout << endl;
}

Node *deleteTail(Node *head)
{
    if (!head || head->next == NULL)
    {
        delete head;
        return NULL;
    }
    Node *temp = head;
    while (temp->next->next != NULL)
    {
        temp = temp->next;
    }
    delete temp->next;
    temp->next = NULL;
    return head;
}

Node *merge(Node *head1, Node *head2, int n)
{
    Node *mergedHead = NULL;
    Node *tail = NULL;
    int x = n * 2;
    int count = 1;
    while (x--)
    {
        if (count % 2 != 0 && head1)
        {
            Node *newNode = new Node(head1->data);
            if (!mergedHead)
            {
                mergedHead = tail = newNode;
            }
            else
            {
                tail->next = newNode;
                tail = newNode;
            }
            head1 = head1->next;
        }
        else if (head2)
        {
            Node *newNode = new Node(head2->data);
            if (!mergedHead)
            {
                mergedHead = tail = newNode;
            }
            else
            {
                tail->next = newNode;
                tail = newNode;
            }
            head2 = head2->next;
        }
        count++;
    }
    return mergedHead;
}

int main()
{
    int n;
    cout << "enter num: ";
    cin >> n;
    Node *head = create(n);
    // print(head);
    // head = deleteTail(head);
    // print(head);
    Node *head1 = create(n);
    head = merge(head, head1, n);
    print(head);

    return 0;
}