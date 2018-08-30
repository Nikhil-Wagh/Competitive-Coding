#include<bits/stdc++.h>
using namespace std;
typedef long long int LL;
typedef long double ld;
#define maxx 10000000000
#define sz 100009
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
LL primes[100009];
set<LL> prs;
void sieve(){
    for(LL i = 2 ; i < 100009 ; i++){
        if(!primes[i])
        for (LL j = i*2 ; j < 100009 ; j+=i){
            primes[j] = 1;
        }
    }
    for(LL i = 2 ; i < 100009 ; i++){
        if(!primes[i])
            prs.insert(i);
    }
}
int main()
{
    /*freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);*/
	ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
    sieve();
    LL p, y, ans = 0, rem = INT_MAX;
    cin >> p >> y;
    set<LL> :: iterator it;
    for(it = prs.begin() ; it != prs.end() && (*it < y) ; it++){
        if((y%(*it)) == 0){
            ans = 1;
            break;
        }
    }
    if(ans == 1){
        if(p < y - 1){
            cout << y - 1 << endl;
            return 0;
        }
    }
    else if(ans == 0){
        if(p < y){
            cout << y << endl;
            return 0;
        }
    }
    cout << -1 << endl;
	return 0;
}

