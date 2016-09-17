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
map <LL,LL > mp;
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
LL n,sparse[100009][100];
void preprocess(LL a[],LL n)
{
    LL i,j,k;
    for(i=0;i<n;i++)
    {
        sparse[i][0]=i;
    }
    for(j=1;(1<<j) <=n;j++)
    {
        for(i=0;i+(1<<j)-1<n;i++)
        {
            if(a[sparse[i][j-1]]<a[sparse[i+(1<<(j-1))][j-1]])
                sparse[i][j]=sparse[i][j-1];
            else
                sparse[i][j]=sparse[i+(1<<(j-1))][j-1];
        }
    }
}
LL query(LL low,LL high,LL a[])
{
    LL l=high-low+1;
    LL k=log2(l);
    return min(a[sparse[low][k]],a[sparse[low+l-(1<<k)][k]]);
}
int main()
{
    LL i,j,ans=0,b,d=0,sum=0,l,r;
    cin>>n;
    LL a[100009]={0};
    for(i=0;i<n;i++)
        cin>>a[i];
    preprocess(a,n);
    LL q;
    cin>>q;
    for(i=0;i<q;i++)
    {
        cin>>l>>r;
        cout<<query(l,r,a)<<endl;
    }
    return 0;
}


