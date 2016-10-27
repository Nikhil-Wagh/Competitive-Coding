
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
LL tree[1000000],a[1000000],b[1000000];
void constructTree(LL l,LL h,LL pos)
{
    if(l==h)
    {
        tree[pos]=a[l];
        return ;
    }
    constructTree(l , (l+h)/2 , 2*pos+1);
    constructTree( (l+h)/2+1 , h , 2*pos+2);
    tree[pos]=(tree[2*pos+1]+tree[2*pos+2]);
//    cout<<"pos "<<pos<<endl;
//    cout<<"l "<<l<<endl;
//    cout<<"h "<<h<<endl;
//    cout<<"tree[pos] "<<tree[pos]<<endl;
//    cout<<"tree[2*pos+1] "<<tree[2*pos+1]<<endl;
//    cout<<"tree[2*pos+2] "<<tree[2*pos+2]<<endl;
//    cout<<endl;
}
LL query(LL ql,LL qh,LL l,LL h,LL pos)
{
    if(ql>=l&&qh<=h)
        return tree[pos];
    if(ql>h||qh<l)
        return 0;
    return (query(ql,qh,l,(l+h)/2,2*pos+1)+query(ql,qh,(l+h)/2+1,h,2*pos+2));
}
int main()
{
    /*freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);*/
	ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);

	LL i,n,x=0,y,t,temp=0,count=0,ans[1000009]={0};
	cin>>n;
	for(i=1;i<=n;i++)
    {
        cin>>a[i];
    }
//    constructTree(0,n-1,0);
//    for(i=0;i<30;i++)
//    cout<<tree[i]<<" ";
//    map <LL,LL> mp;
//    map <LL,LL> :: iterator it = mp.begin();
//    for(i=0;i<n;i++)
//    {
//        cin>>x;
//        x--;
//
//    }

    for(i=1;i<=n;i++)
    {
        cin>>b[i];
    }
    ans[n]=0;
    LL l[100009],r[100009],s[100009]={0};
    memset(l,-1,n+2);
    memset(r,-1,n+2);
    for(i=n;i>0;i--)
    {
        t=b[i];
        x=y=t;
        temp=a[t];
        if(l[t-1]!=-1)
        {
            x=l[t-1];
            temp+=s[t-1];
        }
        if(r[t+1]!=-1)
        {
            y=r[t+1];
            temp+=s[t+1];
        }
        l[y]=x;
        r[x]=y;
        s[x]=temp;
        s[y]=temp;
        count=max(count,temp);
        ans[i-1]=count;
    }
    for(i=1;i<=n;i++)
        cout<<ans[i]<<endl;
}
