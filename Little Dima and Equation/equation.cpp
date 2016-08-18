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
    long long int i,n=0,a,b,c,x,temp,sum=0,arr[500];
    cin>>a>>b>>c;
    for(i=1;i<=82;i++)
    {
        sum=0;
        x=b*fast_pow(i,a)+c;
        if(x>0&&x<1000000000)
        {
            temp=x;
            while(temp)
            {
                sum+=(temp%10);
                temp/=10;
            }
            if(sum==i)
            {
                arr[n]=x;
                n++;
            }
        }
    }
    cout<<n<<endl;
    for(i=0;i<n;i++)
        cout<<arr[i]<<" ";
}
