#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,n,a[100005],min,max;
    cin>>n;
    for(i=0;i<n;i++)
        cin>>a[i];
    for(i=0;i<n;i++)
    {
        int dist[100005]={0};
        for(int k=0,j=0;j<n;j++)
        {
            if(i!=j)
            {
                dist[k]=abs(a[i]-a[j]);
                k++;
            }
        }
        min=max=dist[0];
        for(int k=1;k<n-1;k++)
        {
            if(min>dist[k])
                min=dist[k];
            if(max<dist[k])
                max=dist[k];
        }
         cout<<min<<" "<<max<<endl;
    }
    return 0;
}
