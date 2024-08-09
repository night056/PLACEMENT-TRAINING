/*Perform push and pop operations on a deque. Implement Deque and avoid using inbuilt library.*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, v;
    string op;
    cin>>n;
    deque<int> st;
    for(int i=0; i<n; i++)
    {
        cin>>op;
        if(op=="push_back")
        {
            cin>>v;
            st.push_back(v);
        }
        else if(op=="push_front")
        {
            cin>>v;
            st.push_front(v);
        }
        else if(op=="pop_front")
        {
            if(st.empty())
                cout<<"Empty"<<endl;
            else
            {
                cout<<st.front()<<endl;
                st.pop_front();
            }
        }
        else if(op=="pop_back")
        {
            if(st.empty())
                cout<<"Empty"<<endl;
            else
            {
                cout<<st.back()<<endl;
                st.pop_back();
            }
        }
        else
            cout<<"no such operation exists"<<endl;
    }
}

