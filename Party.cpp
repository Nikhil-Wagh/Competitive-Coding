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
inline LL gcd(LL a, LL b) {return b?gcd(b, a%b):a;}
inline LL lcm(LL a, LL b, LL MOD) {return a/gcd(a,b) * b % MOD;}
list <LL> li[2005];
void dfs(LL x,LL c,LL *visited)
{
    c++;
    visited[x]=c;
    if(ma<c)
        ma=c;
    for(list <LL> :: iterator it=li[x].begin();it!=li[x].end();it++)
    {
        if(visited[*it]==0)
            dfs(*it,c,&visited[0]);
    }
}
int main()
{
    LL i,j,n,ans=0,a[100009]={0},b,d=0,sum=0;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>j;
        j--;
        if(j>=0)
        {
            li[i].pb(j);
        }
    }
    for(i=0;i<n;i++)
    {
        LL visited[2009]={0};
            dfs(i,0,&visited[0]);
    }
    cout<<ma<<endl;
    return 0;
}


