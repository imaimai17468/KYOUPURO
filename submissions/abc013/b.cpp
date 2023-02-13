#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define PI 3.1415926535897932384626433
#define MOD 1000000007

int main() {
    int a, b;
    cin >> a >> b;
    if (abs(a - b) < 6) {
        cout << abs(a - b) << endl;
    } else {
        cout << 10 - abs(a - b) << endl;
    }
    return 0;
}
