#include<bits/stdc++.h>
using namespace std;
vector<int> a[100009];
int visited[100009];
void dfs(int i)
{
     visited[i] = 1;
     for(int j=0;j<a[i].size();j++)
     {
         if(visited[a[i][j]]==0)
            dfs(a[i][j]);
     }
}
int main()
{
    int i,n,x,y;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>x>>y;
        a[x].push_back(y);
    }
    for(i=0;i<n;i++)
    {
        if(a[i].size()>0)
            dfs(i);
    }
    for(int i =0;i<10009;i++)
    {
        if(visited[i]!=0)
            cout<<i<<endl;
    }
}
