#include <iostream>

using namespace std;

struct ListNode {
    int val;
    ListNode* next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode* next) : val(x), next(next) {}
};

ListNode* sum_two(ListNode* num1, ListNode* num2) {
    ListNode* dummy = new ListNode(-1);
    ListNode* current = dummy;
    ListNode* temp1 = num1;
    ListNode* temp2 = num2;
    int carry = 0;

    while (temp1 != nullptr || temp2 != nullptr) {
        int sum = carry;
        if (temp1) {
            sum += temp1->val;
            temp1 = temp1->next;
        }
        if (temp2) {
            sum += temp2->val;
            temp2 = temp2->next;
        }
        current->next = new ListNode(sum % 10);
        carry = sum / 10;
        current = current->next;
    }

    if (carry) {
        current->next = new ListNode(carry);
    }

    return dummy->next;
}

ListNode* reverse(ListNode* head) {
    if (head == NULL || head->next == NULL) {
        return head;
    }
    ListNode* curr = head;
    ListNode* next = NULL;
    ListNode* prev = NULL;
    while (curr != NULL) {
        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
    }
    return prev;
}

ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
    ListNode* temp = reverse(l1);
    ListNode* temp2 = reverse(l2);
    ListNode* x = sum_two(temp,temp2);
    ListNode* res = reverse(x);
    return res;
}

int main() {
    // Create linked list 1: 2 -> 4 -> 3
    ListNode* l1 = new ListNode(2);
    l1->next = new ListNode(4);
    l1->next->next = new ListNode(3);

    // Create linked list 2: 5 -> 6 -> 4
    ListNode* l2 = new ListNode(5);
    l2->next = new ListNode(6);
    l2->next->next = new ListNode(4);

    // Add the two numbers and print the result: 7 -> 0 -> 8
    ListNode* result = addTwoNumbers(l1, l2);
    while (result != nullptr) {
        cout << result->val << " ";
        result = result->next;
    }

    return 0;
}
