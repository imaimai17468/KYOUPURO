#include <bits/stdc++.h>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;
    cout << max((a + 1) * b, a * (b + 1)) << endl;
    return 0;
}
