#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

#define PI 3.1415926535897932384626433

int main() {
    int n;
    cin >> n;
    int r[n];
    for (int i = 0; i < n; i++) {
        cin >> r[i];
    }
    sort(r, r + n, greater<int>());
    double area = 0;
    for (int i = 0; i < n; i++) {
        if (i % 2 == 0) {
            area += r[i] * r[i] * PI;
        } else {
            area -= r[i] * r[i] * PI;
        }
    }
    printf("%.16f\n", area);
    return 0;
}
