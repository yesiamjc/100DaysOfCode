
// Implement a Queue using two stack s1 and s2.

#include <bits/stdc++.h>
using namespace std;
class Queue
{
    stack<int> input, output;

public:
    void enqueue(int x)
    {
        input.push(x);
    }
    int dequeue()
    {
        if (input.empty() && output.empty())
            return -1;
        if (output.empty())
        {
            while (!input.empty())
            {
                output.push(input.top());
                input.pop();
            }
        }
        int topele = output.top();
        output.pop();
        while (!output.empty())
        {
            input.push(output.top());
            output.pop();
        }
        return topele;
    }
};
int main()
{
    Queue ob;
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
            ob.enqueue(a);
        }
        else if (QueryType == 2)
        {
            cout << ob.dequeue() << " ";
        }
    }
    cout << endl;
}