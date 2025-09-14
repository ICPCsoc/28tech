// Sn = 1^2 + 2^2 + 3^2 + 4^2 + 5^2 + ... + n2
// Input
// Số nguyên không âm n. ( 0 ≤ n ≤ 105
// ).

// 7

// Output
// Kết quả của bài toán
#include "bits/stdc++.h"

using namespace std;

int main (void) {
    int a;
    cin >> a;
    cout << 1ll * a * (a + 1) * (2 * a + 1) / 6 << endl;
    return 0;
}