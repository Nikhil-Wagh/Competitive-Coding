#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x,y,n,a[6];
    cin>>x>>y;
    a[0]=x;
    a[1]=y;
    cin>>n;
    n=(n-1)%6;
    for(int i=2;i<6;i++)
    {
        a[i]=a[i-1]-a[i-2];
    }
    cout<<(a[n]%1000000007);
}
