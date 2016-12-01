
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
LL tree[1000000],lazy[10000000],a[1000000];
void constructTree(LL node,LL l,LL h)
{
    if(l>h)
        return;
    if(l==h)
    {
        tree[node]=a[l];
        return;
    }
    constructTree(2*node+1,l,(l+h)/2);
    constructTree(2*node+2,(l+h)/2+1,h);
    tree[node]=min(tree[node*2+1],tree[2*node+2]);
}
void update(LL node,LL l,LL h,LL s,LL e,LL v)
{

    if(lazy[node]!=0)
    {
        tree[node]&=lazy[node];
        if(h!=l)
        {
            if(lazy[2*node+1]==0)
                lazy[2*node+1]=lazy[node];
            else
                lazy[2*node+1]&=lazy[node];
            if(lazy[2*node+2]==0)
                lazy[2*node+2]=lazy[node];
            else
                lazy[2*node+2]&=lazy[node];
        }
        lazy[node]=0;
    }
    if(l>h||l>e||h<s)
        return;
    if(l>=s&&h<=e)
    {
        tree[node]&=v;
        if(h!=l)
        {
            if(lazy[2*node+1]==0)
                lazy[2*node+1]=v;
            else
                lazy[2*node+1]&=v;
            if(lazy[2*node+2]==0)
                lazy[2*node+2]=v;
            else
                lazy[2*node+2]&=v;
        }
        return;
    }
    update(2*node+1,l,(l+h)/2,s,e,v);
    update(2*node+2,(l+h)/2+1,h,s,e,v);
    tree[node]=min(tree[2*node+1],tree[2*node+2]);
}
LL query(LL node,LL l,LL h,LL s,LL e)
{
    if(l>h||l>e||h<s)
        return INT_MAX;
    if(lazy[node]!=0)
    {
        tree[node]&=lazy[node];
        if(h!=l)
        {
            if(lazy[2*node+1]==0)
                lazy[2*node+1]=lazy[node];
            else
                lazy[2*node+1]&=lazy[node];
            if(lazy[2*node+2]==0)
                lazy[2*node+2]=lazy[node];
            else
                lazy[2*node+2]&=lazy[node];
        }
        lazy[node]=0;
    }
    if(l>=s&&h<=e)
        return tree[node];
    return min(query(2*node+1,l,(l+h)/2,s,e),query(2*node+2,(l+h)/2+1,h,s,e));
}
int main()
{
    /*freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);*/
	ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);

	LL i,j,k,flag,n,m,c=0,d=0,e[30]={0},x=0,t,temp=0,count;
    cin>>n>>m;
    for(i=0;i<n;i++)
        cin>>a[i];
    constructTree(0,0,n-1);
    for(i=0;i<m;i++)
    {
        cin>>flag;
        if(flag==0)
        {
            cin>>j>>k;
            cout<<query(0,0,n-1,j-1,k-1)<<endl;
        }
        else
        {
            cin>>j>>k>>c;
            update(0,0,n-1,j-1,k-1,c);
        }
    }


}
