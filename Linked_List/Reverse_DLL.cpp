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

node* reverse_DLL(node* &head)
{
    if(head==NULL || head->next==NULL)
    {
        return head;
    }
    node* current=head;
    node* last=NULL;
    while (current!=NULL)
    {
        last=current->back;
        current->back=current->next;
        current->next=last;
        current=current->back;
    }
    head=last->back;
    return head;
    
}

int main()
{
    vector<int> arr = {1, 3, 5, 7, 9};
    node *head = convert2dll(arr);
    head=reverse_DLL(head);
    print(head);
    return 0;
}