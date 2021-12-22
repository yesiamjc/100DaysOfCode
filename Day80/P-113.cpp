
// Given a binary tree. The task is to check whether the given tree follows the max heap property or not.

#include <bits/stdc++.h>
using namespace std;
struct Node
{
    int data;
    Node *left;
    Node *right;

    Node(int val)
    {
        data = val;
        left = right = NULL;
    }
};
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
    return root;
}
class Solution
{
public:
    bool isHeap(struct Node *tree)
    {
        struct Node *p = tree;
        queue<Node *> q;
        if (tree == NULL)
        {
            return true;
        }
        q.emplace(tree);
        bool found = false;
        while (!q.empty())
        {
            p = q.front();
            q.pop();
            if (p->left != NULL)
            {
                if (found || p->left->data > p->data)
                {
                    return false;
                }
                else
                {
                    q.emplace(p->left);
                }
            }
            else
            {
                found = true;
            }

            if (p->right != NULL)
            {
                if (found || p->right->data > p->data)
                {
                    return false;
                }
                else
                {
                    q.emplace(p->right);
                }
            }

            else
            {
                found = true;
            }
        }
        return true;
    }
};
int main()
{
    string treeString;
    getline(cin, treeString);
    Solution ob;
    Node *root = buildTree(treeString);
    if (ob.isHeap(root))
        cout << 1 << endl;
    else
        cout << 0 << endl;
    return 0;
}