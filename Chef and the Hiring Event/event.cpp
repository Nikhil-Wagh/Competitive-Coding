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
    long long int i,m,n,sum=0,cases;
    cin>>cases;
    for(i=0;i<cases;i++,sum=0){
    cin>>n;
    n--;
    do
    {
        m=0;
        while(1)
        {
            if(n/fast_pow(5,m)<5)
                break;
            else
                m++;
        }
        if(m!=0)
        sum+=fast_pow(10,m)*2;
        else
        sum+=(n*2);
        n-=fast_pow(5,m);
    }while(m);
    cout<<sum<<endl;
    }
}
