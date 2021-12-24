
// Given a Binary Search Tree. Convert a given BST into a Special Max Heap with the condition that all the 
// values in the left subtree of a node should be less than all the values in the right subtree of the node.
// This condition is applied on all the nodes in the so converted Max Heap.

#include <bits/stdc++.h>
using namespace std;
struct Node
{
    int data;
    Node *left, *right;
};
Node *newNode(int val)
{
    Node *temp = new Node;
    temp->data = val;
    temp->left = NULL;
    temp->right = NULL;
    return temp;
}
Node *buildTree(string str)
{
    if (str.length() == 0 || str[0] == 'N')
        return NULL;
    vector<string> ip;
    istringstream iss(str);
    for (string str; iss >> str;)
        ip.push_back(str);
    Node *root = newNode(stoi(ip[0]));
    queue<Node *> queue;
    queue.push(root);
    int i = 1;
    while (!queue.empty() && i < ip.size())
    {
        Node *currNode = queue.front();
        queue.pop();
        string currVal = ip[i];
        if (currVal != "N")
        {
            currNode->left = newNode(stoi(currVal));
            queue.push(currNode->left);
        }
        i++;
        if (i >= ip.size())
            break;
        currVal = ip[i];
        if (currVal != "N")
        {
            currNode->right = newNode(stoi(currVal));
            queue.push(currNode->right);
        }
        i++;
    }
    return root;
}
void postorderTraversal(Node *root)
{
    if (!root)
        return;
    postorderTraversal(root->left);
    postorderTraversal(root->right);
    cout << root->data << " ";
}
class Solution
{
    queue<int> q;

public:
    void dfs(Node *root)
    {
        if (root == NULL)
            return;
        dfs(root->right);
        q.push(root->data);
        dfs(root->left);
    }
    void solver(Node *root)
    {
        if (root == NULL)
            return;
        int val = q.front();
        q.pop();
        root->data = val;
        solver(root->right);
        solver(root->left);
    }
    void convertToMaxHeapUtil(Node *root)
    {
        dfs(root);
        solver(root);
    }
};
int main()
{
    getchar();
    string inp, ch;
    getline(cin, inp);
    struct Node *root = buildTree(inp);
    Solution ob;
    ob.convertToMaxHeapUtil(root);
    postorderTraversal(root);
    cout << "\n";
    return 0;
}
