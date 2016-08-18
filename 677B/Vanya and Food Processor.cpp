#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int i,sum=0,n,h,k,a[100005],cnt=0;
    cin>>n>>h>>k;
    for(i=0;i<n;i++)
        cin>>a[i];
    for(i=0;i<n;i++)
    {
        sum+=a[i];
        if(sum>h)
        {
            cnt++;
            sum=a[i];
        }
            cnt+=sum/k;
            sum%=k;
    }
    cnt+=sum/k;
    if(sum%k)
        cnt++;
    cout<<cnt;

}
