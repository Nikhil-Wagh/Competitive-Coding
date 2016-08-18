#include<bits/stdc++.h>
using namespace std;
int main()
{
   int i,n,m,k,cnt=0,x[1000],a,temp,total=0;
    cin>>n>>m>>k;
    for(i=0;i<m;i++)
        cin>>x[i];
    cin>>a;
    for(i=0;i<m;i++)
    {
        cnt=0;
        temp=a^x[i];
        while(temp)
        {
            if(temp%2==1)
                cnt++;
            temp/=2;
        }
        if(cnt<=k)
            total++;
    }
    cout<<total<<endl;
}
