#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define PI 3.1415926535897932384626433
#define MOD 1000000007

int i = 0;
int ans = 0;

int main() {
    double n;
    cin >> n;
    n /= 1000;
    if (n < 0.1) {
        n = 0;
    } else if (n <= 5) {
        n *= 10;
    } else if (n <= 30) {
        n += 50;
    } else if (n <= 70) {
        n = (n - 30) / 5 + 80;
    } else {
        n = 89;
    }
    printf("%02.0f\n", n);
    return 0;
}
