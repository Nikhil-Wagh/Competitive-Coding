#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,flag=0,b,g,m;
    cin>>b>>g;
    if(b>g)
        m=g;
    else
        m=b,flag=1;
    for(i=0;i<m;i++)
    {
        if(i+flag%2==0)
            cout<<"B";
        else
            cout<<"G";
    }
    for(i=0;i<(b+g-(2*m));i++)
    {
        if(flag)
            cout<<"G";
        else
            cout<<"B";
    }
}
