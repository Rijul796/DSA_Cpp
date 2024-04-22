#include <bits/stdc++.h>
using namespace std;

class node
{
public:
    int data;
    node *left;
    node *right;
    node(int data)
    {
        this->data = data;
        left = right = NULL;
    }
};

node *buildTree()
{
    int data;
    cout << "Enter data: ";
    cin >> data;
    if (data == -1)
        return nullptr;
    node *root = new node(data);
    cout << "Enter left child of " << data << endl;
    root->left = buildTree();
    cout << "Enter right child of " << data << endl;
    root->right = buildTree();
    return root;
}

void InOrder(node *root, vector<int> &v1)
{
    if (root == NULL)
    {
        v1.push_back(-1);
        return;
    }
    InOrder(root->left, v1);
    v1.push_back(root->data);
    InOrder(root->right, v1);
}

void PostOrder(node *root, vector<int> &v2)
{
    if (root == NULL)
    {
        v2.push_back(-1);
        return;
    }
    PostOrder(root->left, v2);
    PostOrder(root->right, v2);
    v2.push_back(root->data);
}

bool compareTrees(node *root1, node *root2)
{
    vector<int> v1, v2;
    InOrder(root1, v1);
    InOrder(root2, v2);
    for (auto i : v1)
    {
        cout << i << " ";
    }
    cout << endl;
    for (auto i : v2)
    {
        cout << i << " ";
    }
    cout << endl;
    if (v1 != v2)
    {
        return false;
    }
    v1.clear();
    v2.clear();
    PostOrder(root1, v1);
    PostOrder(root2, v2);
    for (auto i : v1)
    {
        cout << i << " ";
    }
    cout << endl;
    for (auto i : v2)
    {
        cout << i << " ";
    }
    cout << endl;
    if (v1 != v2)
    {
        return false;
    }
    return true;
}

int main()
{
    node *root1 = buildTree();
    node *root2 = buildTree();
    if (compareTrees(root1, root2))
    {
        cout << "Trees are identical";
    }
    else
    {
        cout << "Trees are not identical";
    }
    return 0;
}
/*
#include<iostream>
#include<vector>
#include<queue>
using namespace std;

// structure of node
class Treenode {
public:
    int data;
    Treenode *left;
    Treenode *right;
    Treenode(int d): data(d), left(nullptr), right(nullptr) {}
};

// Function prototypes
Treenode *build();
void inorder(Treenode *root, vector<int> &v);
void preorder(Treenode *root, vector<int> &v);
void issame(Treenode *p, Treenode *q);

// Function to create a tree
Treenode *build() {
    cout << "Create tree: ";
    int d;
    cin >> d;
    if (d == -1)
        return nullptr;

    Treenode *root = new Treenode(d);
    queue<Treenode*> q;
    q.push(root);

    while (!q.empty()) {
        Treenode* current = q.front();
        q.pop();

        int c1, c2;
        cin >> c1 >> c2;

        if (c1 != -1) {
            current->left = new Treenode(c1);
            q.push(current->left);
        }

        if (c2 != -1) {
            current->right = new Treenode(c2);
            q.push(current->right);
        }
    }

    return root;
}

// Inorder traversal
void inorder(Treenode *root, vector<int> &v) {
    if (root != nullptr) {
        inorder(root->left, v);
        v.push_back(root->data);
        inorder(root->right, v);
    }
}

// Preorder traversal
void preorder(Treenode *root, vector<int> &v) {
    if (root != nullptr) {
        v.push_back(root->data);
        preorder(root->left, v);
        preorder(root->right, v);
    }
}

// Check if two trees are identical
void issame(Treenode *p, Treenode *q) {
    vector<int> inp, inq, prep, preq;
    inorder(p, inp);
    inorder(q, inq);
    preorder(p, prep);
    preorder(q, preq);

    if (inp == inq && prep == preq)
        cout << "Trees are identical\n";
    else
        cout << "Trees are not identical\n";

    // Deallocate memory
    delete p;
    delete q;
}

// Main function
int main() {
    Treenode *p = build();
    Treenode *q = build();
    issame(p, q);
    return 0;
}
*/