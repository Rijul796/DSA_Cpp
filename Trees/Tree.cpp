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
class node
{
public:
    int data;
    node *left;
    node *right;
    node(int data)
    {
        this->data = data;
        left = right = nullptr;
    }
};

// Function to build a binary tree
node *buildTree()
{
    int data;
    cout << "Enter data (or -1 to stop): ";
    cin >> data;
    if (data == -1)
        return nullptr;
    node *root = new node(data);
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

void inorder(node *root)
{
    if (root == NULL)
    {
        return;
    }
    inorder(root->left);
    cout << root->data << " ";
    inorder(root->right);
}

void preorder(node *root)
{
    if (root == NULL)
    {
        return;
    }
    cout << root->data << " ";
    preorder(root->left);
    preorder(root->right);
}

void postorder(node *root)
{
    if (root == NULL)
    {
        return;
    }
    postorder(root->left);
    postorder(root->right);
    cout << root->data << " ";
}

void buildFromLevel(node *&root)
{ // Passing root by reference
    queue<node *> q;
    cout << "Enter data for root: ";
    int data;
    cin >> data;
    root = new node(data);
    q.push(root);
    while (!q.empty())
    {
        node *temp = q.front();
        q.pop();
        cout << "Enter left node for: " << temp->data << endl;
        int leftdata;
        cin >> leftdata;

        if (leftdata != -1)
        {
            temp->left = new node(leftdata);
            q.push(temp->left);
        }
        cout << "Enter right node for: " << temp->data << endl;
        int rightdata;
        cin >> rightdata;
        if (rightdata != -1)
        {
            temp->right = new node(rightdata);
            q.push(temp->right);
        }
    }
}

int noOfLeafNode(node* root)
{
    if(root == NULL) {
        return 0; // If the tree is empty, return 0
    }
    if(root->left == NULL && root->right == NULL) {
        return 1; // If the node is a leaf, return 1
    }
    // Recursively count leaf nodes in left and right subtrees
    return noOfLeafNode(root->left) + noOfLeafNode(root->right);
}


int main()
{
    node *root = NULL;
    /*
    cout << "Level Order Traversal:\n";
    levelOrderTraversal(root);
    cout<<"inorder: "<<endl;
    inorder(root);
    cout<<"preorder: "<<endl;
    preorder(root);
    cout<<"postorder: "<<endl;
    postorder(root);*/
    buildFromLevel(root);
    cout << "Level Order Traversal:\n";
    levelOrderTraversal(root);
    cout<<noOfLeafNode(root);
    return 0;
}
