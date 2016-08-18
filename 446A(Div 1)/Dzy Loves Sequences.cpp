#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j=0,k=0,a[100009],len=1,m=-1,cnt=0;
    int n;
    cin>>n;
    for(i=0;i<=n;i++)
    {
        if(i<n)
        cin>>a[i];
        len=i-min(j,k);
        if(len>m)
            m=len;
        if(i>0)
        {
            if(a[i]<a[i-1])
            {
                cnt++;
                if(j<k)
                   j=i;
                else
                    k=i;
            }

        }//cout<<i<<" "<<j<<" "<<k<<" "<<len<<" "<<m<<endl;
    }
    cout<<m<<endl;
}
