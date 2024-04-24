#include <bits/stdc++.h>
using namespace std;

class node
{
public:
    int val;
    node *left;
    node *right;
    node(int val)
    {
        this->val = val;
        left = right = NULL;
    }
};

node *buildTree()
{
    int val;
    cout << "enter val: ";
    cin >> val;
    if (val == -1)
    {
        return NULL;
    }
    node *root = new node(val);
    cout << "enter val for left of " << val << " ";
    root->left = buildTree();
    cout << "enter val for right of " << val << " ";
    root->right = buildTree();
    return root;
}

int height(node *root)
{
    if (root == NULL)
    {
        return 0;
    }
    int left = height(root->left);
    int right = height(root->right);
    int res = max(left, right) + 1;
    return res;
}

bool isbalanced(node* root)
{
    if(root==NULL)
    {
        return true;
    }
    bool left=isbalanced(root->left);
    bool right=isbalanced(root->right);
    bool diff=abs(height(root->left)-height(root->right))<=1;
    if(left && right && diff)
    {
        return true;
    }
    return false;
}

int main()
{
    node *root = buildTree();
    cout << "Height of the binary tree is: " << height(root) << endl;
    if(isbalanced(root))
    {
        cout<<"yes";
    }
    else
    {
        cout<<"no";
    }
    return 0;
}