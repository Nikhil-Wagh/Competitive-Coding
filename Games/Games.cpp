#include<bits/stdc++.h>
using namespace std;
int main()
{
    int h[130]={0},g[130]={0},i,j,n,cnt=0,x,y;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>x>>y;
        h[x]++;g[y]++;
    }
    for(i=0;i<100+n;i++)
    {
        cnt+=(h[i]*g[i]);
    }
    cout<<cnt;
}
