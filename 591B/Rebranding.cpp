#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,n,m,c,d;
    char a[26];
    string s,x,y;
    cin>>n>>m;
    cin>>s;
    for(i=0;i<26;i++)
        a[i]=i+'a';
    for(i=0;i<m;i++)
    {
        cin>>x>>y;
        for(j=0;j<26;j++)
        {
            if(a[j]==x[0])
               c=j;
            if(a[j]==y[0])
                d=j;
        }

        swap(a[c],a[d]);
    }
    for(i=0;i<n;i++)
    {
        cout<<a[s[i]-'a'];
    }
    cout<<endl;
    return 0;
}
