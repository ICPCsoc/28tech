#include "bits/stdc++.h"

using namespace std;

int main() {
    double d1, d2, d3, d4;
    cin >> d1 >> d2 >> d3 >> d4; // Nhập 4 điểm: d1, d2 hệ số 1; d3 hệ số 2; d4 hệ số 3

    // Tính tổng kết theo công thức trung bình cộng có trọng số
    double average = (d1 + d2 + 2 * d3 + 3 * d4) / 7;

    // In kết quả học tập theo thang điểm
    if (average >= 8.0){
        cout << "GIOI" << endl;}
    else if (average >= 6.5){
        cout << "KHA" << endl;
    }
    else if (average >= 5.0){
        cout << "TRUNG BINH" << endl;
    }
    else{
        cout << "YEU" << endl;
    }
    return 0;
}