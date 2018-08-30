#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, ans = -1;
    string a, b, c;
    cin >> n;
    map<string , int> mp;
    mp["polycarp"] = 1;
    while(n--){
        cin >> a >> b >> c;
        transform(a.begin(), a.end(), a.begin(), ::tolower);
        transform(c.begin(), c.end(), c.begin(), ::tolower);
        mp[a] = mp[c] + 1;
        ans = max(ans, mp[a]);
    }
    cout << ans;
}
