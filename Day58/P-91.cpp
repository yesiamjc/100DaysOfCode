
// Given Pointer/Reference to the head of a doubly linked list of N nodes, the task is to Sort the 
// given doubly linked list using Merge Sort in both non-decreasing and non-increasing order.

#include <bits/stdc++.h>
using namespace std;
struct Node
{
    int data;
    struct Node *next, *prev;
    Node(int x)
    {
        data = x;
        next = NULL;
        prev = NULL;
    }
};
Node *findMid(Node *head)
{
    if (head == NULL and head->next == NULL)
        return head;
    Node *fastptr = head;
    Node *slowptr = head;
    while (fastptr and fastptr->next)
    {
        fastptr = fastptr->next->next;
        if (fastptr)
            slowptr = slowptr->next;
    }
    return slowptr;
}
Node *merge(Node *head1, Node *head2)
{
    if (!head1)
        return head2;
    if (!head2)
        return head1;
    Node *reshead = NULL;
    Node *curr = NULL;
    Node *ptr1 = head1;
    Node *ptr2 = head2;
    while (ptr1 and ptr2)
    {
        if (ptr1->data <= ptr2->data)
        {
            if (!reshead)
            {
                reshead = ptr1;
                curr = ptr1;
            }
            else
            {
                curr->next = ptr1;
                ptr1->prev = curr;
                curr = curr->next;
            }
            ptr1 = ptr1->next;
        }
        else
        {
            if (!reshead)
            {
                reshead = ptr2;
                curr = ptr2;
            }
            else
            {
                curr->next = ptr2;
                ptr2->prev = curr;
                curr = curr->next;
            }
            ptr2 = ptr2->next;
        }
    }
    while (ptr1)
    {
        curr->next = ptr1;
        ptr1->prev = curr;
        curr = curr->next;
        ptr1 = ptr1->next;
    }
    while (ptr2)
    {
        curr->next = ptr2;
        ptr2->prev = curr;
        curr = curr->next;
        ptr2 = ptr2->next;
    }
    if (!ptr1 and !ptr2)
        curr->next = NULL;
    return reshead;
}
struct Node *sortDoubly(struct Node *head){
    if (head and !head->next)
        return head;
    if (head and head->next)
    {
        Node *mid = findMid(head);
        Node *head1 = (mid != NULL) ? (mid->next) : NULL;
        mid->next = NULL;
        head1->prev = NULL;
        head = sortDoubly(head);
        head1 = sortDoubly(head1);
        return merge(head, head1);
    }
};
void insert(struct Node **head, int data)
{
    struct Node *temp = new Node(data);
    if (!(*head))
        (*head) = temp;
    else
    {
        temp->next = *head;
        (*head)->prev = temp;
        (*head) = temp;
    }
}
void print(struct Node *head)
{
    struct Node *temp = head;
    while (head)
    {
        cout << head->data << ' ';
        temp = head;
        head = head->next;
    }
    cout << endl;
    while (temp)
    {
        cout << temp->data << ' ';
        temp = temp->prev;
    }
    cout << endl;
}
void swap(int *A, int *B)
{
    int temp = *A;
    *A = *B;
    *B = temp;
}
int main(void)
{
    int n, tmp;
    struct Node *head = NULL;
    cin >> n;
    while (n--)
    {
        cin >> tmp;
        insert(&head, tmp);
    }
    head = sortDoubly(head);
    print(head);
    return 0;
}