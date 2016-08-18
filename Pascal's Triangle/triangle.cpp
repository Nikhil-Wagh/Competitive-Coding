#include<bits/stdc++.h>//It's a Prototype the Original is always Hidden
using namespace std;
int main()
{
    vector <long long int> v[35];
    for(int i=1;i<=30;i++)
    {
        for(int j=0;j<=i;j++)
        {
            if(j==0||j==i)
                v[i].push_back(1);
            else
            {
                v[i].push_back(v[i-1][j-1]+v[i-1][j]);
            }
        }
    }
    uint64_t i,j,n,m,t,sum=0;
    cin>>n>>m>>t;
    for(i=4;i<=n;i++)
    {
        if(t-i<=m&&t-i>0)
        sum+=v[n][i]*v[m][t-i];//cout<<v[n][i]*v[m][t-i]<<endl;
    }
    cout<<sum<<endl;
}
