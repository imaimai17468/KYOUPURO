#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define PI 3.1415926535897932384626433
#define MOD 1000000007

int main() {
    int n, l;
    cin >> n >> l;
    int a, b;
    a = l;
    b = l + n - 1;

    int eat = 0;
    if (b <= 0) {
        eat = b;
    } else if (a >= 0) {
        eat = a;
    }

    cout << (b - a + 1) * (a + b) / 2 - eat << endl;
    return 0;
}
