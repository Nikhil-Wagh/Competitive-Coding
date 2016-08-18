#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,a[100],x,i,j,posi=-1;
    bool found=true;
    cin>>n>>x;
    for(i=0;i<n;i++)
        cin>>a[i];
    while(found)
    {
        if(a[i]>0)
           {
               a[i]-=x;
               posi=i+1;
           }
        i++;
        if(i==n)
        {
            found=false;
            i=0;
            for(j=0;j<n;j++)
            {
                if(a[j]>0)
                {
                    found=true;
                    break;
                }
            }
        }
    }
    cout<<posi;
}
