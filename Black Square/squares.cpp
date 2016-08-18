#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,a[4],cnt=0;
    string s;
    cin>>a[0]>>a[1]>>a[2]>>a[3];
    cin>>s;
    for(i=0;s[i]!='\0';i++)
    {
        cnt+=(a[s[i]-'0'-1]);
    }
    cout<<cnt;
}
