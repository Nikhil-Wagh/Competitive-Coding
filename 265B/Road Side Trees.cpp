#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,sum=0,h[100005],n;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>h[i];
        if(i==0)
            sum+=h[i]+1;
        else if(h[i]>=h[i-1])
            sum+=(h[i]-h[i-1])+2;
        else
            sum+=h[i-1]-h[i]+2;
    }
                cout<<sum<<endl;
}
