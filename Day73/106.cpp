
// Given K sorted linked lists of different sizes. The task is to merge them in such a way that after merging they will be a single sorted linked list.

#include <bits/stdc++.h>
using namespace std;
struct Node
{
    int data;
    Node *next;

    Node(int x)
    {
        data = x;
        next = NULL;
    }
};
void printList(Node *node)
{
    while (node != NULL)
    {
        printf("%d ", node->data);
        node = node->next;
    }
    cout << endl;
}
class Solution
{
public:
    Node *mergeKLists(Node *arr[], int K)
    {
        priority_queue<pair<int, int>, vector<pair<int, int>>, greater<>> pq;
        for (int i = 0; i < K; i++)
            pq.push({arr[i]->data, i});
        Node *head = nullptr, *tail = nullptr;
        while (!pq.empty())
        {
            Node *node = new Node(pq.top().first);
            if (!tail)
            {
                head = tail = node;
            }
            else
            {
                tail->next = node;
                tail = node;
            }
            int i = pq.top().second;
            pq.pop();
            if (arr[i])
            {
                Node *t = arr[i];
                arr[i] = arr[i]->next;
                delete t;
            }
            if (arr[i])
            {
                pq.push({arr[i]->data, i});
            }
        }
        return head;
    }
};
int main()
{
    int N;
    cin >> N;
    struct Node *arr[N];
    for (int j = 0; j < N; j++)
    {
        int n;
        cin >> n;

        int x;
        cin >> x;
        arr[j] = new Node(x);
        Node *curr = arr[j];
        n--;
        for (int i = 0; i < n; i++)
        {
            cin >> x;
            Node *temp = new Node(x);
            curr->next = temp;
            curr = temp;
        }
    }
    Solution obj;
    Node *res = obj.mergeKLists(arr, N);
    printList(res);
    return 0;
}