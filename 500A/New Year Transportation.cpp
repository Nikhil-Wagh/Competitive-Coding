#include<bits/stdc++.h>
using namespace std;
bool flag=false;
list<int > li[30009];
int t;
int vi[30009]={0};
int dfs(int x)
{
    list < int > ::iterator it;
    vi[x]=1;
    if(flag)
        return 1;
    if(x==t)
        {
            flag = true;
            return 1;
        }
    for(it=li[x].begin();it!=li[x].end();it++)
    {
            dfs(*it);
            if(flag)
                return 1;
    }
}
int main()
{
    int n,x,i;
    cin>>n>>t;
    for(i=1;i<n;i++)
    {
        cin>>x;
        li[i].push_back(x+i);
    }
    dfs(1);
    if(flag)
        cout<<"YES";
    else
        cout<<"NO";
}
