
// Given a AVL tree and N values to be deleted from the tree. Write a function to delete a given value from 
// the tree.

#include <bits/stdc++.h>
using namespace std;
struct Node
{
    int data, height;
    Node *left, *right;
    Node(int x)
    {
        data = x;
        height = 1;
        left = right = NULL;
    }
};
int setHeights(Node *n)
{
    if (!n)
        return 0;
    n->height = 1 + max(setHeights(n->left), setHeights(n->right));
    return n->height;
}
Node *buildTree(string str)
{
    if (str.length() == 0 || str[0] == 'N')
        return NULL;
    vector<string> ip;
    istringstream iss(str);
    for (string str; iss >> str;)
        ip.push_back(str);
    Node *root = new Node(stoi(ip[0]));
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
            currNode->left = new Node(stoi(currVal));
            queue.push(currNode->left);
        }
        i++;
        if (i >= ip.size())
            break;
        currVal = ip[i];
        if (currVal != "N")
        {
            currNode->right = new Node(stoi(currVal));
            queue.push(currNode->right);
        }
        i++;
    }
    setHeights(root);
    return root;
}
bool isBST(Node *n, int lower, int upper)
{
    if (!n)
        return 1;
    if (n->data <= lower || n->data >= upper)
        return 0;
    return isBST(n->left, lower, n->data) && isBST(n->right, n->data, upper);
}
pair<int, bool> isBalanced(Node *n)
{
    if (!n)
        return pair<int, bool>(0, 1);
    pair<int, bool> l = isBalanced(n->left);
    pair<int, bool> r = isBalanced(n->right);
    if (abs(l.first - r.first) > 1)
        return pair<int, bool>(0, 0);
    return pair<int, bool>(1 + max(l.first, r.first), l.second && r.second);
}
bool isBalancedBST(Node *root)
{
    if (!isBST(root, INT_MIN, INT_MAX))
        cout << "BST voilated, inorder traversal : ";
    else if (!isBalanced(root).second)
        cout << "Unbalanced BST, inorder traversal : ";
    else
        return 1;
    return 0;
}
void printInorder(Node *n)
{
    if (!n)
        return;
    printInorder(n->left);
    cout << n->data << " ";
    printInorder(n->right);
}
struct Node *deleteNode(struct Node *root, int data);
int main()
{
    int t;
    cin >> t;
    getchar();
    while (t--)
    {
        string s;
        getline(cin, s);
        Node *root = buildTree(s);
        int n;
        cin >> n;
        int ip[n];
        for (int i = 0; i < n; i++)
            cin >> ip[i];

        for (int i = 0; i < n; i++)
        {
            root = deleteNode(root, ip[i]);

            if (!isBalancedBST(root))
                break;
        }
        if (root == NULL)
            cout << "null";
        else
            printInorder(root);
        cout << endl;

        getline(cin, s);
    }
    return 1;
}
void inorder(vector<int> &v, Node *root, const int data)
{
    if (root)
    {
        inorder(v, root->left, data);
        if (root->data != data)
            v.push_back(root->data);
        inorder(v, root->right, data);
    }
}
Node *buildTree(vector<int> &v, int s, int e)
{
    if (s > e)
        return NULL;
    int mid = (s + e) / 2;
    Node *root = new Node(v[mid]);
    root->left = buildTree(v, s, mid - 1);
    root->right = buildTree(v, mid + 1, e);
    return root;
}
Node *deleteNode(Node *root, int data)
{
    vector<int> v;
    inorder(v, root, data);
    return buildTree(v, 0, v.size() - 1);
}