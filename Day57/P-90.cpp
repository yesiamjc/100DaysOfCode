
// Given a binary tree. Find the inorder traversal of the tree without using recursion

#include <bits/stdc++.h>
using namespace std;
#define MAX_HEIGHT 100000
struct Node
{
    int data;
    Node *left;
    Node *right;
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
class Solution
{
public:
    vector<int> inOrder(Node *root)
    {
        stack<Node *> s;
        vector<int> inorder;
        Node *node = root;
        while (node || !s.empty())
        {
            while (node)
            {
                s.push(node);
                node = node->left;
            }
            node = s.top();
            s.pop();
            inorder.push_back(node->data);
            node = node->right;
        }
        return inorder;
    }
};
int main()
{
    string s, ch;
    getline(cin, s);
    Node *root = buildTree(s);
    vector<int> ans;
    Solution ob;
    ans = ob.inOrder(root);
    for (int i = 0; i < ans.size(); i++)
        cout << ans[i] << " ";
    cout << endl;
    return 0;
}