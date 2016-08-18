#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int i,m,n,k,sum=0,x,temp;
    long long int a[100009],b[100009];
    cin>>n>>m>>k;
    for(i=1;i<=n;i++)
    {
        cin>>a[i];
        b[a[i]]=i;
    }
    for(i=0;i<m;i++)
    {
        cin>>x;
        if(a[1]!=x)
        {
            sum+=ceil(double(b[x])/k);
            temp=b[x];
            swap(b[x],b[a[b[x]-1]]);
            swap(a[temp],a[temp-1]);
        }
        else
            sum++;
    }
    cout<<sum<<endl;
}
