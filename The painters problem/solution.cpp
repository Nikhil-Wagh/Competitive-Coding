#include<bits/stdc++.h>
using namespace std;
int getMax(int arr[], int n) {
    int ma = INT_MIN;
    for (int i = 0; i < n; i++)
        if (arr[i] > ma)
            ma = arr[i];
    return ma;
}
int requiredPainters(int arr[], int n, int maxLen) {
    int cnt = 1, current = 0;
    for (int i = 0; i < n; i++) {
        current += arr[i];
        if (current > maxLen) {
            current = arr[i];
            cnt++;
        }
    }
    return cnt;
}
int main()
{
    int t;
    cin >> t;
    while (t--) {
        int n, k, arr[100];
        cin >> k >> n;
        for (int i = 0 ; i < n; i++) {
            cin >> arr[i];
        }
        vector <int> sum;
        sum.push_back(arr[0]);
        for (int i = 1; i < n ; i++){
            sum.push_back(arr[i] + sum[i - 1]);
        }

//        for (int i = 0; i < n; i++)
//            cout << sum[i] << " ";
//        cout << endl;
        int lo = getMax(arr, n);
        int hi = sum[n - 1];

//        cout << lo << "  " << hi << endl;
        while (lo < hi) {
            int mid = (lo + hi) / 2;
            int x = requiredPainters(arr, n, mid);

            if (x <= k)
                hi = mid;
            else
                lo = mid + 1;
        }
        cout << lo << endl;
    }
}
