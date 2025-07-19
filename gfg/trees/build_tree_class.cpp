#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *left;
    Node *right;

    Node(int value)
    {
        data = value;
        left = right = NULL;
    }
};

class BinaryTree
{
private:
    unordered_map<int, int> location;
    int pre_index;

public:
    Node *build_tree(vector<int> &inorder, vector<int> &preorder, int in_start, int in_end)
    {

        if (in_start > in_end)
        {
            return NULL;
        }

        int root_value = preorder[pre_index++];
        Node *root = new Node(root_value);

        if (in_start == in_end)
        {
            return root;
        }

        int in_index = location[root_value];

        root->left = build_tree(inorder, preorder, in_start, in_index - 1);
        root->right = build_tree(inorder, preorder, in_index + 1, in_end);

        return root;
    }

    Node *construct_tree(vector<int> &inorder, vector<int> &preorder)
    {
        location.clear();
        pre_index = 0;
        int in_size = inorder.size();

        for (int i = 0; i < in_size; i++)
        {
            location[inorder[i]] = i;
        }

        Node *root = build_tree(inorder, preorder, 0, in_size - 1);

        return root;
    }

    void inorder(Node *root)
    {
        if (root == NULL)
            return;

        inorder(root->left);
        cout << root->data << " ";
        inorder(root->right);
    }

    void postorder(Node *root)
    {
        if (root == NULL)
            return;

        postorder(root->left);
        postorder(root->right);
        cout << root->data << " ";
    }

    void preorder(Node *root)
    {
        if (root == NULL)
            return;

        cout << root->data << " ";
        preorder(root->left);
        preorder(root->right);
    }
};

int main()
{
    vector<int> inorder = {4, 2, 5, 1, 6, 3};
    vector<int> preorder = {1, 2, 4, 5, 3, 6};

    BinaryTree bt;

    Node *root = bt.construct_tree(inorder, preorder);

    cout << "Inorder Traversal: ";
    bt.inorder(root);
    cout << endl;

    cout << "Preorder Traversal: ";
    bt.preorder(root);
    cout << endl;

    cout << "Postorder Traversal: ";
    bt.postorder(root);
    cout << endl;

    return 0;
}