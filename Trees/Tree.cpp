#include <iostream>
#include <queue>
using namespace std;
// Non-linear herarical data structure ,length is the number of levels in tree or max no of nodes to reach a leaf node
//  BINARY TREE ---> 1) It has to follow hirarichal structure
//  2) Every node has at most two children
//  3) Child can be a left or right child

// REPRESENTATION -> it is represented by a pointer to the topmost node of the tree
//   if value of pointer is null , tree is empty.
// max no. of nodes of a binary tree at level i is 2^i
// max no. of nodes in a binary tree of height h is 2^h-1 or 2^(h+1)-1
// in a binary tree having n nodes minimum possible height is log2(N+1) or log2(N+1)-1  ---> N nodes =2^(h+1)-1   N+1 nodes=2^(h+1)   log2(N+1)=h+1
// in a binary tree where every noe has 0 or 2 children:
// no of leave nodes is always one more than node with nodes with two childern
class node {
public:
    int data;
    node *left;
    node *right;
    node(int data) {
        this->data = data;
        left = right = nullptr;
    }
};

// Function to build a binary tree
node* buildTree() {
    int data;
    cout << "Enter data (or -1 to stop): ";
    cin >> data;
    if (data == -1)
        return nullptr;
    node* root = new node(data);
    cout << "Enter left child of " << data << ": ";
    root->left = buildTree();
    cout << "Enter right child of " << data << ": ";
    root->right = buildTree();
    return root;
}

// Function to perform level order traversal of the binary tree
void levelOrderTraversal(node* root) {
    if (root == nullptr)
        return;
    
    queue<node*> q;
    q.push(root);
    
    while (!q.empty()) {
        int levelSize = q.size();
        for (int i = 0; i < levelSize; i++) {
            node* current = q.front();
            q.pop();
            cout << current->data << " ";
            if (current->left)
                q.push(current->left);
            if (current->right)
                q.push(current->right);
        }
        cout << endl;
    }
}

int main() {
    node* root = buildTree();
    cout << "Level Order Traversal:\n";
    levelOrderTraversal(root);
    return 0;
}
