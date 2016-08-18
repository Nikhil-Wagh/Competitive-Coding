#include<bits/stdc++.h>
using namespace std;
bool cmp(int i, int j)
{
    return (i<j);
}
int main()
{
    int i,j,n,m,cnt=0,x;
    vector<int>b;
    vector<int>g;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>x;
        b.push_back(x);
    }
    cin>>m;
    for(i=0;i<m;i++)
    {
        cin>>x;
        g.push_back(x);
    }
    sort(b.begin(),b.end(),cmp);
    sort(g.begin(),g.end(),cmp);
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
            if(abs(b[i]-g[j])<=1)
        {
            cnt++;
            g[j]=200;
            break;
        }
    }
    cout<<cnt;
}
