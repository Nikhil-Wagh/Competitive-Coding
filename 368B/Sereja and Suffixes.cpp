#include<bits/stdc++.h>
using namespace std;
int main()
{
    long int i,cnt=0,a[100005],b[100005],f[100005]={0},n,m,temp;
    cin>>n>>m;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(i--;i>=0;i--)
    {
        if(f[a[i]]==0)
            {
                cnt++;
            }
        f[a[i]]++;
        b[i]=cnt;
    }
    for(i=0;i<m;i++)
    {
        cin>>temp;
        cout<<b[temp-1]<<endl;
    }
}
