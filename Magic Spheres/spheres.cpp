#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c,x,y,z,srt=0,rem=0;
    cin>>a>>b>>c>>x>>y>>z;
    if(a>=x)
    {
        rem+=((a-x)/2);
    }
    else
        srt=x-a;
    if(b>=y)
        rem+=((b-y)/2);
    else
        srt+=y-b;
    if(c>=z)
        rem+=((c-z)/2);
    else
        srt+=z-c;
    if(rem>=srt)
        cout<<"Yes";
    else
        cout<<"No";
    return 0;
}
