#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,n,temp,a[100],x=0,y=0;
    cin>>n;
    for(i=0;i<n;i++)
        {
            cin>>a[i];
            y+=a[i];
        }
    for(i=0;i<n;i++)
    {
        temp=i;
        for(j=i;j<n;j++)
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
    x=0;
    for(i=n-1;i>=0;i--)
    {
        x+=a[i];
        y-=a[i];
        if(x>y)
            break;
    }
    cout<<(n-i);
    return 0;
}
