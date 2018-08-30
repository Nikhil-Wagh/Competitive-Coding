#include<bits/stdc++.h>
using namespace std;
typedef int LL;
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
LL primes[5000009], ans[5000009];
void sieve()
{
    for(LL i = 2 ; i < 5000005 ; i++){
        if(primes[i] != 1)
        for(LL j = i*2 ; j < 5000005 ; j += i){
            primes[j] = 1;
        }
    }
    set<LL> p;
    for (LL i = 2 ; i < 5000005 ; i++){
        if(!primes[i])
            p.insert(i);
    }
    set <LL> :: iterator it;
    for(LL i = 2 ; i < 5000005 ; i++){
        if(!primes[i]){
            ans[i] = 1;
        }
        else{
            for(it = p.begin() ; it != p.end() ; it++){
                if(i%(*it) == 0){
                    ans[i] = ans[i/(*it)] + 1;
                    break;
                }
            }
        }
    }
    ans[1] = 1;
    for(LL i = 2 ; i < 5000005 ; i++){
        ans[i] += ans[i - 1];
    }
}
int main()
{
    /*freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);*/
	ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
	sieve();
    LL n;
    /*for(LL i = 0 ; i < 10 ; i++){
        cout << ans[i] << " ";
    }
    cout << endl;*/
    cin >> n;
    while(n--){
        LL a, b;
        cin >> a >> b;
        cout << ans[a] - ans[b] << endl;
    }
	return 0;
}

