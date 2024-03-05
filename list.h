#include<bits/stdc++.h>
using namespace std;
 
class Node
{
    int data;
    public:
    int getdata()
    {
        return data;
    }
    //int data;
    Node *next;
    Node(int d):data(d),next(nullptr){}
};

class List
{
    Node *head;
    Node *tail;
    public:
    Node * begin(){
        return head;
    };
    List():head(nullptr),tail(nullptr)
    {

    }
    void push_front(int data)
    {
        if(head==nullptr)
        {
            Node *n=new Node(data);
            head=tail=n;
        }
        else
        {
            Node *n=new Node(data);
            // (*n).next=head;
            n->next=head;
            head=n;
        }
    }
    void push_back(int data)
    {
        if(head==nullptr)
        {
            Node *n=new Node(data);
            head=tail=n;
        }
        else{
            Node *n = new Node(data);
            tail->next=n;
            tail=n;
        }
    }

    void insert(int data,int pos)
    {
        if(pos==0)
        {
            push_front(data);
            return;
        }
        Node *n = new Node (data);
        Node *temp=head;
        for (int i = 0; i < pos; i++)
        {
            temp=temp->next;
        }
        n->next=temp->next;
        temp->next=n;
    }

    bool search(int key)
    {
        Node* temp=head;
        while(temp!=NULL)
        {
            if(temp->getdata()==key)return true;
            temp=temp->next;
        }
        return false;
    }

    bool recsearch(Node* start1,int key)
    {
        if(start1==nullptr)
        {
            return false;
        }
        if(start1->getdata()==key)
        {
            return true;
        }
        else{
            return recsearch(start1->next,key);
        }
    }

    int searchindx(int key)
    {
        int indx=0;
        Node* start=head;
        while(start!=nullptr)
        {
            if(start->getdata()==key)
            {
                return indx;
            }
            indx++;
            start=start->next;
        }
        return -1;
    }
}; 