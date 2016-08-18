#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,cnt=0,vol=0;
    cin>>n;
    n=cbrt(n);
    for(int i=n;i>0;i--)
    {
        vol+=i*i*i;
    }
}
