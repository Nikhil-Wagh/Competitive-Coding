#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,posi,posj,min=0,a[100],sum=0,n;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
       /* if(a[i]==1)
            b[i]=1;
        else
            b[i]=0;*/
    }

    for(i=0;i<n;i++)
    {
        sum=0;
        for(j=i;j<n;j++)
        {
            sum+=a[j];
            if(sum<min)
            {
                posi=i;
                posj=j;
                min=sum;
            }
        }
    }
    sum=0;
    if(posi>posj)
    {
        int temp=posj;
        posj=posi;
        posi=temp;
    }
    for(i=0;i<n;i++)
    {
        if(i>=posi&&i<=posj)
        {
            if(a[i]==0)
                sum++;
        }
        if(a[i]==1)
            sum++;
    }
    cout<<sum<<" "<<posi<<" "<<posj;
}
