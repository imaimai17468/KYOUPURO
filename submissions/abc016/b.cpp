#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define PI 3.1415926535897932384626433
#define MOD 1000000007

int main() {
    int a, b, c;
    cin >> a >> b >> c;
    if (a + b == c && a - b == c) {
        cout << "?" << endl;
    } else if (a + b == c) {
        cout << "+" << endl;
    } else if (a - b == c) {
        cout << "-" << endl;
    } else {
        cout << "!" << endl;
    }
    return 0;
}
