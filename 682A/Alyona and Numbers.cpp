#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,n,m,ans=0;
    cin>>n>>m;
    if(n>m)
    {
        int temp=n;n=m;m=temp;
    }
    ans+=n*(m/5);
    for(i=1;i<=(n%5);i++)
    {
        for(j=1;j<=(m%5);j++)
        {
            if((i+j)%5==0)
                ans++;
        }
    }
    cout<<ans;
}
