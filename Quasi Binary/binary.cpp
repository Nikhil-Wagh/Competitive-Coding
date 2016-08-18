#include<bits/stdc++.h>
using namespace std;
int main()
{
    int p,n,a[10],si=0,m,N;
    cin>>N;
    while(N)
    {
        n=N;m=0;p=1;
        while(n)
        {
            if(n%10)
                m+=p;
            n/=10;p*=10;
        }
        N-=m;a[si]=m;
        si++;
    }
    cout<<si<<endl;
    for(int i=0;i<si;i++)
        cout<<a[i]<<" ";
}
