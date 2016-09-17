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
typedef list <LL>  Li;
LL ma=-1,mi=1000000000000000;
inline LL gcd(LL a, LL b) {return b?gcd(b, a%b):a;}
inline LL lcm(LL a, LL b, LL MOD) {return a/gcd(a,b) * b % MOD;}
Li li[100009];
bool flag=false;
LL visited[100009];
void dfs(LL x,LL parent)
{
    visited[x]=1;
    for(Li :: iterator it=li[x].begin();it!=li[x].end();it++)
    {
        if(visited[*it]==0)
        {
            dfs(*it,x);
        }
        else if(*it!=parent)
        {
            flag=true;
        }
    }
}
int main()
{
    LL i,j,n,m,ans=0,a[100009]={0},b,d=0,sum=0;
    cin>>n>>m;
    while(m--)
    {
        cin>>i>>j;
        li[i].pb(j);
        li[j].pb(i);
    }
    for(i=1;i<=n;i++)
    {
        if(visited[i]==0)
        {
            flag=false;
            dfs(i,0);
            if(flag==false)
                ans++;
        }
    }
    cout<<ans<<endl;
    return 0;
}


