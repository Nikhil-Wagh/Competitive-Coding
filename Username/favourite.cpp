#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,temp[1000],cnt=0,min,max;
    cin>>n;
    for(i=0;i<n;i++)
        cin>>temp[i];
    min=max=temp[0];
    for(i=1;i<n;i++)
    {
        if(temp[i]>max)
        {
            max=temp[i];
            cnt++;
        }
        else if(temp[i]<min)
        {
            min=temp[i];
            cnt++;
        }
    }
    cout<<cnt;
}
