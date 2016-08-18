#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,n,p,ne,m=1,c=1;
    cin>>n;
    cin>>p;
    for(i=0;i<n-1;i++)
    {
        cin>>ne;
        if(ne>p)
        {
            c++;
        }
        else
            c=1;
        if(c>m)
            m=c;
            p=ne;
    }
    cout<<m;
}
