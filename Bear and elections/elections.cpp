#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,n,max=0,a[100],cnt=0;
    bool found=false;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    while(!found)
    {
        i=0;
        while(i<n)
        {
            if(a[i]>=a[max])
                max=i;
                i++;
        }
        if(max==0)
        {
            break;
        }
        a[max]--;
        a[0]++;
        cnt++;
    }
    cout<<cnt;
}
