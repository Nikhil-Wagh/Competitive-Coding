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
LL tree[100009];
void constructTree(LL a[],LL low,LL high,LL pos,LL n)
{
    if(low==high)
    {
        tree[pos]=a[low];
        return ;
    }
    constructTree(a,low,(low+high)/2,2*pos+1,n);
    constructTree(a,(low+high)+1,high,2*pos+2,n);
    tree[pos]=min(tree[2*pos+1],tree[2*pos+2]);
}
int main()
{
    LL i,j,n,ans=0,b,d=0,sum=0;
    cin>>n;
    LL a[n];
    for(i=0;i<n;i++)
        cin>>a[i];
    constructTree(a,0,n-1,0,n);
    for(i=0;i<n;i++)
        cout<<a[i]<<" ";
    return 0;
}


