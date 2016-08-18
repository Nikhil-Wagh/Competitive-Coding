#include<bits/stdc++.h>
using namespace std;
list<int> li[200009];
queue<int>vi;
int b[100009]={0},t;
int dfs(int x,int c,int m,int visited[200009])
{
    list<int>::iterator it;
    visited[x]=1;
    c++;
    if(b[x]==1&&c>m&&x!=vi.front())
    {
        b[x]=0;
        m=c;
        if(t!=vi.front())
            b[t]=1;
        t=x;
    }
    for(it=li[x].begin();it!=li[x].end();it++)
    {
        if(visited[*it]==0)
            dfs(*it,c,m,visited);
    }
    return m;
}
int main()
{
    int i,n,k,sum=0,x,y;
    cin>>n>>k;
    for(i=0;i<2*k;i++)
    {
        cin>>x;
        vi.push(x);
        b[x]++;
    }
    for(i=0;i<n-1;i++)
    {
        cin>>x>>y;
        x--;y--;
        li[x].push_back(y);
        li[y].push_back(x);
    }
    while(vi.size())
    {
        int visited[200009]={0};
        if(b[vi.front()]==1)
        {
            b[vi.front()]=0;
            t=vi.front();
            sum+=dfs(vi.front(),-1,0,visited);
        }
        vi.pop();
    }
    cout<<sum;
}
