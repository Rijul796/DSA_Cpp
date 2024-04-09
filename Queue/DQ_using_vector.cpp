#include <bits/stdc++.h>
using namespace std;

#include <bits/stdc++.h> 
class Deque
{
public:
    int front;
    int rear;
    int n;
    vector<int> v;
    Deque(int n)
    {
        this->n = n;
        front = -1;
        rear = -1;
        v.resize(n);
    }

    // Pushes 'X' in the front of the deque. Returns true if it gets pushed into the deque, and false otherwise.
    bool pushFront(int x)
    {
        if(isFull())
        {
            return false;
        }
        else if(isEmpty())
        {
            front = 0;
            rear = 0;
            v[front] = x;
            return true;
        }
        else if(front==0)
        {
            front = n-1;
            v[front] = x;
            return true;
        }
        else{
            front--;
            v[front] = x;
            return true;
        }
    }

    // Pushes 'X' in the back of the deque. Returns true if it gets pushed into the deque, and false otherwise.
    bool pushRear(int x)
    {
        if(isFull())
        {
            return false;
        }
        else if(isEmpty())
        {
            front = 0;
            rear = 0;
            v[front] = x;
            return true;
        }
        else if(rear==n-1)
        {
            rear = 0;
            v[rear] = x;
            return true;
        }
        else{
            rear++;
            v[rear] = x;
            return true;
        }
    }

    // Pops an element from the front of the deque. Returns -1 if the deque is empty, otherwise returns the popped element.
    int popFront()
    {
        if(isEmpty())
        {
            return -1;
        }
        else if(front==rear)
        {
            int ans = v[front];
            front = -1;
            rear = -1;
            return ans;
        }
        else if(front==n-1)
        {
            front = 0;
            return v[n-1];
        }
        else if(rear>front)
        {
            return v[front++];
        }
        else if(front>rear)
        {
            return v[front++];
        }
    }

    // Pops an element from the back of the deque. Returns -1 if the deque is empty, otherwise returns the popped element.
    int popRear()
    {
        if(isEmpty())
        {
            return -1;
        }
        else if(front==rear)
        {
            int ans = v[front];
            front = -1;
            rear = -1;
            return ans;
        }
        else if(rear==0)
        {
            int ans = v[rear];
            rear = n-1;
            return ans;
        }
        else if(front>rear)
        {
            return v[rear--];
        }
        else if(rear>front)
        {
            return v[rear--];
        }
    }

    // Returns the first element of the deque. If the deque is empty, it returns -1.
    int getFront()
    {
        if(isEmpty())
        {
            return -1;
        }
        return v[front];
    }

    // Returns the last element of the deque. If the deque is empty, it returns -1.
    int getRear()
    {
        if(isEmpty())
        {
            return -1;
        }
        return v[rear];
    }

    // Returns true if the deque is empty. Otherwise returns false.
    bool isEmpty()
    {
        if(front==-1 && rear==-1)
        {
            return true;
        }
        return false;
    }

    // Returns true if the deque is full. Otherwise returns false.
    bool isFull()
    {
        if(front==0 && rear==n-1)
        {
            return true;
        }
        if(front==rear+1)
        {
            return true;
        }
        return false;
    }
};

int main()
{
    Deque q1(5);
    q1.pushFront(1);
    q1.pushFront(2);
    q1.pushFront(3);
    q1.pushRear(4);
    cout << q1.getFront() << endl;
    cout << q1.getRear() << endl;
    q1.popFront();
    q1.popRear();
    cout << q1.getFront() << endl;
    cout << q1.getRear() << endl;
    return 0;
}
