#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,k,l,m,n,a[100][100],b[100][100];
    cin>>m>>n;
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            cin>>a[i][j];
            b[i][j]=1;
            if(a[i][j]==0)
            {
                for(k=0;k<n;k++)
                {
                    b[i][k]=0;
                }
                for(l=0;l<m;l++)
                {
                    b[l][j]=0;
                }
                break;
            }
        }
    }
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {

        }
    }
}
