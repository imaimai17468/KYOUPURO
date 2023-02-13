#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define PI 3.1415926535897932384626433
#define MOD 1000000007

int main() {
    int n;
    cin >> n;
    int p[n];
    for (int i = 0; i < n; i++) {
        cin >> p[i];
    }

    int cnt = 0;
    for (int i = 1; i < n - 1; i++) {
        if (p[i] > p[i - 1] && p[i] < p[i + 1]) {
            cnt++;
        }
        if (p[i] < p[i - 1] && p[i] > p[i + 1]) {
            cnt++;
        }
    }
    cout << cnt << endl;
    return 0;
}
