#include "bits/stdc++.h"

using namespace std;

int main(void) {
    int t; cin >> t;
    while (t--) {
        int n, m; cin >> n >> m;
        int a[500][500];
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cin >> a[i][j];
            }
        }
        int max_val = INT_MIN;
        for (int i = 0; i < n; i++) {
                    int sum = 0;
            for (int j = 0; j < m; j++) {
                sum += a[i][j];
            }
            if (sum > max_val) {
                max_val = sum;
            }
        }
        cout << max_val << endl;
        for (int i = 0; i < n; i++) {
            int sum1 = 0;
            for (int j = 0; j < m; j++) {
                sum1 += a[i][j];
            }
            if (sum1 == max_val) {
                cout << i + 1 << " ";
            }
        }
        cout << endl;
    }
    return 0;
}