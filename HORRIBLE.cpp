

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

void update(LL node,LL l,LL h,LL s,LL e,LL v,LL tree[],LL lazy[])
{
    if(lazy[node]!=0)
    {
        tree[node]+=(h-l+1)*lazy[node];
        if(h!=l)
        {
            lazy[2*node+1]+=lazy[node];
            lazy[2*node+2]+=lazy[node];
        }
        lazy[node]=0;
    }//cout<<l<<" "<<h<<" "<<node<<endl;
    if(l>h||l>e||h<s)
        return;
    if(l>=s&&h<=e)
    {
        tree[node]+=(h-l+1)*v;
        if(h!=l)
        {
            lazy[2*node+1]+=v;
            lazy[2*node+2]+=v;
        }
        return;
    }
    update(2*node+1,l,(l+h)/2,s,e,v,tree,lazy);
    update(2*node+2,(l+h)/2+1,h,s,e,v,tree,lazy);
    tree[node]=tree[2*node+1]+tree[2*node+2];
}
LL query(LL node, LL l,LL h, LL s,LL e,LL tree[],LL lazy[])
{
    if(lazy[node]!=0)
    {
         tree[node]+=(h-l+1)*lazy[node];
        if(h!=l)
        {
            lazy[2*node+1]+=lazy[node];
            lazy[2*node+2]+=lazy[node];
        }
        lazy[node]=0;
    }
   //cout<<l<<" "<<h<<" "<<node<<endl;
    if(l>h||l>e||h<s)
        return 0;
    if(l>=s&&h<=e)
    return tree[node];
    return (query(2*node+1,l,(l+h)/2,s,e,tree,lazy)+query((2*node+2),(l+h)/2+1,h,s,e,tree,lazy));
}
int main()
{
    /*freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);*/
	ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);

	LL i,j,k,x,n,q,t,v;
    cin>>t;
    while(t--)
    {
        cin>>n>>q;
        LL tree[1000000]={0},lazy[1000000]={0};
        for(i=0;i<q;i++)
        {
            cin>>x;
            if(x==0)
            {
                cin>>j>>k>>v;
                update(0,0,n-1,j-1,k-1,v,tree,lazy);//cout<<"asdfasdf"<<endl;
            }
            else
            {
                cin>>j>>k;
                cout<<query(0,0,n-1,j-1,k-1,tree,lazy)<<endl;
            }
//             for(j=0;j<30;j++)
//                cout<<tree[j]<<" ";
//                cout<<endl;
//                for(j=0;j<30;j++)
//                cout<<lazy[j]<<" ";
//                cout<<endl;
        }
    }

}


/*

1
8 16
0 1 2 10
1 1 4
0 3 4 1
1 1 4
0 3 5 2
1 1 8
0 1 8 2
1 7 8
0 6 8 2
1 6 8
0 8 8 1
1 6 8
0 1 8 2
1 4 4
1 3 3
1 3 4


80
508
20
22
28
4
12
13
7
7
14

*/
