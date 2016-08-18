#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,min=1009,n,a[105],posi,diff,max=0;
    cin>>n;
    for(i=0;i<n;i++)
        cin>>a[i];
    for(i=0;i<n-2;i++)
    {
        if(a[i+2]-a[i]<min)
            {
                min=a[i+2]-a[i];
                posi=i+1;
            }
    }
    for(i=0;i<n-1;i++)
    {
        if(i+1==posi)
            diff=a[i+2]-a[i];
        else if(i==posi)
            continue;
        else
            diff=a[i+1]-a[i];
        if(diff>max)
            max=diff;
    }
    cout<<max;
}
