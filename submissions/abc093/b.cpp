#include <bits/stdc++.h>
using namespace std;

int main() {
    int a, b, k;
    cin >> a >> b >> k;
    if (abs(a - b) <= k) {
        for (int i = a; i <= b; i++) cout << i << endl;
        return 0;
    }
    for (int i = a; i < a + k; i++) cout << i << endl;
    if (a + k < b - k + 1) {
        for (int i = b - k + 1; i <= b; i++) cout << i << endl;
    } else {
        for (int i = a + k; i <= b; i++) cout << i << endl;
    }
    return 0;
}
