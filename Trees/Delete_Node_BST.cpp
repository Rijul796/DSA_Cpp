#include <iostream>
using namespace std;

// Node structure for the binary search tree
class Node
{
public:
    int data;
    Node *left;
    Node *right;
    Node(int value)
    {
        data = value;
        left = right = nullptr;
    }
};

Node *findmin(Node *root)
{
    while (root->left != nullptr)
    {
        root = root->left;
    }
    return root;
}

// Function to remove a node with value x from a BST
Node *remove(Node *root, int x)
{
    if (root == nullptr)
        return root;
    else if (x < root->data)
        root->left = remove(root->left, x);
    else if (x > root->data)
        root->right = remove(root->right, x);
    else
    {
        // 0 child
        if (root->left == nullptr && root->right == nullptr)
        {
            delete root;
            root = nullptr;
        }
        // 1 child
        else if (root->left == nullptr)
        {
            Node *temp = root;
            root = root->right;
            delete temp;
        }
        else if (root->right == nullptr)
        {
            Node *temp = root;
            root = root->left;
            delete temp;
        }
        // 2 child
        else
        {
            Node *temp = findmin(root->right);
            root->data = temp->data;
            root->right = remove(root->right, temp->data);
        }
    }
    return root;
}

// Function to insert a new node into the BST
Node *insert(Node *root, int value)
{
    if (root == nullptr)
    {
        return new Node(value);
    }
    if (value < root->data)
    {
        root->left = insert(root->left, value);
    }
    else
    {
        root->right = insert(root->right, value);
    }
    return root;
}

// Function to print the inorder traversal of the BST
void inorder(Node *root)
{
    if (root == nullptr)
        return;
    inorder(root->left);
    cout << root->data << " ";
    inorder(root->right);
}

int main()
{
    int arr[10];
    int n;
    cout << "Enter the number of elements to insert into the BST (up to 10): ";
    cin >> n;

    if (n <= 0 || n > 10)
    {
        cout << "Invalid input for the number of elements. Exiting the program." << endl;
        return 1;
    }

    cout << "Enter " << n << " elements to insert into the BST: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    Node *root = NULL;
    for (int i = 0; i < n; i++)
    {
        root = insert(root, arr[i]);
    }

    cout << "Inorder traversal of the BST: ";
    inorder(root);
    cout << endl;

    // Example: Remove a node with value 5 from the BST
    int valueToRemove = 5;
    root = remove(root, valueToRemove);

    cout << "Inorder traversal of the BST after removing " << valueToRemove << ": ";
    inorder(root);
    cout << endl;

    return 0;
}
