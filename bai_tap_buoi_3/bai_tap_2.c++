#include "bits/stdc++.h"

using namespace std;

int main (void) {
    double n;
    cin >> n;
    int sum = 0;
    for (int i = 0; i <= n; i++){
        sum += pow((double) i, 2);
    }
    cout << sum << endl;
    return 0;
}