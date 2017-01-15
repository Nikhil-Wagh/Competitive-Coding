#include<bits/stdc++.h>
using namespace std;
typedef long long int LL;
typedef long double ld;
#define maxx 10000000000
typedef vector<LL> v1;
typedef vector<v1> v2;
typedef pair<LL,LL> ii;
#define pb push_back
#define all(c) (c).begin(),(c).end()
#define tr(c,i) for(typeof((c).begin() i = (c).begin(); i != (c).end(); i++)
#define present(c,x) ((c).find(x) != (c).end())
#define cpresent(c,x) (find(all(c),x) != (c).end())
#define total(c) allocator(all(c),ll(0))
//typedef pair<int,int> ii;
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
LL t;
class node{
public:
    LL l,r;
    class node *ln,*rn;
    node()
    {
        l=r=0;
        ln=rn=NULL;
    }
};
void add(node *root,LL x)
{
    bool a;
    for(LL i=20;i>=0;i--)
    {
        a=(x>>i)&1;
        if(a)
        {
            root->r++;
            if(root->rn==NULL)
                root->rn=new node();
            root=root->rn;
        }
        else
        {
            root->l++;
            if(root->ln==NULL)
                root->ln=new node();
            root=root->ln;
        }
    }
}
LL query(node *root,LL x)
{
    bool a,b;
    LL ans=0;
    if(root==NULL)
        return 0;
    for(LL i=20;i>=0;i--)
    {
        a=(x>>i)&1;
        b=(t>>i)&1;
        if(b)
        {
            if(a)
            {
                ans+=root->r;
                if(root->ln==NULL)
                    return ans;
                root=root->ln;
            }
            else
            {
                ans+=root->l;
                if(root->rn==NULL)
                {
                    return ans;
                }
                root=root->rn;
            }
        }
        else
        {
            if(a)
            {
                if(root->rn==NULL)
                    return ans;
                root=root->rn;
            }
            else
            {
                if(root->ln==NULL)
                    return ans;
                root=root->ln;
            }
        }
    }
    return ans;
}
int main()
{
    /*freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);*/
	ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);

	LL i,j,k,flag,n,m,c=0,d=0,e[30]={0},x=0,temp=0,count;
    cin>>k;
    while(k--)
    {
        cin>>n>>t;
        temp=0;
        LL ans=0;
        node *root = new node();
        add(root,0);
        for(i=0;i<n;i++)
        {
            cin>>x;
            temp^=x;
            ans+=query(root,temp);
            add(root,temp);
        }
        cout<<ans<<endl;
        free(root);
    }
}

