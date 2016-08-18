#include<bits/stdc++.h>
using namespace std;
double check(int a, int b,double *p)
{


}
int main()
{
    int a[2],b[2],t[2];
    int x,y,n,i;
    double dis=0,u,v;
    cin>>a[0]>>a[1]>>b[0]>>[1]>>t[0]>>t[1];
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>x>>y;
        u=sqrt(((a[0]-x)*(a[0]-x))+((a[1]-y)*(a[1]-y)));
        v=sqrt(((b[0]-x)*(b[0]-x))+((b[1]-y)*(b[1]-y)));
        check(u,v);
    }
}
