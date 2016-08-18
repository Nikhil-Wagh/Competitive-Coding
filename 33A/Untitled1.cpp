#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int i,n,a[100009]={0},vi[100009]={0},sum=0,temp=0,f,k;
    cin>>n>>k;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
        if(i!=0)
            sum+=a[i]*a[i-1];
            temp+=a[i];
    }
    sum+=a[i-1]*a[0];
    for(i=0;i<k;i++)
    {
        long long int x;
        cin>>x;
        x--;
        f=temp;
        if(x!=0&&x!=n-1)
        {
            if(vi[x]==0)
            {
                f-=a[x];vi[x]=1;
            }
            if(vi[x-1]==0)
            {
                f-=a[x-1];
            }
            if(vi[x+1]==0)
            {
                f-=a[x+1];
            }

        }
        else if(x==0)
        {
            if(vi[x]==0)
            {
                f-=a[x];vi[x]=1;
            }
            if(vi[n-1]==0)
            {
                f-=a[n-1];
            }
            if(vi[1]==0)
            {
                f-=a[1];
            }

        }
        else
        {
            if(vi[x]==0)
            {
                f-=a[x];vi[x]=1;
            }
            if(vi[x-1]==0)
            {
                f-=a[x-1];
            }
            if(vi[0]==0)
            {
                f-=a[1];
            }
        }
        sum+=f*a[x];
        vi[x]=1;
        temp-=a[x];

    }
    cout<<sum;
}
