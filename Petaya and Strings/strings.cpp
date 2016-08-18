#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i;
    string a,b;
    cin>>a>>b;
    for(i=0;a[i]!='\0';i++)
    {
        if(a[i]>'Z')
            a[i]-=32;
        if(b[i]>'Z')
            b[i]-=32;
        if(a[i]-b[i]>0)
        {
            cout<<1;
            return 0;
        }
        else if(a[i]-b[i]<0)
        {
            cout<<-1;
            return 0;
        }
    }
    cout<<0;
}
