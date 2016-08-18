#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,n,len;
    string a;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>a;
        len=a.length();
        if(len>10)
        {
            cout<<a[0]<<(len-2)<<a[len-1];
        }
        else
            cout<<a;
    }
}
