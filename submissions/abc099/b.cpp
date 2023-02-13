#include <bits/stdc++.h>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;
    int cnt = 0;
    cnt = b - a;
    cout << cnt * (cnt + 1) / 2 - b << endl;
    return 0;
}
