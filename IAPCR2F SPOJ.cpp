
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
LL findSet(LL x,LL root[])
{
    if(root[x]==x)
        return x;
    root[x]=findSet(root[x],root);
}
int main()
{
    /*freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);*/
	ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);

	LL i,t,j=0;
    cin>>t;
    for(j=0;j<t;j++)
    {
        LL root[10000]={0},a[10000],ans[10000],n,m,x,y,px,py,sum=0,total,k=0;
        cin>>n>>m;
        total=n;
        for(i=0;i<n;i++)
        {
            cin>>a[i];
            root[i]=i;
        }
        for(i=0;i<m;i++)
        {
            cin>>x>>y;
            px=findSet(x-1,root);
            py=findSet(y-1,root);
            if(px!=py)
            {
                total--;
                root[px]=py;
                a[py]+=a[px];
            }
        }

        for(i=0;i<n;i++)
        {
            if(root[i]==i)
                ans[k++]=a[i];
        }
        sort(ans,ans+k);
        cout<<"Case "<<j+1<<": "<<total<<endl;
        for(i=0;i<k;i++)
            cout<<ans[i]<<" ";
        cout<<endl;
    }


}

