#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, sum = 0, ave;
    cin >> n;
    int a[n + 1];
    for (int i = 0; i < n; i++) cin >> a[i];

    for (int i = 0; i < n; i++) {
        sum += a[i];
    }
    ave = sum / n;

    for (int i = 0; i < n; i++) {
        if (a[i] > ave) {
            cout << a[i] - ave << endl;
        } else {
            cout << ave - a[i] << endl;
        }
    }
    return 0;
}
