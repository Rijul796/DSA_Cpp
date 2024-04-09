#include <bits/stdc++.h>
using namespace std;

class node {
public:
    int val;
    node* next;
    node(int val) {
        this->val = val;
        this->next = NULL;
    }
};

node* convert2LL(vector<int>& v) {
    node* head = new node(v[0]);
    node* ptr = head;
    int n = v.size();
    for (int i = 1; i < n; i++) {
        node* temp = new node(v[i]);
        ptr->next = temp;
        ptr = temp;
    }
    return head;
}

void print(node* head) {
    node* temp = head;
    while (temp != NULL) {
        cout << temp->val << "-->";
        temp = temp->next;
    }
    cout << "NULL" << endl; // Add "NULL" to indicate the end of the linked list
}

node* reverseLinkedList(node* head)
{
    if(head==NULL || head->next==NULL)
    {
        return head;
    }
    node* prev=NULL;
    node* current=head;
    node* forward=NULL;
    while (current!=NULL)
    {
        forward=current->next;
        current->next=prev;
        prev=current;
        current=forward;
    }
    return prev;
}

bool chk_pali(node* head) {
    // If the linked list is empty or has only one node, it is a palindrome
    if (head == NULL || head->next == NULL) {
        return true;
    }

    node* slow = head;
    node* fast = head;
    
    // Find the middle node using slow and fast pointers
    while (fast->next != NULL && fast->next->next != NULL) {
        slow = slow->next;
        fast = fast->next->next;
    }

    // Reverse the second half of the linked list
    node* newhead = reverseLinkedList(slow->next);
    
    // Compare the first half with the reversed second half
    node* first = head;
    node* second = newhead;
    while (second != NULL) {
        if (first->val != second->val) {
            // Restore the original order of the second half
            reverseLinkedList(newhead);
            return false;
        }
        first = first->next;
        second = second->next;
    }
    // Restore the original order of the second half
    reverseLinkedList(newhead);
    return true;
}

bool Check_Palindrome(node* head) {
    if (head == NULL || head->next == NULL) {
        return true;
    }
    stack<int> st;
    node* temp = head;
    int length = 0;
    while (temp != NULL) {
        st.push(temp->val);
        temp = temp->next;
        length++;
    }
    temp = head;
    for (int i = 0; i < length / 2; i++) {
        if (temp->val != st.top()) {
            return false;
        }
        temp = temp->next;
        st.pop();
    }
    return true;
}

int main() {
    vector<int> v;
    int n;
    cout << "Enter size of LL: ";
    cin >> n;
    for (int i = 0; i < n; i++) {
        int x;
        cout << "Enter value: ";
        cin >> x;
        v.push_back(x);
    }
    node* head = convert2LL(v);
    cout << "Linked List: ";
    print(head);
    // cout << "Is Palindrome: " << (Check_Palindrome(head) ? "Yes" : "No") << endl;
    cout<<chk_pali(head);
    return 0;
}