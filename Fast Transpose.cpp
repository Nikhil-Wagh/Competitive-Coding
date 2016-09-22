#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[10][10],b[10][10],d[10][10];
    int r,c,i,j,k=1,n,m;
    cin>>r>>c;
    for(i=0;i<r;i++)
        for(j=0;j<c;j++)
    {
        cin>>a[i][j];
        if(a[i][j]!=0)
        {
            b[k][0]=i;
            b[k][1]=j;
            b[k][2]=a[i][j];
            k++;
        }
    }
    b[0][0]=r;
    b[0][1]=c;
    b[0][2]=k-1;

    int cnt[10]={0};
    int pos[10]={1};

    for(i=0;i<k-1;i++)
    {
        cnt[b[i][1]]++;
    }
    for(i=1;i<c;i++)
    {
        pos[i]=pos[i-1]+cnt[i-1];
    }
    for(i=1;i<k;i++)
    {
        m=b[i][1];
        n=pos[m];
        pos[m]++;
        d[n][1]=b[i][0];
        d[n][0]=b[i][1];
        d[n][2]=b[i][2];
    }
    d[0][0]=c;
    d[0][1]=r;
    d[0][2]=k-1;

    for(i=0;i<k;i++)
    {
        cout<<d[i][0]<<" "<<d[i][1]<<" "<<d[i][2]<<endl;
    }
}
