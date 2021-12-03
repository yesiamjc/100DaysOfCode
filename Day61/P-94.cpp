
// Let's give it a try! You have a linked list and you have to implement the functionalities 
// push and pop of stack using this given linked list. Your task is to use the class as shown 
// in the comments in the code editor and complete the functions push() and pop() to implement a stack. 

#include <bits/stdc++.h>
using namespace std;
struct StackNode
{
    int data;
    StackNode *next;
    StackNode(int a)
    {
        data = a;
        next = NULL;
    }
};
class MyStack
{
private:
    StackNode *top;

public:
    void push(int);
    int pop();
    MyStack() { top = NULL; }
};
int main()
{
    MyStack *sq = new MyStack();
    int Q;
    cin >> Q;
    while (Q--)
    {
        int QueryType = 0;
        cin >> QueryType;
        if (QueryType == 1)
        {
            int a;
            cin >> a;
            sq->push(a);
        }
        else if (QueryType == 2)
        {
            cout << sq->pop() << " ";
        }
    }
    cout << endl;
}
void MyStack ::push(int x)
{
    struct StackNode *ptr = new StackNode(x);
    ptr->next = top;
    top = ptr;
}
int MyStack ::pop()
{
    int x;
    if (top == NULL)
    {
        return -1;
    }
    else
    {
        StackNode *ptr = top;
        top = top->next;
        int x = ptr->data;
        return x;
    }
}
