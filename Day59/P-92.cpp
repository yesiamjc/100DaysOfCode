
// basic Linkedlist operation 

#include <bits/stdc++.h>
using namespace std;
class node
{
    public:
    int data;
    node* next;
    node(int val)
    {
        data = val;
        next = NULL;
    }
};
void display(node* head)
{
 node* temp=head;
 while(temp!=NULL)
 {
     cout<<temp->data<<"->";
     temp=temp->next;
 }
 cout<<"NULL"<<endl;
}
void insertAtTail(node* &head,int val)
{
 node* n = new node(val);
 if (head==NULL)
 {
     head=n;
     return;
 }
 node* temp=head;
 while(temp->next!=NULL)
 {
     temp=temp->next;
 }
 temp->next=n;
}
void insertAtHead(node* head,int val)
{
  node* n=new node(val);
  n->next=head;
  head=n;
}
void search(node* head,int key)
{
    node* temp=head;
    while(temp!=NULL)
    {
      if (temp->data==key)
      {
          cout<<key<<" is present in the linked list"<<endl;
          break;
      }
      temp=temp->next;
    }
}
void deleteAtHead(node* &head)
{
 node* todelete=head;
 head=head->next;
 delete todelete;
}
void deletion(node* head,int val)
{
 if (head==NULL)
     return;
 if (head->next == NULL)
 {
     deleteAtHead(head);
     return;
 }
 node* temp=head;
 while (temp->next->data!=val)
 {
     temp=temp->next;
 }
 node* todelete = temp->next;
 temp->next = temp->next->next;
 delete todelete;
}
int main()
{
   node* head = NULL;
   display(head);
   insertAtTail(head,1);
   insertAtTail(head,2);
   insertAtTail(head,3);
   display(head);
   insertAtHead(head,5);
   display(head);
   search(head,5);
   search(head,3);
   deleteAtHead(head);
   display(head);
   deletion(head,3);
   display(head);
   return 0;
}