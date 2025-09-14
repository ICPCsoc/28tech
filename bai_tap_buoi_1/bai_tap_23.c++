#include "bits/stdc++.h"

using namespace std;

int main (void) {
    char c;
    cin >> c;

    if (c >= 'a' && c <= 'z') {
        c = c - 32;
    }

        cout << c << endl;
    return 0;
}
