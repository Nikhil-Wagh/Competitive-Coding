
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
map <LL,LL> root;
LL findSet(LL x)
{
    if(x!=root[x])
        root[x]=findSet(root[x]);
    return root[x];
}
int main()
{
    /*freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);*/
	ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);

	LL i,n,m,x,y,px,py,ans=0;
    cin>>n>>m;
    ans=n;
    for(i=0;i<m;i++)
    {
        cin>>x>>y;
        px=findSet(x);
        py=findSet(y);
        if(root[x]==0)
            root[x]=x;
        if(root[y]==0)
            root[y]=y;
        if(px!=py)
        {
            root[px]=py;
            ans--;
        }
    }
    cout<<ans<<endl;

}

