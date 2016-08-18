
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[109][2]={0},n,i=0,cnt=0;
    cin>>n;
    for(i=0;i<n;i++)
        cin>>a[i][0];
    if(a[0][0]!=3)
        {
            a[0][1]=a[0][0];
            if(a[0][1]==0)
                cnt++;
        }
       // cout<<a[0][0]<<" "<<a[0][1]<<endl;
    for(i=1;i<n;i++)
    {//cout<<a[0][0]<<" "<<a[0][1]<<endl;
        if(a[i][0]==0)
        {
            a[i][1]=0;
            cnt++;
        }
        else if(a[i][0]==1)
        {
            if(a[i-1][1]==1)
            {
                a[i][1]=0;
                cnt++;
            }
            else
                a[i][1]=1;
        }
        else if(a[i][0]==2)
        {
            if(a[i-1][1]==2)
            {
                a[i][1]=0;
                cnt++;
            }
            else
                a[i][1]=2;
        }
        else
        {
            if(a[i-1][1]!=0)
            {
                if(a[i-1][1]==1)
                    a[i][1]=2;
                else
                    a[i][1]=1;
            }
        }
    }
    cout<<cnt;
}
