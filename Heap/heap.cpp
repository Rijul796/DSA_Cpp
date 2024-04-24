#include <iostream> 
#include <vector> 

using namespace std; 

class heap {
public: 
    vector<int> v; 

    heap(int default_size = 10) {
        v.reserve(default_size + 1); 
        v.push_back(-1); 
    } 

    void push(int data) {
        v.push_back(data); 
        int idx = v.size() - 1; 
        int parent = idx / 2; 
        while (idx > 1 and v[idx] < v[parent]) {
            swap(v[idx], v[parent]); 
            idx = parent; 
            parent = parent / 2; 
        } 
    } 

    void pop() {
        if (v.size() == 1) {
            cout << "Heap is empty." << endl;
            return;
        }
        int idx = v.size() - 1; 
        swap(v[1], v[idx]); 
        v.pop_back(); 
        heapify(1); 
    } 

    void get() {
        if (v.size() <= 1) {
            cout << "Heap is empty." << endl;
            return;
        }
        cout << v[1]; 
    } 

    void heapify(int i) {
        int left = 2 * i; 
        int right = 2 * i + 1; 
        int min_idx = i; 
        if (left < v.size() and v[left] < v[i]) {
            min_idx = left; 
        } 
        if (right < v.size() and v[right] < v[min_idx]) {
            min_idx = right; 
        } 
        if (min_idx != i) {
            swap(v[i], v[min_idx]); 
            heapify(min_idx); 
        } 
    } 
}; 

int main() {
    heap h;
    h.push(5);
    h.push(10);
    h.push(3);
    h.push(8);
    cout << "Min element: ";
    h.get();
    cout << endl;

    cout << "Popping minimum element." << endl;
    h.pop();

    cout << "Min element after popping: ";
    h.get();
    cout << endl;

    return 0;
}
