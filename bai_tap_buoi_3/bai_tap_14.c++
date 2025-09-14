#include "bits/stdc++.h"

using namespace std;

int main (void) {
    int a;
    cin >> a;
    int sum1 = 0;
    int sum2 = 0;
    while (a != 0) {
        int b = a % 10;
        if (b % 2 == 0) {
            sum1 += b;
        } else {
            sum2 += b;
        }
        a /= 10;
    }
    cout << sum1 << " " << sum2 << endl;
    return 0;
}