#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define PI 3.1415926535897932384626433
#define MOD 1000000007

int main() {
    char c[4];
    cin >> c[0] >> c[1] >> c[2] >> c[3];
    sort(c, c + 4);

    if (c[0] == c[1] && c[2] == c[3] && c[1] != c[2]) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }
    return 0;
}
