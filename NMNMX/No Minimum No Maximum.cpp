#include<bits/stdc++.h>
using namespace std;
#define ll long long int
ll arr[100000];
ll moduloMultiplication(ll a, ll n, ll mod) {
    if (n == 0 ) return 1;
    if (n == 1) return a;
    if (!arr[n/2])
        arr[n/2] = moduloMultiplication(a, n/2, mod);
    if (n % 2)
        return ((arr[n/2]%mod) * (arr[n/2]%mod) * a)%mod;
    else
        return ((arr[n/2]%mod) * (arr[n/2]%mod))%mod;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;

        vector <ll> combs;
        combs.push_back(1);
        for (ll i = 0 ; i < n - k; i++) {
            if ((k + i) % (i + 1))
                combs.push_back((k + i)*(combs[combs.size() - 1]/(i + 1)));
            else
                combs.push_back(((k + i)/(i + 1))*(combs[combs.size() - 1]));
        }
        cout << combs[n-k] << endl;


        vector<ll> v;
        for (int i = 0 ; i < n ; i++) {
            int x;
            cin >> x;
            v.push_back(x);
        }
        sort(v.begin(), v.end());

//        for (int i = 0 ; i <= n - k ; i++)
//            cout << combs[i] << " ";
//        cout << endl;

        vector <ll> ans;
        for (int i = 0 ; i < n ; i++) {
            int temp = combs[n-k];
            if (i >= (k - 1)) {
                temp -= combs[i - k + 1];
            }
            if (n - i >= k) {
                temp -= combs[n - i - k];
            }
            ans.push_back(temp);
        }

//        for (int i = 0 ; i < ans.size() ; i++)
//            cout << ans[i] << " " ;
//        cout << endl;

        ll total = 1;
        for (int i = 0 ; i < ans.size() ; i++){
            memset(arr, 0, sizeof(arr));
            ll temp = moduloMultiplication(v[i], ans[i], 1000000007);
//            cout << v[i] << " " << ans[i] << " " << temp << endl;
            total = (total * temp) % (1000000007);
        }
        cout << total << endl;
    }
}

/*

1
6 3
1 2 3 4 5 6

*/

