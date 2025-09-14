// Sn = 1 + 2 + 3 + 4 + ... + n
// Input
// Số nguyên không âm n. ( 0 ≤ n ≤ 10
// 8
// ).

// Output
// Kết quả của bài toán
#include "bits/stdc++.h"

using namespace std;

int main (void) {
    int a;
    cin >> a;
    cout << 1ll * a * (a + 1) / 2 << endl;
    return 0;
}