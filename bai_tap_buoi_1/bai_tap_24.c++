#include "bits/stdc++.h"

using namespace std;

int main (void) {
    char a;
    cin >> a;
    if (a < 'A' || a > 'z') {
        cout << "INVALID" << endl;
    }
    else {
        if (a >= 'A' && a <= 'Z') {
            a = a + 33;
        }
        else {
            a = a + 1;
        }
        cout << a << endl;
    }
    return 0;
}