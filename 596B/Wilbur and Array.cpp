#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int i,sum,a[200005],n;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
        if(i==0)
            sum=abs(a[i]);
        else
            sum+=abs(a[i]-a[i-1]);
    }
    cout<<sum;
}
