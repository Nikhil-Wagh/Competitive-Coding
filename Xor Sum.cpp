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
class node{
public:
    int data;
    class node *l,*r;
    node()
    {
        data=0;
        l=r=NULL;
    }
};
int query(node *root,LL x)
{
    LL ans=0;
    bool temp;
    for(LL i=40;i>=0;i--)
    {
        temp = (x>>i)&1;
        ans=ans<<1;
        //d = ((root -> data)>>i)&1;
        if(temp)
        {
            if(root->l!=NULL)
            {
                ans+=1;
                root=root->l;
            }
            else if(root->r!=NULL)
            {
                root=root->r;
            }
            else
                return ans;
        }
        else
        {
            if(root->r!=NULL)
            {
                ans+=1;
                root=root->r;
            }
            else if(root->l!=NULL)
            {
                root=root->l;
            }
            else
                return ans;

        }
    }
    return ans;
}
void add(node *root, LL x)
{
    bool temp;
    for(LL i =40;i>=0;i--)
    {
        temp = (x>>i)&1;
        if(temp)
        {
            if(root->r==NULL)
            {
                root->r=new node();
            }
            root=root->r;
        }
        else
        {
            if(root->l==NULL)
                root->l=new node();
            root=root->l;
        }
    }
}
int main()
{
    /*freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);*/
	ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
	LL i,j,k,flag,n,m,c=0,d=0,e[30]={0},x=0,t,temp=0,count,ans=0;
    cin>>t;
//    node **root = (node**)malloc(20*sizeof(node*));
    while(t--)
    {
        cin>>n;
        temp = 0;
        ans=0;
        node *root = new node();
        add(root,LL(0));
        for(i=0;i<n;i++)
        {
            cin>>x;
            temp^=x;
            ans=max(ans,LL(query(root,temp)));
            //cout<<ans<<endl;
            add(root,temp);
        }
        cout<<ans<<endl;
        free (root);
    }


}

