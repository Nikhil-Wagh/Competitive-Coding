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
LL parent=-1;
list <LL> li[1000009];
LL ma=-1,mi=1000000000000000;
bool cmp(LL a,LL b){return a>b;}
inline LL gcd(LL a, LL b) {return b?gcd(b, a%b):a;}
inline LL lcm(LL a, LL b, LL MOD) {return a/gcd(a,b) * b % MOD;}
LL visited[1000009],a[1000009];
vector <LL> ind[1000009],val[1000009];
void dfs(LL i)
{
    visited[i]=1;
    ind[parent].push_back(i);
    val[parent].push_back(a[i]);
    for(list <LL> :: iterator it=li[i].begin();it!=li[i].end();it++)
    {
        if(visited[*it]==0)
        dfs(*it);
    }
}
int main()
{
    LL i,j,n,ans=0,b,d=0,sum=0,m,x,y;
    scanf("%lld%lld",&n,&m);
   // clock_t tStart = clock();
    /* Do your stuff here */
    for(i=1;i<=n;i++)
    {
        cin>>a[i];
    }
    for(i=0;i<m;i++)
    {
        scanf("%lld%lld",&x,&y);
        li[x].push_back(y);
        li[y].push_back(x);
    }
    for(i=1;i<=n;i++)
    {
        if(visited[i]==0)
        {
            parent=i;
            dfs(i);
            sort(ind[parent].begin(),ind[parent].end());
            sort(val[parent].begin(),val[parent].end(),greater<int>());
            LL j= ind[parent].size();
            LL k=0;
            while(k<j)
            {
                a[ind[parent][k]]=val[parent][k];
                k++;
            }
        }
    }
    for(i=1;i<=n;i++)
    {
        printf("%d ",a[i]);
    }
  // printf("Time taken: %.2fs\n", (double)(clock() - tStart)/CLOCKS_PER_SEC);
    return 0;
}

