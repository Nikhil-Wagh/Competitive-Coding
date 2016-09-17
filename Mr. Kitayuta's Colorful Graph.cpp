#include<bits/stdc++.h>
using namespace std;
typedef long long int LL;
typedef long double ld;
#define maxx 10000000000
typedef vector<int> v1;
typedef vector<v1> v2;
typedef pair<int,int> ii;
#define pb push_back
#define all(c) (c).begin(),(c).end()
#define tr(c,i) for(typeof((c).begin() i = (c).begin(); i != (c).end(); i++)
#define present(c,x) ((c).find(x) != (c).end())
#define cpresent(c,x) (find(all(c),x) != (c).end())
#define total(c) allocator(all(c),ll(0))
typedef pair<int,int> ii;
typedef pair<ii,int> pii;
LL ma=-1,mi=1000000000000000;
v1 a[110][110];
inline LL gcd(LL a, LL b) {return b?gcd(b, a%b):a;}
inline LL lcm(LL a, LL b, LL MOD) {return a/gcd(a,b) * b % MOD;}
LL cnt,w,n;
void dfs(int x,int y,LL visited[310])
{
    visited[x]=1;
    if(x==y)
       {
            cnt++;
            return ;
       }cout<<cnt<<" "<<x<<endl;
    for(LL i=0;i<n;i++)
    {
        if(visited[i]==0&&a[x][i].size()>0)
        {
            for(LL j=0;j<a[x][i].size();j++)
            {
                if(a[x][i][j]==w)
                    dfs(i,y,visited);
            }
        }
    }
}
int main()
{
    LL i,j,d=0,sum=0,m,x,y,q;
    clock_t tStart = clock();
    /* Do your stuff here */
    cin>>n>>m;
    for(i=0;i<m;i++)
    {
        cin>>x>>y>>w;
        x--;y--;
        a[x][y].push_back(w);
        a[y][x].push_back(w);
    }
    cin>>q;
    for(i=0;i<q;i++)
    {
        cin>>x>>y;
        x--;y--;
        cnt=0;
        for(j=0;j<n;j++)
        {
            if(a[x][j].size()>0)
            {
                for(LL k=0;k<a[x][j].size();k++)
                {
                    LL visited[310]={0};
                    w=a[x][j][k];
                    dfs(x,y,visited);
                    for(LL t=0;t<n;t++)
                        cout<<visited[t]<<" ";
                    cout<<endl;
                }
            }
        }
        cout<<cnt<<endl;
    }

  // printf("Time taken: %.2fs\n", (double)(clock() - tStart)/CLOCKS_PER_SEC);
    return 0;
}


