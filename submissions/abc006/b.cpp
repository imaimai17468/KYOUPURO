#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define PI 3.1415926535897932384626433
#define MOD 1000000007

int i = 0;
int ans = 0;

int main() {
    int n;
    cin >> n;
    int d[n];
    d[0] = 0;
    d[1] = 0;
    d[2] = 1;
    for (int i = 3; i < n; i++) {
        d[i] = (d[i - 3] + d[i - 2] + d[i - 1]) % 10007;
    }
    cout << d[n - 1] << endl;
    return 0;
}
