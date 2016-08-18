#include<bits/stdc++.h>
using namespace std;
long long int fast_pow(long long int a,long long int n)
{
    long long int result = 1;
    long long int power = n;
    long long int value = a;
    while(power>0)
    {
        if(power&1)
            {result = result*value;
            result = result%10000000000000007;}
        value = value*value;
        value = value%10000000000000007;
        power /= 2;
        //power >>= 1;
    }
    return result;
}
int main()
{
    long long int n,m=0;
    cin>>n;
    while(1)
    {
        if(n/fast_pow(5,m)<5)
            break;
        m++;
    }
    cout<<m;
}
