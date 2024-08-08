/*Given 2 strings, check if they are anagrams. An anagram is a rearrangement of the letters of one word to form another word. In other words, some permutation of string A must be same as 
string B.*/
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t>0)
    {
        string n, m;
        cin>>n>>m;
        map<char, int> s1, s2;
        bool isAnagram=true;
        if(n.size()!=m.size())
        {
            isAnagram=false;
        }
        for(int i=0; i<n.size(); i++)
        {
            s1[n[i]]++;
            s1[m[i]]--;
        }
        for(auto m:s1)
        {
            if(m.second!=0)
                isAnagram=false;
        }
        if(isAnagram)
            cout<<"True"<<endl;
        else
            cout<<"False"<<endl;
        t--;
    }
    return 0;
}
