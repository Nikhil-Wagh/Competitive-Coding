#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,k,n;
    cin>>n;
    for(i=n/1234567;i>=0;i--)
    {
       for(j=n/123456;j>=0;j--)
       {
           if(((n-(i*1234567+j*123456))%1234)==0&&(n-(i*1234567+j*123456))>=0)
           {
               cout<<"YES";return 0;
           }
       }
    }
    cout<<"NO";
}
