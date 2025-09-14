#include "bits/stdc++.h"

using namespace std;

int main (void) {
    long long n;
    cin >> n;
    long long sum1 = 0;
    long long sum2 = 0;
    if (n == 0) {
        sum1 = 1; // 0 là số chẵn
    } else {
        while (n != 0) {
            int a = n % 10;
            if (a % 2 == 0) {
                sum1++;
            }
            else {
                sum2++;
            }
            n /= 10;
        }
    }
    if (sum1 == sum2) {
        cout << "YES" << endl;
    }
    else {
        cout << "NO" << endl;
    }
    return 0;
}