#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,n,m,cnt=0;
    cin>>n>>m;
    if(n>=m)
    {
        cout<<n-m;
        return 0;
    }
    else
    {
        while(m!=n)
        {
            if(m%2==0&&m>n)
                m/=2;
            else
                m++;
            cnt++;
            //cout<<m<<" ";
        }
    }
    cout<<cnt;
}
