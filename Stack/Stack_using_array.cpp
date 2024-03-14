#include <iostream>
using namespace std;

class MyStack
{
public:
  int *arr;     // Array to store stack elements
  int top;      // Index of the top element in the stack
  int capacity; // Maximum capacity of the stack

  MyStack(int capacity)
  {
    this->capacity = capacity;
    top = -1;
    arr = new int[capacity]; // Allocate memory for the array
  }

  ~MyStack()
  {
    delete[] arr; // Deallocate memory when the object goes out of scope
  }

  void push(int data)
  {
    if (top == capacity - 1)
    {
      throw runtime_error("Stack overflow"); // Use a more informative exception type
    }
    top++;
    arr[top] = data;
  }

  int pop()
  {
    if (top == -1)
    {
      throw runtime_error("Stack underflow"); // Use a more informative exception type
    }
    int res = arr[top];
    top--;
    return res;
  }

  int Top()
  { // Function to get the top element without removing it
    if (top == -1)
    {
      throw runtime_error("Stack is empty"); // Use a more informative exception type
    }
    return arr[top];
  }

  bool isEmpty()
  {
    return top == -1;
  }
};

int main()
{
  MyStack s(4);
  cout << s.isEmpty() << endl;
  s.push(1);
  s.push(2);
  cout << s.Top();
  return 0;
}
