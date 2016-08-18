#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int x,y,a,b,gcd,lcm,ans=0;
    cin>>x>>y>>a>>b;
    if(y>x)
    {
        for(long long int i=x;i>=1;i--)
        {
            if((x%i==0)&&(y%i==0))
            {
                gcd=i;
                break;
            }
        }
    }
    else
    for(long long int i=y;i>=1;i--)
        {
            if((x%i==0)&&(y%i==0))
            {
                gcd=i;
                break;
            }
        }
    lcm=((x*y)/gcd);
    ans=(b/lcm)-(a/lcm);
    if(a%lcm==0)
        ans++;
    cout<<ans;
}
