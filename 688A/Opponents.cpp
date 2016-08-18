#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,cur=0,max=-1,n,d;
    string a;
    cin>>n>>d;
    for(i=0;i<d;i++)
    {
        cin>>a;
        for(j=0;j<n;j++)
        {
            if(a[j]=='0')
                break;
        }
        if(j==n)
        {
            cur=0;
        }
        else
            cur++;
        if(cur>max)
            max=cur;
    }
    cout<<max;
}
