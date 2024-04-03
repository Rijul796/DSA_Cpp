#include <iostream>

using namespace std;

class Deque {
private:
    int capacity;
    int *arr;
    int frontIndex;
    int rearIndex;

public:
    Deque(int n) : capacity(n), arr(new int[n]), frontIndex(-1), rearIndex(-1) {}

    ~Deque() {
        delete[] arr;
    }

    bool isEmpty() const {
        return frontIndex == -1;
    }

    bool isFull() const {
        return (rearIndex + 1) % capacity == frontIndex;
    }

    bool pushFront(int x) {
        if (isFull())
            return false;

        if (isEmpty())
            frontIndex = rearIndex = 0;
        else
            frontIndex = (frontIndex - 1 + capacity) % capacity;

        arr[frontIndex] = x;
        return true;
    }

    bool pushRear(int x) {
        if (isFull())
            return false;

        if (isEmpty())
            frontIndex = rearIndex = 0;
        else
            rearIndex = (rearIndex + 1) % capacity;

        arr[rearIndex] = x;
        return true;
    }

    int popFront() {
        if (isEmpty())
            return -1;

        int ans = arr[frontIndex];
        if (frontIndex == rearIndex)
            frontIndex = rearIndex = -1;
        else
            frontIndex = (frontIndex + 1) % capacity;

        return ans;
    }

    int popRear() {
        if (isEmpty())
            return -1;

        int ans = arr[rearIndex];
        if (frontIndex == rearIndex)
            frontIndex = rearIndex = -1;
        else
            rearIndex = (rearIndex - 1 + capacity) % capacity;

        return ans;
    }

    int getFront() const {
        if (isEmpty())
            return -1;

        return arr[frontIndex];
    }

    int getRear() const {
        if (isEmpty())
            return -1;

        return arr[rearIndex];
    }
};

int main() {
    Deque dq(5);

    cout << "Pushing elements at front: ";
    for (int i = 0; i < 3; ++i) {
        dq.pushFront(i);
        cout << i << " ";
    }
    cout << endl;

    cout << "Pushing elements at rear: ";
    for (int i = 3; i < 5; ++i) {
        dq.pushRear(i);
        cout << i << " ";
    }
    cout << endl;

    cout << "Front element: " << dq.getFront() << endl;
    cout << "Rear element: " << dq.getRear() << endl;

    cout << "Popping front elements: ";
    while (!dq.isEmpty()) {
        cout << dq.popFront() << " ";
    }
    cout << endl;

    return 0;
}
