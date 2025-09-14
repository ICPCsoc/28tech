#include "bits/stdc++.h"
#include <iomanip>

using namespace std;

int main (void) {
    int a;
    cin >> a;
    cout << fixed << setprecision(2) << 1 - (1 / ((float)a + 1)) << endl;
    return 0;
}