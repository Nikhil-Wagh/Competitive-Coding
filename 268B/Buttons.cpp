#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,n,sum=0;
    cin>>n;
    j=n-1;
    for(i=1;i<=n;i++,j--)
    {
        sum+=(i*j)+1;
    }
    cout<<sum;
}
