#include <iostream>
#include <vector>

using namespace std;

class MyStack {
private:
    vector<int> stack;

public:
    MyStack() {}

    void push(int data) {
        stack.push_back(data);
    }

    int top() {
        if (stack.empty()) {
            throw runtime_error("Stack is empty");
        }
        return stack.back();
    }

    void pop() {
        if (stack.empty()) {
            throw runtime_error("Stack is empty");
        }
        stack.pop_back();
    }

    bool empty() {
        return stack.empty();
    }

    int getSize() {
        return stack.size();
    }
};

int main() {
    MyStack stack;

    stack.push(10);
    stack.push(20);
    stack.push(30);

    cout << "Top element: " << stack.top() << endl; // Should print 30

    stack.pop();
    cout << "After pop, Top element: " << stack.top() << endl; // Should print 20

    cout << "Is stack empty? " << (stack.empty() ? "Yes" : "No") << endl; // Should print No

    cout << "Size of stack: " << stack.getSize() << endl; // Should print 2

    stack.pop();
    stack.pop();
    cout << "Is stack empty now? " << (stack.empty() ? "Yes" : "No") << endl; // Should print Yes

    return 0;
}


/*
#include <iostream>
#include <vector>
using namespace std;

class stack{
    public:
    int top;
    int size;
    vector<int> arr;

    stack(int size)
    {
        this->size = size;
        top = -1;
    }

    void push(int d)
    {
        if(top==size-1)
        {
            cout << "overflow";
            return;
        }
        top++;
        arr.push_back(d);
    }
    void pop()
    {
        if(top==-1)
        {
            cout << "Underflow" << endl;
            return;
        }
        top--;
    }

    int peek()
    {   
        if(top==-1)
        {
            cout << "stack is empty" << endl;
            return -1;
        }
        return arr[top];
    }

    int getSize()
    {
        return size;
    }
};

int main()
{
    stack s(5);
    s.pop();
    s.push(1);
    s.push(2);
    s.push(2);
    s.push(2);
    s.push(2);
    s.push(2);
    cout << s.peek() << endl;
    return 0;
}
*/