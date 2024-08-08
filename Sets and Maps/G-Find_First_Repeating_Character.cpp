/*Given a string of characters, find the first repeating character.*/
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t>0)
    {
        string n;
        cin>>n;
        unordered_map<char, int> s;
        bool flag=false;
        for(int i=0; i<n.size(); i++)
        {
            s[n[i]]++;
        }
        for(auto m: n)
        {
            if(s[m]>=2)
            {
                cout<<m<<endl;
                flag=true;
                break;
            }
        }
        if(flag==false)
            cout<<"."<<endl;
        t--;
    }
    return 0;
}
