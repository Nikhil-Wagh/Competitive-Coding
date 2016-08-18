#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int x[2003]={0},y[2003]={0},a=0,b=0,n,i,j,ans=0;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>a>>b;
        x[a+b]++;
        y[a-b+1000]++;
    }
    for(i=0;i<2003;i++)
    {
        ans+=(x[i]*(x[i]-1))/2;
        ans+=(y[i]*(y[i]-1))/2;
    }
    cout<<ans;
}
