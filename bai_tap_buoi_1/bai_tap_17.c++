#include "bits/stdc++.h"

using namespace std;

int main (void) {
    int a, b;
    cin >> a >> b;
    if (b <= 0 || a <= 0 || a > 12) {
        cout << "INVALID" << endl;
    }
    else {
        if (b % 4 == 0 || b % 100 == 0 || b % 400 == 0) {
                        if (a % 2 == 0) {
                if (a == 2) {
                    cout << 29 << endl;
                }
                else{
                    cout << 30 << endl;
                }
            }
            else {
                cout << 31 << endl;
            }

        }
        else {
            if (a % 2 == 0) {
                if (a == 2) {
                    cout << 28 << endl;
                }
                else{
                    cout << 30 << endl;
                }
            }
            else {
                cout << 31 << endl;
            }
        }

    }
    return 0;
}