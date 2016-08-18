#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,p,n,a[300];
    cin>>p>>n;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
        if(a[i]!=0)
            a[i]%=p;
        for(j=i-1;j>=0;j--)
        {
            if(a[j]==a[i])
               {
                 break;
               }
        }
        if(j!=-1)
        {
            cout<<i+1;
            return 0;
        }
    }
    cout<<-1;
}
