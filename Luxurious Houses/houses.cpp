#include<bits/stdc++.h>
using namespace std;
int maxi(int a)
{
    int max=(a>0)?a:0;
    return max;
}
int main()
{
    int i,n,max,a[100005][2];
    cin>>n;
    for(i=0;i<n;i++)
        cin>>a[i][0];
    i--;a[i][1]=max=a[i][1];
    for(;i>=0;i--)
    {
        a[i][1]=max;
        if(a[i][0]>max)
            max=a[i][0];
    }
    for(i=0;i<n;i++)
    {
            cout<<(maxi(a[i][1]-a[i][0]+1))<<" ";
    }
}
