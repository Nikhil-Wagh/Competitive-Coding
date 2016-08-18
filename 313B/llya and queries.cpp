#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,x,y,a[100009]={0},n;
    a[0]=1;
    string s;
    cin>>s;
    for(i=1;s[i]!='\0';i++)
    {
        if(s[i]==s[i-1])
            a[i]++;
        a[i]+=a[i-1];
    }
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>x>>y;
        x--;y--;
        cout<<a[y]-a[x]<<endl;
    }
}
