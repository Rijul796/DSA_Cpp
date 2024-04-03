#include <iostream>
using namespace std;

class Queue {
private:
    int* arr;
    int frontIndex;
    int rearIndex;
    int capacity;

public:
    Queue(int size = 10) {
        capacity = size;
        arr = new int[capacity];
        frontIndex = 0;
        rearIndex = 0;
    }

    ~Queue() {
        delete[] arr;
    }

    bool isEmpty() const {
        return frontIndex == rearIndex;
    }

    bool isFull() const {
        return (rearIndex + 1) % capacity == frontIndex;
    }

    void enqueue(int data) {
        if (isFull()) {
            cout << "Queue is Full" << endl;
            return;
        }
        arr[rearIndex] = data;
        rearIndex = (rearIndex + 1) % capacity;
    }

    int dequeue() {
        if (isEmpty()) {
            cout << "Queue is Empty" << endl;
            return -1; // Or throw an exception
        }
        int data = arr[frontIndex];
        frontIndex = (frontIndex + 1) % capacity;
        return data;
    }

    int front() const {
        if (isEmpty()) {
            cout << "Queue is Empty" << endl;
            return -1; // Or throw an exception
        }
        return arr[frontIndex];
    }
};

int main() {
    Queue q(5); // Create a queue with size 5

    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);

    cout << "Front element: " << q.front() << endl;

    q.dequeue();

    cout << "Front element after dequeue: " << q.front() << endl;

    return 0;
}
