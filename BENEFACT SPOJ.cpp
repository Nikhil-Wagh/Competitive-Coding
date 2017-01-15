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
LL ma=0,mi=1000000000000000;
inline LL gcd(LL a, LL b) {return b?gcd(b, a%b):a;}
inline LL lcm(LL a, LL b, LL MOD) {return a/gcd(a,b) * b % MOD;}
LL power(LL x, unsigned int y)
{
    if( y == 0)
        return 1;
    else if (y%2 == 0)
        return power(x, y/2)*power(x, y/2);
    else
        return x*power(x, y/2)*power(x, y/2);
}
LL n;
LL bfs(LL x,LL dist[],list < pair<LL,LL > > li[],LL visited[])
{
    visited[x]=1;
    if(dist[x]>dist[ma])
        ma=x;
    list < pair<LL,LL > >:: iterator it;
    for(it=li[x].begin();it!=li[x].end();it++)
    {//cout<<"*it "<<(*it).first<<" vis "<<visited[(*it).first]<<endl;
        if(visited[(*it).first]==0)
        {//cout<<"x "<<x<<"*it "<<(*it).first<<endl;
            visited[(*it).first]=1;
            dist[(*it).first]=dist[x]+(*it).second;
            bfs((*it).first,dist,li,visited);
        }
    }
    return dist[x];
}
int main()
{
    /*freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);*/
	ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);

	LL t;
	cin>>t;
	while(t--)
    {
        LL i,x,y,v,ans=0;
        ma=0;
        cin>>n;
        LL visited[500009]={0};
        list < pair<LL,LL > > li[500009];
        LL dist[500009]={0};
        for(i=0;i<n-1;i++)
        {
            cin>>x>>y>>v;
            li[x].pb(make_pair(y,v));
            li[y].pb(make_pair(x,v));
        }
        bfs(1,dist,li,visited);
        for(i=1;i<=n;i++)
        {
            dist[i]=visited[i]=0;
        }
        //cout<<"ma "<<ma<<endl;
        bfs(ma,dist,li,visited);
        for(i=1;i<=n;i++)
        {
            ans=max(ans,dist[i]);
        }
        cout<<ans<<endl;
    }
}

