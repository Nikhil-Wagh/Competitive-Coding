#include<bits/stdc++.h>
using namespace std;
int main()
{
    int h[50]={0},v[50]={0},n,i,x,y;
    cin>>n;
    for(i=0;i<n*n;i++)
    {
        cin>>x>>y;
        x--;y--;
        if(!h[x]&&!v[y])
           {
               h[x]=1;v[y]=1;
               cout<<(i+1)<<" ";
           }
    }
    return 0;
}
