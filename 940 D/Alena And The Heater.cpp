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
v1 a;
string s;
LL getMin(LL i){
    LL mi = 1000000000;
    for(LL j = 0 ; j < 5 ; j++){
        mi = min(a[i - j], mi);
    }
    return mi;
}
LL getMax(LL i){
    LL ma = -1000000000;
    for(LL j = 0 ; j < 5 ; j++){
        ma = max(ma, a[i - j]);
    }
    return ma;
}
bool check(LL i){
    if(i > 3 && s[i - 1] == s[i - 2] && s[i - 2] == s[i - 3] && s[i - 3] == s[i - 4])
        return true;
    return false;
}
int main()
{
    /*freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);*/
	ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
    LL n, l = -1000000000, r = 1000000000;
    cin >> n;
    for(LL i = 0 ; i < n ; i++){
        LL x;
        cin >> x;
        a.push_back(x);
    }
    cin >> s;
    for(LL i = 0 ; i < n ; i++){
        if(check(i)){
            if(s[i] == '1' && s[i - 1] == '0'){
                l = max(l, getMax(i) + 1) ;
            }
            else if(s[i] == '0' && s[i - 1] == '1'){
                r = min(r, getMin(i) - 1);
            }
        }
    }
    cout << l << " " << r << endl;
	return 0;
}
