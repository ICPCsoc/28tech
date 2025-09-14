#include "bits/stdc++.h"

using namespace std;

int main (void) {
    int a, b , c;
    cin >> a >> b >> c;
    if (a < 0 || b < 0 || c < 0) {
        cout << "NO" << endl;
    }
    else {
        if (a + b > c && a + c > b && b + c > a) {
            cout << "YES" << endl;
        }
        else {
            cout << "NO" << endl;
        }
    }
    return 0;
}