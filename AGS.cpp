
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
LL power(LL x, LL y,LL m)
{
    if( y == 0)
        return 1;
    else if (y%2 == 0)
        return power(x, y/2,m)*power(x, y/2,m)%m;
    else
        return x*power(x, y/2,m)*power(x, y/2,m)%m;
}

int main()
{
    /*freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);*/
	ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);

	LL t,a,d,r,n,m,ans,p;
	cin>>t;
	while(t--)
    {
        bool flag=false;
        cin>>a>>d>>r;
        cin>>n>>m;
        if(n%2==0)
            flag=true;
        n=(n-1)/2;
        p=power(r,n,m);
        cout<<p<<endl;

        if(flag)
        {
            ans++;
        }
        cout<<ans<<endl;
    }
}

