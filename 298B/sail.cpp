#include<bits/stdc++.h>
using namespace std;
vector<int>vi;
vector<int>av[100005];
list<int>li[100005];
queue<int>q[100005];
int main()
{
    int i,n,x,y,s,b,dx=0,dy=0;
    cin>>n>>x>>y>>s>>b;
    string a;
    cin>>a;
    dx=s-x;
    dy=b-y;
    for(i=0;i<n;i++)
    {
        if(a[i]=='N')
        {
            if(dy>0)
            {
                dy--;
            }
        }
        if(a[i]=='S'&&dy<0)
            dy++;
        if(a[i]=='W'&&dx<0)
            dx++;
        if(a[i]=='E'&&dx>0)
            dx--;
        if(dx==0&&dy==0)
        {
            cout<<i+1;
           return 0;
        }
    }
    cout<<-1;
    return 0;
}
