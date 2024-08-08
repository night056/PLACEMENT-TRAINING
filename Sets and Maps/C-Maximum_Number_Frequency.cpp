/*Term frequency–Inverse document frequency (tf-idf) is a numerical statistic which reflects the importance of words in a document collection. It is often used in information retrieval 
system. The number of times a word appears in the document (word frequency) is one of the major factors to acquire tf-idf.
You are asked to write a program to find the most frequent word in a document.*/

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
