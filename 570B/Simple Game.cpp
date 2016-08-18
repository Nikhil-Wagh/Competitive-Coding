#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    if(n!=1)
    {
        if(n%2==1&&(n+1)/2==m)
        cout<<m-1;
    else if(m>(n+1)/2)
        cout<<m-1;
    else cout<<m+1;
    }
    else
        cout<<1;
}

