#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    Node *left;
    Node *right;
    Node(int value)
    {
        data = value;
        left = right = NULL;
    }
};

Node *build_tree(vector<int> &inorder, vector<int> &preorder, int in_start, int in_end, unordered_map<int, int> &location, int &pre_index)
{   

    if(in_start > in_end){
        return NULL;
    }

    int root_value = preorder[pre_index++];
    Node *root = new Node(root_value);

    if(in_start == in_end){
        return root;
    }

    int in_index = location[root_value];

    root->left = build_tree(inorder, preorder, in_start, in_index - 1, location, pre_index);
    root->right = build_tree(inorder, preorder, in_index + 1, in_end, location, pre_index);

    return root;
}

Node *construct_tree(vector<int> &inorder, vector<int> &preorder)
{
    unordered_map<int, int> location;
    int in_size = inorder.size();
    int pre_index = 0;

    for (int i = 0; i < in_size; i++)
    {
        location[inorder[i]] = i;
    }

    Node *root = build_tree(inorder, preorder, 0, in_size - 1, location, pre_index);

    return root;
}

void postorder(Node *root)
{
    if (root == NULL)
        return;

    postorder(root->left);
    postorder(root->right);
    cout << root->data << " ";
}

int main()
{
    vector<int> inorder = {4, 2, 5, 1, 6, 3};
    vector<int> preorder = {1, 2, 4, 5, 3, 6};

    Node *root = construct_tree(inorder, preorder);

    cout << "Postorder Traversal: ";
    postorder(root);
    cout << endl;

    return 0;
}