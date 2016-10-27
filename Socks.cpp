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
LL power(LL x, unsigned int y)
{
    if( y == 0)
        return 1;
    else if (y%2 == 0)
        return power(x, y/2)*power(x, y/2);
    else
        return x*power(x, y/2)*power(x, y/2);
}
LL visited[2000009],b[2000009];
vector <LL> li[2000009];
map <LL,LL> ash[2000009];
LL y=0,k=0;
void dsu(LL x)
{
    visited[x]=1;
    ash[k][b[x]]++;
    ma=max(ma,ash[k][b[x]]);
  // cout<<y<<endl;
    for(vector <LL> :: iterator it=li[x].begin();it!=li[x].end();it++)
    {
         //cout<<*it<<" "<<ma<<" "<<hash[b[*it]]<<endl;
        if(visited[*it]==0)
            y++,dsu(*it);
    }
}
int main()
{
    /*freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);*/
	ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
	LL i,j,a,n,m,c=0,d=0,ans=0;
    cin>>n>>m>>c;
    for(i=1;i<=n;i++)
        cin>>b[i];
    for(i=1;i<=m;i++)
    {
        cin>>j>>k;
        li[j].pb(k);
        li[k].pb(j);
    }
    for(i=1;i<=n;i++)
    {
        if(visited[i]==0)
            {
                y=1;ma=-1;
                k++;
                dsu(i);
                //cout<<"y "<<y<<endl;
                //cout<<"MA "<<ma<<endl;
                ans+=y-ma;
            }
    }
    cout<<ans;

}

/*
7 4 5
1 2 1 3 2 4 5
1 2
2 3
2 4
1 4

11 8  4
1 2 1 3 3 4 2 1 1 1 1
1 2
2 3
3 4
6 5
5 7
7 9
8 10
10 11


















*/
