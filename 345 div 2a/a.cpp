#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,temp,sum=0,a[5],x=0,remove=0;
    for(i=0;i<5;i++)
        cin>>a[i];
    for(i=0;i<5;i++)
    {
        temp=i;
        for(j=i;j<5;j++)
        {
            if(a[j]<a[temp])
                temp=j;
        }
        if(temp!=i)
        {
            x=a[i];
            a[i]=a[temp];
            a[temp]=x;
        }
    }
    for(i=0;i<4;i++)
    {
        if(a[i]==a[i+1])
            remove=max(remove,2*a[i]);
        if(a[i]==a[i+2])
            remove=max(remove,3*a[i]);
    }
    cout<<(a[0]+a[1]+a[2]+a[3]+a[4]-remove);
}
