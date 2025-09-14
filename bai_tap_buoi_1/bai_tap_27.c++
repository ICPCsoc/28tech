#include "bits/stdc++.h"

using namespace std;

int main() {
    int n;
    cin >> n;
    int year = n / 365;
    int remaining_days = n % 365;
    int week = remaining_days / 7;
    int day = remaining_days % 7;
    cout << year << endl;
    cout << week << endl;
    cout << day << endl;
    return 0;
}