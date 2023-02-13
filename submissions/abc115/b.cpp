#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, sum = 0;
    cin >> n;
    vector<int> p(n, 0);
    for (int i = 0; i < n; i++) {
        cin >> p[i];
    }

    sort(p.begin(), p.end(), greater<int>());
    sum += p[0] / 2;

    for (int i = 1; i < n; i++) {
        sum += p[i];
    }
    cout << sum << endl;
    return 0;
}
