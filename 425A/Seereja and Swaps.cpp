#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,n,a[210],k,sum=0,m,temp,cur=-1;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(i=0;i<k;i++)
    {
        m=i;
        for(j=i;j<n;j++)
        {
            if(a[j]<a[m])
                m=j;
        }
        temp = a[i];
        a[i]=a[m];
        a[m]=temp;
    }
	for(i=0;i<n;i++)
    {
        if(sum>cur)
            cur=sum;
        sum+=a[i];
    }
    cout<<sum;
}
