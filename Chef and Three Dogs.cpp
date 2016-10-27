
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
int found(string a)
{
    for(LL i=a.length();i>=0;i--)
        if(a[i]=='0')
        return 1;
    return 0;
}
LL search(string a)
{
    LL cnt=0;
    for(int i=a.length();i>=0;i--)
    {
        if(a[i]=='1')
            cnt++;
    }
    return cnt;
}
int main()
{
    /*freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);*/
	ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
	LL t;
	cin>>t;
	while(t--)
    {
        //bool found = false;
        string a,b,c;
        LL n;
        LL cnt=0;
        cin>>a>>b>>c>>n;
        if(!found(c))
        {
            if(!found(b))
            {
                if(!found(a))
                {
                    cout<<cnt<<endl;
                }
                else
                {
                    cout<<search(a)+1<<endl;
                }
            }
            else
            {
                cout<<search(b)*n+search(a)+1<<endl;
            }
        }
        else
        {
            cout<<search(c)+search(b)*n+search(a)+1<<endl;
        }
    }
}
