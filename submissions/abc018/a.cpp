#include <bits/stdc++.h>
using namespace std;

int main() {
    int a, b, c;
    cin >> a >> b >> c;
    cout << 1 + (a < b) + (a < c) << endl
         << 1 + (b < c) + (b < a) << endl
         << 1 + (c < a) + (c < b) << endl;
    return 0;
}
