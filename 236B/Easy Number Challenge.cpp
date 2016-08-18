#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,n,ma=0,mi=0,m,a[4009]={0},cur=0,x,y,z;
    cin>>n>>m;
    a[n]++;
    for(i=0;i<m;i++)
    {
        cin>>x;
        if(x==1)
        {
            cin>>y>>z;
            a[y]++;a[z]++;
        }
        else
        {
            cin>>y;
            a[y]++;
        }
    }
    for(i=1;i<=n;i++)
    {
        if(a[i]==0)
        {
            cur++;
            ma++;
        }
        else
        {
            mi+=ceil(double(cur)/2);
            cur=0;
        }
        //cout<<a[i]<<" ";
    }
    cout<<mi<<" "<<ma;
}
