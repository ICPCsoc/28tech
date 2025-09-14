#include "bits/stdc++.h"

using namespace std;

int main (void) {
    int n;
    cin >> n;
    int sum1 = 0;
    int sum2 = 0;
    int sum = 0;
    for (int i = 1; i <= n; i++) {
        if (i % 2 == 0) {
            sum1 += i;
        }
    }
    for (int i = 1; i <= n; i++) {
        if (i % 2 != 0) {
            sum2 -= i;
        }
    }
    sum = sum1 + sum2;
    cout << sum << endl;
    return 0;
}