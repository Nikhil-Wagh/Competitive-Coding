#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,cnt=0,a[100009],b[100009]={0},sum=0,n;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
        sum+=a[i];
    }
    if(sum%3!=0)
        cout<<0,return 0;
    sum/=3;

}
