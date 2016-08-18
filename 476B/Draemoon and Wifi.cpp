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
int fac(int num)
{
    int factorial=1;
     for(int a=1;a<=num;a++)

    {

        factorial=factorial*a;

    }
    return factorial;
}

int main()
{
    int i,ex=0,cu=0,q=0,m;
    double per;
    string a,b;
    cin>>a>>b;
    cout<<setprecision(12)<<fixed;
    for(i=0;a[i]!='\0';i++)
    {
        if(a[i]=='+')
            ex++;
        else if(a[i]=='-')
            ex--;
        if(b[i]=='+')
            cu++;
        else if(b[i]=='-')
            cu--;
        else
            q++;
    }
    m=abs(ex-cu);
    if(m>q)
    {
        per=0;
        cout<<per;
        return 0;
    }
    per=fac(q)/fac(m+(q-m)/2);
    per/=fac((q-m)/2);
    per/=fast_pow(2,q);
    cout<<per;
}
