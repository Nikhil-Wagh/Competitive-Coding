#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,k,mid,temp,n,m,a[100005],flag=0;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>temp;
        a[i]=temp;
        if(i>0)
            a[i]+=a[i-1];
    }
    cin>>m;
    for(k=0;k<m;k++,flag=0)
    {
        j=n-1;i=0;
        cin>>temp;
        while(i<=j)
        {
            mid=(i+j)/2;
            if(a[mid]>temp)
            {
                j=mid-1;
            }
            else if(a[mid]<temp)
            {
                i=mid+1;
            }
            else
                {
                    cout<<i+1<<endl;flag=1;break;
                }
        }
        if(flag==0)
        cout<<i+1<<endl;
    }
}
