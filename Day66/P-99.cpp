
// Sort the given doubly linked list of size N using quicksort. Just complete the partition function using 
// the quicksort technique.

#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;
struct Node
{
    int data;
    struct Node *next;
    struct Node *prev;
    
    Node(int x){
        data = x;
        next = NULL;
        prev = NULL;
    }
};
struct Node *lastNode(Node *root)
{
    while (root && root->next)
        root = root->next;
    return root;
}
void swap(int* a, int* b )
{   
    int t = *a;
    *a = *b;
    *b = t;
}
Node* partition(Node *l, Node *h);
void _quickSort(struct Node* l, struct Node *h)
{
    if (h != NULL && l != h && l != h->next)
    {
        struct Node *p = partition(l, h);
        _quickSort(l, p->prev);
        _quickSort(p->next, h);
    }
}
void quickSort(struct Node *head)
{
    struct Node *h = lastNode(head);
    _quickSort(head, h);
}
void printList(struct Node *head)
{
    while (head)
    {
        cout << head->data << "  ";
        head = head->next;
    }
    cout << endl;
}
int main()
{
    int t,x,n,i;
    scanf("%d",&t);
    while(t--)
    {
        struct Node *p,*temp,*head = NULL;
        scanf("%d",&n);
        scanf("%d",&x);
        head=new Node(x);
        p=head;
        for(i=0;i<n-1;i++){
            scanf("%d",&x);
        	temp=new Node(x);
        	p->next=temp;
        	temp->prev=p;
            p=p->next;
        }
    quickSort(head);
    printList(head);           
    while(head->next!=NULL)
    {
	  temp=head;
	  head=head->next;
	  free(temp);
	}
	  free(head);
	}
    return 0;
}
Node* partition(Node *l, Node *h){
    int x = h->data;
    Node *i = l->prev;
    for(Node *j = l; j != h; j = j->next){
        if(j->data <= x){
            i = (i == NULL)?l : i->next;
            swap(&(i->data), &(j->data));
        }
    }
    i = (i == NULL)? l : i->next;
    swap(&(i->data), &(h->data));
    return i;
}