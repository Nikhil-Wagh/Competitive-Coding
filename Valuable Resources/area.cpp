#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int i,x1=10000000000,x2=-10000000000,y1=10000000000,y2=-10000000000,x,y,n;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>x>>y;
        if(x1>x)
            x1=x;
        if(x2<x)
            x2=x;
         if(y1>y)
            y1=y;
        if(y2<y)
            y2=y;
    }
    if((x2-x1)>(y2-y1))
    {
        cout<<((x2-x1)*(x2-x1));
        return 0;
    }
    else
        cout<<((y2-y1)*(y2-y1));
    return 0;
}
