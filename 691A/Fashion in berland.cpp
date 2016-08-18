#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,n,x,sum=0;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>x;
        sum+=x;
    }
    if(n==1&&sum>0)
    {
        cout<<"YES";
        return 0;
    }
    else
    {
        cout<<"NO";
        return;
    }
    if(sum==n-1)
        cout<<"YES";
    else
        cout<<"NO";
}
