/*Perform push and pop operations on stack. Implement Stacks and avoid using inbuilt library.*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, v;
    string op;
    cin>>n;
    stack<int> st;
    for(int i=0; i<n; i++)
    {
        cin>>op;
        if(op=="push")
        {
            cin>>v;
            st.push(v);
        }
        else if(op=="pop")
        {
            if(st.empty())
                cout<<"Empty"<<endl;
            else
            {
                cout<<st.top()<<endl;
                st.pop();
            }
        }
        else
            cout<<"no such operation exists"<<endl;
    }
}
