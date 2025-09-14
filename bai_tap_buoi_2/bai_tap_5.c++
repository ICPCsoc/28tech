#include "bits/stdc++.h"

using namespace std;

int main (void) {
    long long a, b, s;
    cin >> a >> b >> s;
    long long c = abs(a) + abs(b);
    if (s >= c  && (s - c) % 2 == 0){
        cout << "YES" << endl;
    }
    else {
        cout << "NO" << endl;
    }
    return 0;
}