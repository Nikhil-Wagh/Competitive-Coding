#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,k,i=1;
    cin>>n>>k;
    while(1)
    {
        if(k*i>n)
            break;
            i++;
    }
    cout<<k*i;
}
