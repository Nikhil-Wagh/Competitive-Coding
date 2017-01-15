
#include<bits/stdc++.h>
using namespace std;
typedef long long int LL;
typedef long double ld;
#define maxx 10000000000
typedef vector<LL> v1;
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

int main()
{
    /*freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);*/
	ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);

	LL t;
    cin>>t;
    while(t--)
    {
        LL i,k=0,n,j,l[2000]={0},r[2000]={0},a[2000],ma=0,pos;
        v1 v,tail;
        cin>>n;
        for(i=0;i<n;i++)
        {
            cin>>a[i];
            if(tail.size()==0)
                tail.pb(a[i]),l[i]=tail.size();
            else if(tail[tail.size()-1]<a[i])
                tail.pb(a[i]),l[i]=tail.size();
            else
            {
                pos=upper_bound(tail.begin(),tail.end(),a[i])-tail.begin();
                tail[pos]=a[i];
                l[i]=tail.size();
            }
        }
        tail.clear();
        for(i=n-1;i>=0;i--)
        {
            if(tail.size()==0)
                tail.pb(a[i]),r[i]=tail.size();
            else if(tail[tail.size()-1]<a[i])
                tail.pb(a[i]),r[i]=tail.size();
            else
            {
                pos=upper_bound(tail.begin(),tail.end(),a[i])-tail.begin();
                tail[pos]=a[i];
                r[i]=tail.size();
            }
        }
        for(i=0;i<n;i++)
        {
            ma=max(l[i]+r[i],ma);
        }
        cout<<ma-1<<endl;
    }


}

