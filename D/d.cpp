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
             result = result%1000000007;
             }
        value = value*value;
        value = value%1000000007;
        power /= 2;
        //power >>= 1;
    }
    return result;
}

int main()
{
    long long int sum=0,a,b,n,x;
    cin>>a>>b>>n>>x;
    sum=x;
    if(n!=1)
    sum=(b*(fast_pow(a,n)-1)/(a-1))+(x*fast_pow(a,n));
    else
      {
         sum=(a*x)+b;
         cout<<sum;
         return 0;
      }
    sum%=1000000007;
    cout<<sum;
}
/*
int main()
{
    long long int sum=0,a,b,n,x;
    cin>>a>>b>>n>>x;
    sum=x;
    for(int i=0;i<n;i++)
    {
        sum=((sum*a)+b);
        sum%=1000000007;
    }
    cout<<sum<<endl;
    sum=(b*(fast_pow(a,n)-1)/(a-1))+(x*fast_pow(a,n));
   cout<<sum;
}
*/
