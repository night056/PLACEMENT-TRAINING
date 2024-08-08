/*Given two arrays of integers, find which elements in the second array are missing from the first array.*/
#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n, v, k;
    cin>>n;
    map<int, int> mp;
    for(int i=0; i<n; i++)
    {
       cin>>v;
       mp[v]++;
    }
    cin>>k;
    map<int, int> m;
    for(int i=0; i<k; i++)
    {
       cin>>v;
       m[v]++;
    }
    auto i=mp.begin(), j=m.begin();
    while(i!=mp.end()&&j!=m.end())
    {
        if(i->first!=j->first)
        {
            cout<<j->first<<" ";
            j++;
            continue;
        }
        if(i->second !=j->second)
        {
            cout<<i->first<<" ";
        }
        i++;
        j++;
    }
    while(j!=m.end())
    {
        cout<<j->first<<" ";
        j++;
    }
    return 0;
}
