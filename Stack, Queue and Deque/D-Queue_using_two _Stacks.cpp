/*A queue is an abstract data type that maintains the order in which elements were added to it, allowing the oldest elements to be removed from the front and new elements to be added to the rear. This is called a First-In-First-Out (FIFO) data structure because the first 
element added to the queue (i.e., the one that has been waiting the longest) is always the first one to be removed.
A basic queue has the following operations:
Enqueue: add a new element to the end of the queue.
Dequeue: remove the element from the front of the queue and return it.
In this challenge, you must first implement a queue using two stacks. Then process  queries, where each query is one of the following  types:
1 x: Enqueue element  into the end of the queue.
2: Dequeue the element at the front of the queue.
3: Print the element at the front of the queue.*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, v, t;
    string op;
    cin>>n;
    stack<int> st1;
    stack<int> st2;
    while(n--)
    {
        cin>>t;
        switch(t)
        {
            case 1:
            {
                while(!st2.empty())
                {
                    st1.push(st2.top());
                    st2.pop();
                }
                cin>>v;
                st1.push(v);
                break;
            }
            case 2:
            {
                while(!st1.empty())
                {
                    st2.push(st1.top());
                    st1.pop();
                }
                st2.pop();
                break;
            }
            case 3:
            {
                while(!st1.empty())
                {
                    st2.push(st1.top());
                    st1.pop();
                }
                cout<<st2.top()<<endl;
                break;
            }
            default:
            {
                cout<<"No such operation exists"<<endl;
            }
            
        }
    }
}

