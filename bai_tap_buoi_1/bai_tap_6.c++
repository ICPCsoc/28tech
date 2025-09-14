// Tính khoảng cách Euclid giữa 2 điểm trong hệ tọa độ Oxy
// Input
// Tọa độ của 2 điểm (x1, y1) và (x2, y2) là các số nguyên.( -106 ≤xi, yi ≤106
// )

// Output
// Khoảng cách giữa 2 điểm lấy độ chính xác với 2 chữ số
#include "bits/stdc++.h"
#include <iomanip>

using namespace std;

int main (void) {
    int x1, y1, x2, y2;
    cin >> x1 >> y1 >> x2 >> y2;
    cout << fixed << setprecision(2) << (double) sqrt(pow(x1 - y1, 2) + pow(x2 - y2, 2)) << endl;
    return 0;
}