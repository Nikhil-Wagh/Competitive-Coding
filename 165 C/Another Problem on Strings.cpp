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
LL l[1000009] = {0}, r[1000009] = {0};
int main()
{
    /*freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);*/
	ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
    LL k, lo, hi, ans = 0;
    string s;
    cin >> k >> s;
    LL n = s.length();
    for(LL i = 1 ; i <= n ; i++){
        if(s[i - 1] == '0'){
            l[i] += l[i - 1] + 1;
        }
        if(s[n - i] == '0'){
            r[n - i + 1] += r[n - i + 2] + 1;
        }
    }
    if(!k){
        for(LL i = 0 ; i < n ; i++){
            ans += l[i+1];
        }
        cout << ans << endl;
        return 0;
    }
    lo = hi = 1;
//    for(LL i = 0 ; i <= n+1 ; i++)
//        cout << l[i] << " ";
//    cout << endl;
//    for(LL i = 0 ; i <= n+1 ; i++)
//        cout << r[i] << " ";
//    cout << endl;
    while(hi <= n){
        if(!r[hi]){
            k--;//cout << hi << endl;
            if(!k)
                break;
        }
        hi++;
    }
    while(l[lo]){
        lo++;
    }
   // cout << lo << " " << hi << endl;
    while(hi <= n){
        ans += (l[lo - 1] + 1)*(r[hi + 1] + 1);
        //cout << ans << endl;
        lo++;hi++;
        while(l[lo] && lo <= n){
            lo++;
        }
        while(r[hi] && hi <= n)
            hi++;
        //cout << lo << " " << hi << " " << endl;
    }
    cout << ans << endl;


//    for(lo = 1, hi = 1 ; hi <= n ; ){
//        if(k == 1){
//            if(!l[lo] && !r[hi]){
//                ans += (l[lo - 1] + 1)*(r[hi + 1] + 1);
//                lo++; hi++;
//                cout << lo << " " << hi << endl;
//            }
//            else if(l[lo])
//                lo++;
//            else if(r[hi])
//                hi++;
//        }
//        else{
//            if(r[hi]){
//                k--;
//            }
//            hi++;
//        }
//    }
	return 0;
}

