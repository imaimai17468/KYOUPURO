#include <bits/stdc++.h>
using namespace std;

int main() {
    long long n;
    cin >> n;
    vector<long long> a(n);
    for (int i = 0; i < n; i++) cin >> a[i];

    sort(a.begin(), a.end());

    long long sum = 0;
    for (int i = 0; i + 1 < n; i++) {
        sum += (i + 1) * (n - (i + 1)) * (a[i + 1] - a[i]);
    }
    cout << sum << endl;
    return 0;
}
