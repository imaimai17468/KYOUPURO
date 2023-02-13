#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define PI 3.1415926535897932384626433
#define MOD 1000000007

int main() {
    int n;
    cin >> n;
    int h, m, s;
    h = n / 3600;
    n -= h * 3600;
    m = n / 60;
    n -= m * 60;
    s = n;
    printf("%02d:%02d:%02d\n", h, m, s);
    return 0;
}
