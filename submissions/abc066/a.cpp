#include <bits/stdc++.h>
using namespace std;

int main() {
    int a, b, c;
    cin >> a >> b >> c;
    int sum = min({a + b, a + c, b + c});
    cout << sum << endl;
    return 0;
}
