#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i=1,j,cnt=0,start,end,n,x;
    cin>>n>>x;
    for(j=0;j<n;j++)
    {
        cin>>start>>end;
        i+=((start-i)/x)*x;
        for(;i<=end;i++)
            cnt++;
    }
    cout<<cnt;
}
