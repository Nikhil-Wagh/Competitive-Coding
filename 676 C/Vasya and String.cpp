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

int main()
{
    /*freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);*/
	ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
    LL n, k, a[sz] = {0}, b[sz] = {0};
    string s;
    cin >> n >> k;
    cin >> s;
    for(LL i = 0 ; i < n ; i++){
        if(s[i] == 'a'){
            a[i+1]++;
        }
        else{
            b[i+1]++;
        }
        a[i+1] += a[i];
        b[i+1] += b[i];
    }
    LL ans = -1, cur = -1;
    LL i = 0, j = 0;
    while(i <= n && j <= n){
        if(a[j] - a[i] <= k){
            cur = max(cur, j-i);
        }
        else{
            i++;
        }
        j++;
    }
    i = 0; j = 0;
    ans = cur;
    cur = -1;
    while(i <= n && j <= n){
        if(b[j] - b[i] <= k){
            cur = max(cur, j-i);
        }
        else{
            i++;
        }
        j++;
    }
    cout << max(ans, cur) << endl;
	return 0;
}

