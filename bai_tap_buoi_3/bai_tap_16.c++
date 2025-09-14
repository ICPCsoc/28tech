#include "bits/stdc++.h"

using namespace std;

int main() {
    long long n;
    cin >> n;
    int sum = 0;
    while (n != 0) {
        int a = n % 10;
        if (a == 2 || a == 3 || a == 5 || a == 7) {
            sum++;
        }
        n /= 10;
    }
    cout << sum << endl;
    return 0;
}