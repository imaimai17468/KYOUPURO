#include <bits/stdc++.h>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;
    for (int i = 1; i < 4; i++) {
        int d;
        d = a * b * i;
        if (d % 2 != 0) {
            cout << "Yes" << endl;
            return 0;
        }
    }
    cout << "No" << endl;
    return 0;
}
