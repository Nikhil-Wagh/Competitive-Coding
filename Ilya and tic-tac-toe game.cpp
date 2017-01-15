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

int main()
{
    /*freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);*/
	ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);

    char a[10][100];
    LL i,j,n;

    for(i=1;i<=4;i++)
    {
        for(j=1;j<=4;j++)
            cin>>a[i][j];
    }

    for(i=1;i<5;i++)
    {
        for(j=1;j<5;j++)
        {
            if(a[i][j]=='.')
            {//cout<<i<<" "<<j<<endl;

                if(a[i][j-1]=='x'&&a[i][j+1]=='x')
                {//cout<<i<<" "<<j<<endl;
                    cout<<"YES"<<endl;
                    return 0;
                }
                if(a[i+1][j]=='x'&&a[i-1][j]=='x')
                {//cout<<i<<" "<<j<<endl;
                    cout<<"YES"<<endl;
                    return 0;
                }
                if(a[i-1][j-1]=='x'&&a[i+1][j+1]=='x')
                {//cout<<i<<" "<<j<<endl;
                    cout<<"YES"<<endl;
                    return 0;
                }
                if(a[i-1][j+1]=='x'&&a[i+1][j-1]=='x')
                {//cout<<i<<" "<<j<<endl;
                    cout<<"YES"<<endl;
                    return 0;
                }

//                for(LL x=1;x<5;x++)
//                {
//                    for(LL y=0;y<5;y++)
//                    {
//                        cout<<a[i][j];
//                    }
//                    cout<<endl;
//                }
//                cout<<endl;
                a[i][j]='.';
            }

        }
    }
    cout<<"NO"<<endl;
    return 0;
}

