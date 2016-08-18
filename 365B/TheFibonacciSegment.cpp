#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i, m=0, a[100009],n,cu=0,flag=0;
    cin>>n;
    if(n==1)
    {
        cout<<1;
        return 0;
    }
    else if(n==2)
    {
        cout<<2;
        return 0;
    }
    for(i=0;i<n;i++)
    {
        cin>>a[i];
        if(i>1)
        {
            if(a[i]==(a[i-1]+a[i-2]))
                cu++,flag=1;
            else
                cu=0;
        }
        if(cu>m)
        {
            m=cu;
        }
    }

    cout<<m+2;

}
