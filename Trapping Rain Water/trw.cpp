#include<bits/stdc++.h>
using namespace std;
int main() {
    int n, x;
    cin >> n;
    stack<pair <int, int> > st;
    for (int i = 0 ; i < n ; i++) {
        cin >> x;
        if (!st.empty()) {
            while (x > st.top().first)
                st.pop();
        }
        cout << (i - st.top().second) * (min(st.top().first, x)) << " ";
        st.push(make_pair(x, i));
    }
    cout << endl;
}
