#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,a[100]={0},n,cnt=0;
    cin>>n;
    string str;
    for(i=0;i<n;i++)
    {
        cin>>str;
        for(j=0;j<n;j++)
        {
            if(str[j]=='0')
                a[j]++;
        }
    }
    for(i=0;i<n;i++)
    {
        if(a[i]!=(n+1)/2)
            cnt++;
    }
    cout<<cnt<<endl;
}
