#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,n,sum,temp,cnt=0;
    cin>>n>>sum;
    char c;
    for(i=0;i<n;i++)
    {
        cin>>c;
        cin>>temp;
        if(c=='-')
            temp*=-1;
        sum+=temp;
        if(sum<0)
        {
            cnt++;
            sum-=temp;
        }
    }
    if(sum<0)
        sum=0;
    cout<<sum<<" "<<cnt;
}
