#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,n,x,sum=0,cnt=0;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>x;
        sum+=x;
    }
    for(i=1;i<=5;i++)
    {
        if((sum+i)%(n+1)==1)
            cnt++;
    }
    cout<<5-cnt;
}
