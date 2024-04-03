#include <iostream>
using namespace std;
class CircularQueue {
private:
    int frontIndex;
    int rearIndex;
    int capacity;
    int* arr;

public:
    // Initialize your data structure.
    CircularQueue(int n) : frontIndex(0), rearIndex(0), capacity(n + 1), arr(new int[capacity]) {}

    // Destructor to free memory allocated for the array.
    ~CircularQueue() {
        delete[] arr;
    }

    // Enqueues 'X' into the queue. Returns true if successful, and false otherwise.
    bool enqueue(int value) {
        if (isFull())
            return false;

        arr[rearIndex] = value;
        rearIndex = (rearIndex + 1) % capacity;

        return true;
    }

    // Dequeues top element from queue. Returns -1 if the queue is empty, otherwise returns the dequeued element.
    int dequeue() {
        if (isEmpty())
            return -1;

        int ans = arr[frontIndex];
        frontIndex = (frontIndex + 1) % capacity;

        return ans;
    }

    // Checks if the queue is empty.
    bool isEmpty() {
        return frontIndex == rearIndex;
    }

    // Checks if the queue is full.
    bool isFull() {
        return (rearIndex + 1) % capacity == frontIndex;
    }
};

int main() {
    // Create a circular queue with capacity 5
    CircularQueue cq(5);

    // Enqueue some elements
    cq.enqueue(10);
    cq.enqueue(20);
    cq.enqueue(30);
    cq.enqueue(40);

    // Dequeue elements and print them
    cout << "Dequeued: " << cq.dequeue() << endl;
    cout << "Dequeued: " << cq.dequeue() << endl;

    // Enqueue more elements
    cq.enqueue(50);
    cq.enqueue(60);

    // Dequeue remaining elements and print them
    while (!cq.isEmpty()) {
        cout << "Dequeued: " << cq.dequeue() << endl;
    }

    return 0;
}
