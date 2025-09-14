// Yêu cầu: Cho ba số nguyên dương a , b và c, hãy tính S = a*(b+c)+b*(a+c).
// Dữ liệu: Một dòng ba số nguyên a, b, c ( 0 < |a|, |b|, |c |< 109

// ), a và b cách nhau một

// khoảng trắng.
// Kết quả: Một dòng ghi giá trị S = a*(b+c) + b*(a+c).
#include "bits/stdc++.h"

using namespace std;

int main (void) {
    int a, b, c;
    cin >> a >> b >> c;
    cout << a * (b + c) + b * (c + a) << endl;
    return 0;
}