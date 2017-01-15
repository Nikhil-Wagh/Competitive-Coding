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

int main()
{
    /*freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);*/
	ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
    LL n,i,ans,j,k,x;
    vector <pair <LL,LL> > v;
    cin>>n;
    bool flag=false;
    for(i=0,j=1,k=1;i<n;i++)
    {
        cin>>x;
        if(x)
        {
            v.push_back(make_pair(j,k));
            j++;k++;
            j=max(j,k);
            flag=true;
        }
        else
        {
            k++;
        }
    }
    if(!flag)
    {
        cout<<"NO"<<endl;
        return 0;
    }
    if(j!=k)
    {
        j=v[v.size()-1].first;
        v.pop_back();
        v.push_back(make_pair(j,k-1));
    }

    cout<<"YES"<<endl;
    cout<<v.size()<<endl;
    for(i=0;i<v.size();i++)
    {
        cout<<v[i].first<<" "<<v[i].second<<endl;
    }
}

