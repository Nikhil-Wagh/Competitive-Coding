#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,cnt=0,n,m;
    char a[10][10];
    cin>>n>>m;
    for(i=0;i<n;i++)
        for(j=0;j<m;j++)
        cin>>a[i][j];
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            if(a[i][j]=='W')
            {
                if(i==0)
                {
                    if(j==0)
                    {
                        if(a[i][j+1]=='P'||a[i+1][j]=='P')
                            cnt++;
                    }
                    else if(j!=n-1)
                    {
                        if(a[i+1][j]=='P')
                            cnt++;
                    }
                    else
                    {

                    }
                }
            }
        }
    }
}
