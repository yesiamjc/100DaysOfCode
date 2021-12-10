
// Given a linked list of strings having n nodes check to see whether the combined string formed is 
// palindrome or not. 

#include <bits/stdc++.h>
using namespace std;
struct Node
{
    string data;
    Node *next;
    Node(string x)
    {
        data = x;
        next = NULL;
    }
};
Node *newNode(string str)
{
    Node *new_node = new Node(str);
    new_node->next = NULL;
    return new_node;
}
bool compute(struct Node *root);
void print(Node *root)
{
    Node *temp = root;
    while (temp != NULL)
    {
        cout << temp->data << endl;
        temp = temp->next;
    }
}

int main()
{
    int K;
    cin >> K;
    struct Node *head = NULL;
    struct Node *temp = head;
    for (int i = 0; i < K; i++)
    {
        string str = "";
        cin >> str;
        if (head == NULL)
            head = temp = new Node(str);
        else
        {
            temp->next = new Node(str);
            temp = temp->next;
        }
    }
    if (compute(head))
        cout << "True" << endl;
    else
        cout << "False" << endl;
    return 0;
}
bool compute(Node *root)
{
    Node *temp = root;
    string p;
    while (temp != NULL)
    {
        p += temp->data;
        temp = temp->next;
    }
    int i = 0;
    int j = p.size() - 1;
    while (i < j)
    {
        if (p[i] != p[j])
            return false;
        i++;
        j--;
    }
    return true;
}
