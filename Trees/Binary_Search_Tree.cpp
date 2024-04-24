// inorder traverse of BST is always sorted
// search operation of BST is O(height)
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

node *insert(node *root, int data)
{
    if (root == NULL)
    {
        return new node(data);
    }
    if (data < root->data)
    {
        root->left = insert(root->left, data);
    }
    else
    {
        root->right = insert(root->right, data);
    }
    return root;
}

void InOrder(node *root)
{
    if (root == NULL)
    {
        return;
    }
    InOrder(root->left);
    cout << root->data << " ";
    InOrder(root->right);
}

bool search(node *root, int data)
{
    if (root == nullptr)
    {
        return false;
    }
    if (root->data == data)
    {
        return true;
    }
    if (data < root->data)
    {
        return search(root->left, data);
    }
    return search(root->right, data);
}

int main()
{
    int arr[10];
    int n;
    cout << "enter length of array: ";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    node *root = NULL;
    for (int i = 0; i < n; i++)
    {
        root = insert(root, arr[i]);
    }
    cout << "Inorder traversal of the BST: ";
    InOrder(root);
    cout<<endl;
    int target;
    cout << "Enter the value you want to search for: ";
    cin >> target;
    if (search(root, target))
    {
        cout << "Found";
    }
    else
    {
        cout << "Not found\n";
    }
}