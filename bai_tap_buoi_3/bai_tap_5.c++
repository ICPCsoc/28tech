#include "bits/stdc++.h"
#include <iomanip>

using namespace std;

int main (void) {
    float n;
    cin >> n;
    float sum = 0;
    for (int i = 1; i <= n; i++) {
        sum += 1 / ((float) 2 * i);
    }
    cout << fixed << setprecision(2) << sum << endl;
    return 0;
}