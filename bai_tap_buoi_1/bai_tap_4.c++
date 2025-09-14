// Nhập vào 2 số nguyên, in ra tổng, hiệu, tích, thương ( lấy độ chính xác với 2 chữ
// số).
// Input
// 2 số nguyên a, b với b khác 0( -109 ≤a, b ≤109
// )

// Output
// Tổng, hiệu, tích, thương của 2 số
#include "bits/stdc++.h"
#include <iomanip>

using namespace std;

int main (void) {
    int a, b;
    cin >> a >> b;
    cout << 1ll * a + b << " " << 1ll * a - b << " " << 1ll * a * b << " " << fixed << setprecision(2) << (float) 1ll * a / b << endl;
    return 0;
}