#include<bits/stdc++.h>
using namespace std;

int main()
{
    int i,j,temp,n,k,a[50],min=0;
    cin>>n>>k;
    for(i=0;i<n;i++)
        cin>>a[i];
    for(i=0;i<n;i++)
    {
        min=i;
        for(j=i+1;j<n;j++)
        {
            if(a[j]<a[min])
            {
                min=j;
            }
        }
        temp=a[i];
        a[i]=a[min];
        a[min]=temp;
    }
    if(n>=k)
    cout<<a[n-k]<<" "<<a[n-k];
    else
        cout<<-1;
    return 0;
}
