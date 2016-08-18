#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,cnt=0,n,m;
    cin>>n>>m;
    if(m<=n)
    {
        cout<<n-m;
    }
    else
    {
        while(true)
        {
            if((2*n)>=m)
                break;
            cnt++;
            n=n*2;
        }
        cnt+=min(n*2-m,n-(m/2));
        cnt++;
        cout<<cnt;
    }
}
