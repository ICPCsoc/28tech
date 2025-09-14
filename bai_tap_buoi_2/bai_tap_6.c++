#include "bits/stdc++.h"

using namespace std;

int main (void) {
    long long a, b, n;
    cin >> n >> a >> b;
    long long total_cost = 0;
    if (2 * a <= b) {
        total_cost = n * a;
    }
    else {
        total_cost = (n / 2) * b + (n % 2) * a;
    }
    cout << total_cost << endl;
    return 0;
}