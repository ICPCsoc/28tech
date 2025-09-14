#include "bits/stdc++.h"

using namespace std;

int main (void) {
    unsigned int n;
    cin >> n;
    unsigned int sum = 1;
    for (unsigned int i = 1; i <= n; ++i){
        sum *= i;
    }
    cout << sum << endl;
    return 0;
}