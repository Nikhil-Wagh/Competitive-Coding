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
char getMin(string s){
    LL mi = 0;
    for(LL i = 1 ; i < s.size() ; i++){
        if(s[mi] > s[i]){
            mi = i;
        }
    }
    return s[mi];
}
LL getGreater(LL a[100], LL x){
    for(LL i = x + 1 ; i < 26 ; i++){
        if(a[i])
            return i;
    }
    return -1;
}
char ans[1000000] = {0};
int main()
{
    /*freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);*/
	ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
    LL n, k, a[100] = {0};
    string str;
    cin >> n >> k;
    cin >> str;
    if(k > n){
        cout << str.insert(n, k-n, getMin(str));
    }
    else{
        for(LL i = 0 ; i < str.length() ; i ++){
            a[str[i] - 'a']++;
        }
        char m = getMin(str);
        for(LL i = k - 1 ; i >= 0 ; i--){
            LL x = getGreater(a, str[i] - 'a');
            if(x != -1){
                ans[i] = x + 'a';
                for(LL j = 0 ; j < i ; j++){
                    ans[j] = str[j];
                }
                break;
            }
            else{
                ans[i] = m;
                //cout << getMin(str) << " ";
            }
            //cout << i << " " << x << ans << endl;
        }
        cout << ans << endl;
    }
	return 0;
}

