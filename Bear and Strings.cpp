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
int main()
{
    ios::sync_with_stdio(0); cin.tie(0);cout.tie(NULL);

    LL i,j=0,n,ans=0,d=0,sum=0,ocu[100000]={0};
    string a,b;
    cin>>a;
    b="bear";
    n=a.length();
    for(i=0;i<n;i++)
    {
        if(a[i]==b[d])
            d++;
        else if(a[i]!='b')
            d=0;
        else
                d=1;
        if(d==4)
        {
            ocu[j]=i-3;
            j++;
        }
    }
    if(j==0)
    {
        cout<<0<<endl;
        return 0;
    }
    for(i=0,j=0;i<n;i++)
    {
        if(i<=ocu[j]&&ocu[j]<n)
        {
            ans+=(n-ocu[j]-3);
        }
        else if(ocu[j]<n)
        {
            ++j;
            if(ocu[j]==0)
                break;
            ans+=(n-ocu[j]-3);
        }
        //cout<<i<<" "<<ans<<endl;
    }
    cout<<ans<<endl;
    return 0;
}


