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
char flip(char c)
{
    if(c=='G')
        return 'B';
    return 'G';
}
int main()
{
    /*freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);*/
	ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);

	LL i,n,k,a,b,x=0;
	char s[100009],c;
    cin>>n>>k>>a>>b;
    for(i=0;i<n;i++)
    {
        if(x==k)
        {
            c=flip(c);
            if(c=='G'&&a>0)
            {
                s[i]=c;
                a--;
            }
            else if(c=='B'&&b>0)
            {
                s[i]=c;
                b--;
            }
            else
            {
                cout<<"NO"<<endl;
                return 0;
            }
            x=1;
         //   cout<<x<<" ";
            continue;
        }
        else if(a>b&&a>0)
        {
            c='G';
            a--;
        }
        else if(b>0)
        {
            c='B';
            b--;
        }
        else
        {
            cout<<"NO"<<endl;
            return 0;
        }
        s[i]=c;
        if(s[i]==s[i-1]||i==0)
            x++;
        else
            x=1;
      //  cout<<x<<" ";
    }
    //cout<<endl;
    for(i=0;i<n;i++)
    cout<<s[i];
    cout<<endl;
}

/*
24 5 20 4
*/
