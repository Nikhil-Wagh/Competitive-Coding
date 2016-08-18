#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,a,n,b[100],cnt=0;
    cin>>n>>a;
    for(i=0;i<n;i++)
        cin>>b[i];
    for(int k=0,i=j=a-1;k<(max(n,n-a));i++,j--,k++)
    {
        if(i==j&&b[i]==1)
            cnt++;
        else if(i<n&&j>=0)
        {
            if(b[i]==b[j]&&b[i]==1)
            cnt+=2;
        }
        else
        {
                if(i>=n&&j>=0)
            {
                if(b[j]==1)
                    cnt++;
            }
                    else if(i<n&&j<0)
                        if(b[i]==1)
                        cnt++;
                }
    }
    cout<<cnt;
}
