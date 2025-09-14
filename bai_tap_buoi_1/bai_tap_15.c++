#include "bits/stdc++.h"

using namespace std;

int main (void) {
    int a;
    cin >> a;
    if (a % 3 == 0 && a % 5 == 0) {
        cout << 1 << endl;
    }
    else {
        cout << 0 << endl;
    }
    return 0;
}