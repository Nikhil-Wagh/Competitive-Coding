#include<bits/stdc++.h>
using namespace std;
vector<int>vi;
vector<int>av[100005];
list<int>li[100005];
queue<int>q[100005];
typedef uint64_t ut;
ut comb(ut x,ut y)
{
    ut num=1,den=1;
    ut temp=y,n;
    while(y>0)
    {
        num=num*x;
        x--;
        den=den*temp;
        temp--;
        y--;
    }
    return (num/den);
}
int main()
{
    ut i,n,m,t,sum=0,a,b,c,d;
    cin>>n>>m>>t;
    i=4;
    while(i<=n)
    {

        i++;
    }
    cout<<sum;
    return 0;
}

