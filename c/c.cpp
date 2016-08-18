#include<bits/stdc++.h>
using namespace std;
long long int gcd(long long int a,long long int b)
{
    for (;;)
    {
        if (a == 0) return b;
        b %= a;
        if (b == 0) return a;
        a %= b;
    }
}

long long int lcm(long long int a,long long int b)
{
    long long int temp = gcd(a, b);

    return temp ? (a / temp * b) : 0;
}

int main()
{
    long long int l,max,n,a,b,p,q,m;
    cin>>n>>a>>b>>p>>q;
    m=(p < q) ? p : q;
    l=lcm(a,b);
    long long int ans;
    ans=((n/a)*p)+((n/b)*q)-((n/l)*m);
    cout<<ans;
}
