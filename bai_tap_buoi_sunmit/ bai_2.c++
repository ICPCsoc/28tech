#include "bits/stdc++.h"
#include <iomanip>

using namespace std;

bool nt(int n) {
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            return false;
        }
    }
    return true;
}

int main (void) {
    int n; cin >> n;
    vector<int> a(n);
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    int tong = 0;
    int count = 0;
    for(int i = 0; i < n; i++) {
        if(nt(a[i])) {
            tong += a[i];
            count += 1;
        }
    }
    cout<< fixed << setprecision(3) << tong/(double)count << endl;
    return 0;
}