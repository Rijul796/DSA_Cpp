#include "list.h"
int main()
{
    List l;
    l.push_front(1);
    l.push_back(2);
    l.push_front(0);
    l.insert(12,2);
    Node *head=l.begin();
    while(head!=nullptr)
    {
        cout<<head->getdata()<<"------>";
        head=head->next;
    }
    return 0;
}