#include<bits/stdc++.h>
using namespace std;

int main()
{
    int p=0,q,i,x=0;
    string a,b;
    cin>>a>>b;
    double pro;
    for(i=0;a[i]!='\0';i++)
    {
        if(a[i]=='+')
            p++;
        if(b[i]=='+')
            x++;
        if(b[i]=='?')
            q++;
    }
    p-=x;
    pro=
}
