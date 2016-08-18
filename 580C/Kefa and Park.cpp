#include<bits/stdc++.h>
using namespace std;
list<int> li[100009];
int a[100009];
int cnt=0,r=0;
int vi[100009]={0};
int m;
int dfs(int x,int c)
{
    vi[x]=1;
    if(a[x]==1)
        c++;
    else
        c=0;
    if(c>m)
        return 0;
    if(li[x].size()==1&&x!=0)
    {
        cnt++;
        return 0;
    }
    for(list<int>::iterator it=li[x].begin();it!=li[x].end();it++)
    {
        if(vi[*it]==0)
            dfs(*it,c);
    }
}
int main()
{
    int i,n,x,y;
    cin>>n>>m;
    for(i=0;i<n;i++)
        cin>>a[i];
    for(i=0;i<n-1;i++)
    {
        cin>>x>>y;
        x--;y--;
        li[y].push_back(x);
        li[x].push_back(y);
    }
    dfs(0,0);
    cout<<cnt;
}
