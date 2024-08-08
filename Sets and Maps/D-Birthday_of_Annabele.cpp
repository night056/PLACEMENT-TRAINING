/*Vishal Wants to buy 2 gifts for his best friend whose name is Annabelle(her age is 20), So they both went for shopping in a store. But Annabelle gave, Vishal a condition that she will 
accept this gifts only when the total price of the gifts is the same as her age times 100.
The store contains, a list of items whose prices are also displayed, Now Vishal is asking for your help to buy gifts, as he wants to impress Annabelle this time.
Note: Vishal cannot buy the same item more than once.*/

#include<iostream>
#include<map>

using namespace std;

int main()
{
    int n;
    cin>>n;
    map <string, int> mp;
    string v, word;
    for(int i=0; i<n; i++)
    {
        cin>>v;
        mp[v]++;
    }
    int l=0;
    for(pair<string, int> p: mp)
    {
        if(p.second>l)
            l=p.second;
    }
    for(pair<string, int> p: mp)
    {
        if(p.second==l)
            word=p.first;
    }
    cout<<word<<" "<<l;
}
