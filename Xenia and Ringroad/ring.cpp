#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int i,n,m,x,temp=0,cnt=-1;
    cin>>n>>m;
    for(i=0;i<m;i++)
    {
        cin>>x;
        if(x>temp)
        {
            cnt+=x-temp;
        }
        else if(x<temp)
        {
            cnt+=(n-temp+x);
        }
        temp=x;
    }
    cout<<cnt;
}
