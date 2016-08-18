#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,n,k,sum,posi=1,min=101,a[500005];
    cin>>n>>k;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
        if(i>=k-1)
        {
            sum=0;
            for(j=0;j<k;j++)
                sum+=a[i-j];
            if(min>sum)
            {
                min=sum;
                posi=i-k+2;
            }
        }
    }
    cout<<posi;
}
