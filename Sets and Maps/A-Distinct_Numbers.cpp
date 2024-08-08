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
