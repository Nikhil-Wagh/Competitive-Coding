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
    long long int n,sum=0,i=0,a[10]={0};
    cin>>n;
    while(1)
    {
        if(n/fast_pow(10,i)>=10)
            a[i]=(fast_pow(10,i)*9)*(i+1);
        else
            break;
            i++;
    }
    a[i]=(n+1-fast_pow(10,i))*(i+1);
    for(i=0;i<10;i++)
        {sum+=a[i];
    }
   cout<<sum<<endl;
}
