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

int height(node* root) {
    if (root == nullptr) {
        return 0;
    }
    int left = height(root->left);
    int right = height(root->right);
    int ans = max(left, right) + 1;
    return ans;
}

int diameterOfBinaryTree(node* root) {
    if (root == nullptr) {
        return 0;
    }
    int leftHeight = height(root->left);
    int rightHeight = height(root->right);
    int diameterThroughRoot = leftHeight + rightHeight;
    int leftDiameter = diameterOfBinaryTree(root->left);
    int rightDiameter = diameterOfBinaryTree(root->right);
    return max(diameterThroughRoot, max(leftDiameter, rightDiameter));
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
    cout<<"height is: "<<height(root)<<endl;
    cout<<"diameter is: "<<diameterOfBinaryTree(root);
}

/*
// Global variable to store the maximum diameter
int maxi = 0;

// Recursive function to calculate the height of each node in the tree and update the maximum diameter
int solve(TreeNode* node) {
    // Base case: if the node is NULL (empty), return 0
    if (node == NULL) return 0;

    // Recursively calculate the height of the left subtree
    int leftNode = solve(node->left);
    // Recursively calculate the height of the right subtree
    int rightNode = solve(node->right);

    // Update the maximum diameter by comparing it with the sum of heights of left and right subtrees
    maxi = max(maxi, leftNode + rightNode);

    // Return the height of the current node by adding 1 to the maximum height of its left and right subtrees
    return 1 + max(leftNode, rightNode);
}

// Function to find the diameter of the binary tree
int diameterOfBinaryTree(TreeNode* root) {
    // Call the recursive function to traverse the tree and update the maximum diameter
    solve(root);
    // Return the maximum diameter found
    return maxi;
}
*/