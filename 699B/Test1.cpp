#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i ,a[1000][1000]={0},j,v[1000]={0},h[1000]={0},sum=0;
    string s;
    cin>>n>>m;
    for(i=0;i<n;i++)
    {
        cin>>s;
        for(j=0;j<m;j++)
        {
            if(s[j]=='.')
                a[i][j]=0;
            else
                {
                    a[i][j]=1;
                    v[i]++;
                    h[j]++;
                    sum++;
                }
        }
    }
    if(sum)
    for(i=0;i<n;i++)
    {
        if()
    }
}
