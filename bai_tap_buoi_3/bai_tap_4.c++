#include "bits/stdc++.h"
#include <iomanip>

using namespace std;

int main (void) {
    int n;
    cin >> n;
    float sum = 0;
    for (int i = 1; i <= n; i++) {
        sum += 1 / (float)i;
    }
    cout << fixed << setprecision(3) << sum << endl;
    return 0;
}