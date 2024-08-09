/*Perform Enqueue and Dequeue operations on a queue. Implement Queue and avoid using inbuilt library.*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, v;
    string op;
    cin>>n;
    queue<int> st;
    for(int i=0; i<n; i++)
    {
        cin>>op;
        if(op=="Enqueue")
        {
            cin>>v;
            st.push(v);
        }
        else if(op=="Dequeue")
        {
            if(st.empty())
                cout<<"Empty"<<endl;
            else
            {
                cout<<st.front()<<endl;
                st.pop();
            }
        }
        else
            cout<<"no such operation exists"<<endl;
    }
}

