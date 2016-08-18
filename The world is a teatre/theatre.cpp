#include<bits/stdc++.h>
using namespace std;
typedef uint64_t ut;
typedef long long int lli;
double comb(lli,lli y)
{
    double n=1;
    while(y+0.1>0)
    {
        n*=(double)x/(double)y;
        x++;y--;
    }
    return n;
}
int main()
{
    lli n,m,t,i;
    double sum=0;
    cin>>n>>m>>t;
    i=4;
    while(i<=n)
    {
        if(t-i>0)
        sum+=comb(n,min(i,n-i))+comb(m,min(t-i,m-t+i));
        i++;
    }
    cout<<fixed<<setprecision(18)<<sum;
}
