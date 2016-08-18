#include<bits/stdc++.h>
using namespace std;
int a[50][50]={0};
char c[50][[50];
int n,m;
int dfs(int i,int j)
{
    if(i==n||j==m)
        return ;
    if(a[i-1][j]==1)
        cnt++;
    if(a[i+1][j]==1)
      cnt++;
    if(a[i][j-1]==1)
        cnt++;
    if(a[i][j+1]==1)
        cnt++;
    if(cnt>1)
        return 1;

    if(i!=0&&j!=0)
    {
        if(a[i-1][j]==0&&c[i][j]==c[i-1][j])
            temp=dfs(i-1,j);
        else if(a[i+1][j]==0&&c[i][j]==c[i+1][j])
            temp=dfs(i+1,j);
        else if(a[i][j-1]==0&&c[i][j]==c[i][j-1])
            temp=dfs(i,j-1);
        else if(a[i][j+1]==0&&c[i][j]==c[i][j+1])
            temp=dfs(i,j+1);
    }

}
int main()
{
    int i,j;
    cin>>n>>m;
    for(i=0;i<n;i++)
    {
        cin>>c[i];
    }
    dfs(a,c,0,0);

}
