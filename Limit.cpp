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
inline LL lcm(LL a, LL b) {return a/gcd(a,b) * b;}
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
    ios::sync_with_stdio(0); cin.tie(0);

    LL i,j,n,m,ans=0,d=0,sum=1,a[1000]={0},b[1000]={0};
    cin>>n>>m;
    if(n>m)
    {
       for(i=0;i<n+1;i++)
       cin>>a[i];
       for(i=0;i<m+1;i++)
        cin>>b[i];
       if(a[0]*b[0]>0)
        cout<<"Infinity"<<endl;
       else
        cout<<"-Infinity"<<endl;
        return 0;
    }
    else if(m>n)
    {
       cout<<"0/1"<<endl;
    }
    else
    {
        for(i=0;i<n+1;i++)
       cin>>a[i];
       for(i=0;i<m+1;i++)
        cin>>b[i];
        if(a[0]*b[0]<0)
            cout<<"-";
        sum=gcd(a[0],b[0]);
        cout<<(abs(a[0]/sum))<<"/"<<abs(b[0]/sum)<<endl;
    }
    return 0;
}


