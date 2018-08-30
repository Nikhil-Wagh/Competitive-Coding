#include<bits/stdc++.h>
using namespace std;
set <int> s[100009];
int main() {
    int n, k, x;
    vector < pair <int, int> > pc;
    cin >> n >> k;
    for (int i = 0 ; i < n ; i++) {
        cin >> x;
        pc.push_back(make_pair(x, 0));
    }
    for (int i = 0 ; i < n ; i++) {
        cin >> x;
        pc[i].second = x;
    }

    sort(pc.begin(), pc.end());

    set <int> :: iterator it;
    s[0].insert(pc[i].second);

    for (int i = 1 ; i < n ; i++) {
        s[i] = s[i - 1];

        it = s[i].begin();
        if (*it < pc[i].second) {
            s[i].insert(pc[i].second);
        }
        if (s[i].size() > k) {
            s[i].erase(s[i].find(*it));
        }
    }
    for (int i = 0 ; i < n ; i++) {

    }
}
