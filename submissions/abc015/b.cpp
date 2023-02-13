#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, i, sum = 0, num = 0;
    cin >> n;
    int a[n + 1];
    for (i = 0; i < n; i++) cin >> a[i];

    for (i = 0; i < n; i++) {
        if (a[i] > 0) {
            sum += a[i];
            num++;
        }
    }

    cout << (sum + num - 1) / num << endl;
    return 0;
}
