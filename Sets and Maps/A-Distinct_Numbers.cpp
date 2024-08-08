/*You are given a list of n integers, and your task is to calculate the number of distinct values in the list.*/
#include <iostream>
#include<set>
using namespace std;

int main()
{
    int n, v;
    cin>>n;
    set <int> s;
    for(int i=0; i<n; i++)
    {
        cin>>v;
        s.insert(v);
    }
    int len=s.size();
    printf("%d", len);
}
