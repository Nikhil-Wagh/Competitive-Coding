#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,n;
    double x,y,a,b,v;
    double s=10000000000,c;
    cin>>x>>y;
    cin>>n;
    //cout<<x<<" "<<y<<" "<<n<<endl;
    for(i=0;i<n;i++)
    {
        cin>>a>>b>>v;
        c=sqrt((x-a)*(x-a)+(y-b)*(y-b));
        c/=v;
        if(c<s)
            s=c;
           // cout<<c<<endl;
    }
    cout<<setprecision(12)<<s;
        return 0;
}
