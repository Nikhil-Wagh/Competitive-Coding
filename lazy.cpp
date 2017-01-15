
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
LL tree[100000],lazy[100000],a[1000000];
void update(LL node,LL l,LL h,LL s,LL e,LL v)
{
    if(lazy[node]!=0)
    {
        tree[node]+=(h-l+1)*lazy[node];
        if(h!=l)
        {
            lazy[2*node]+=lazy[node];
            lazy[2*node +1 ]= lazy[node];
        }
        lazy[node]=0;
    }
    if(l>h||h<s||l>e)
        return ;
    if(l>=s&&h<=e)
    {cout<<l<<h<<endl;
        tree[node]+=(h-l+1)*v;
        if(h!=l)
        {
            lazy[2*node]+=v;
            lazy[2*node+1]+=v;
        }
        return ;
    }
    update(2*node,l,(h+l)/2,s,e,v);
    update(2*node+1,(h+l)/2+1,h,s,e,v);
    tree[node]=(tree[2*node]+tree[2*node+1]);
}
LL query(LL node,LL l,LL h, LL s, LL e)
{
    if(l>h||h<s||l>e)
        return 0;
    if(lazy[node]!=0)
    {
        tree[node]+=(h-l+1)*lazy[node];
        if(h!=l)
        {
            lazy[2*node]+=lazy[node];
            lazy[2*node+1]+=lazy[node];
        }
        lazy[node]=0;
    }
    if(l>=s&&h<=e)
    {
        return tree[node];
    }
    return (query(2*node,l,(h+l)/2,s,e)+query(2*node+1,(h+l)/2+1,h,s,e));
}
int main()
{
    /*freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);*/
	ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);

	LL i,j,k,flag,n,m,c=0,v=0,x=0,d,temp=0,count;
    cin>>n;
    cin>>d;
    for(i=0;i<d;i++)
    {
        cin>>c;
        if(c==0)//update increament by value c
           {
               cin>>j>>k>>v;
               update(0,0,n-1,j-1,k-1,v);
               for(j=0;j<10;j++)
                cout<<tree[j]<<" ";
                cout<<endl;
               for(j=0;j<10;j++)
                cout<<lazy[j]<<" ";
                cout<<endl;
           }
        else//query
            {
                cin>>j>>k;
                cout<<query(0,0,n-1,j-1,k-1)<<endl;
            }
    }
}

