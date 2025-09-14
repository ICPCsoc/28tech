// Input
// Bán kính r của hình tròn là một số nguyên. (1≤r≤106
// )

// Output
// Chu vi và diện tích của hình tròn lấy độ chính xác với 2 chữ số
#include "bits/stdc++.h"
#include <iomanip>

using namespace std;

int main (void) {
    int a;
    cin >> a;
    cout << fixed << setprecision(2) << 2 * a * 3.14 << " " << (double) pow(a,2) * 3.14 << endl;
    return 0;
}