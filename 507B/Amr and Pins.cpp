#include<bits/stdc++.h>
using namespace std;
long long fast_pow(int a,int n)
{
    long long result = 1;
    long long power = n;
    long long value = a;
    while(power>0)
    {
        if(power&1)
            {result = result*value;
            result = result%1000000007;}
        value = value*value;
        value = value%1000000007;
        power /= 2;
        //power >>= 1;
    }
    return result;
}

int main()
{
    int r,a,b,c,d;
    long double dix,diy,di;
    cin>>r>>a>>b>>c>>d;
    dix=(double)(c-a)*(c-a);
    diy=(double)(d-b)*(d-b);
    di=sqrt(dix+diy);
    di/=(2*r);
    di=ceil(di);
    cout<<di;
}
