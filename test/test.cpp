#include<bits/stdc++.h>//It's a Prototype the Original is always HIDDEN
using namespace std;
vector<int>vi;
vector<int>av[100005];
list<int>li[100005];
queue<int>q[100005];
int main()
{
    int i,n,a,b,ans=0,x;
    /*for(i=65;i>0;i--)
        cout<<i<<" "<<65%i<<endl;*/
    cin>>x>>b;
    a=x-b;
    if(x<b)
    {
        cout<<0<<endl;
        return 0;
    }
    if(b==x)
        {
            cout<<"infinity"<<endl;
            return 0;
        }
    for(i=1;i<=sqrt(a);i++)
    {
        if((a%i)==0)
        {
            if((a/i)>b)
                ans++;
            if(i>b&&(a/i)!=i)
                ans++;
        }
    }
    cout<<ans<<endl;
    return 0;
}
