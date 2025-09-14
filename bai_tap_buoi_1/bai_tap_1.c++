// Tính và in ra phần nguyên, phần dư của phép chia 2 số nguyên a, b.
// Input
// 2 số nguyên a, b với b khác 0( -1018 ≤a, b ≤1018)
// Output

// 4
// Đáp án của bài toán được in trên 1 dòng
#include "bits/stdc++.h"

using namespace std;

int main (void) {
    int a, b;
    cin >> a >> b;
    cout << a/b << " " << a%b << endl;
    return 0;
}