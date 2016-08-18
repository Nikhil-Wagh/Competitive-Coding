#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j=0,n,dist=0,a[200005],b[200005],min=0,max=-1;
    cin>>n;
    for(i=0;i<n;i++)
        cin>>a[i];
    for(i=0;i<n;i++)
        if(a[i]<a[min])
        min=i;
    for(i=0;i<n;i++)
    {
        if(a[i]==a[min])
        {
            b[j]=i;
            j++;
        }
        cout<<a[i]<<" "<<b[j];
    }

    for(i=0;i<j;i++)
    {
        if(i!=j-1)
        {
            if(b[i+1]-b[i]>max)
            max=b[i];
        }
        else
            if(n-b[i]+b[0]>max)
            max=b[i];
    }
    cout<<b[i];
}
