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
list <LL> li[310];
vector <LL> ind[310];
vector <LL> val[310];
LL visited[310];
LL a[310];
LL parent;
void dfs(LL i)
{
    visited[i]=1;
    ind[parent].push_back(i);
    val[parent].push_back(a[i]);
    list <LL> :: iterator it;
    for(it=li[i].begin();it!=li[i].end();it++)
    {
        if(visited[*it]==0)
        {
            dfs(*it);
        }
    }
}
int main()
{
    LL i,j,n,ans=0,b,d=0,sum=0;
    cin>>n;
    string s;
    for(i=0;i<n;i++)
        cin>>a[i];
    for(i=0;i<n;i++)
    {
        cin>>s;
        for(j=0;j<n;j++)
        {
            if(s[j]=='1')
            {
                li[i].push_back(j);
            }
        }
    }
    for(i=0;i<n;i++)
    {
        if(visited[i]==0)
        {
            parent=i;
            dfs(i);
            sort(ind[parent].begin(),ind[parent].end());
            sort(val[parent].begin(),val[parent].end());
            unsigned si=ind[parent].size();
            for(j=0;j<si;j++)
            {
                a[ind[parent][j]]=val[parent][j];
            }
        }
    }
    for(i=0;i<n;i++)
        cout<<a[i]<<" ";

    return 0;
}


