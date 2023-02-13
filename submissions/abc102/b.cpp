#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++) cin >> a[i];

    int maxi = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            maxi = max(maxi, abs(a[i] - a[j]));
        }
    }

    cout << maxi << endl;
    return 0;
}
