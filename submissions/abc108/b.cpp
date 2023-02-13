#include <bits/stdc++.h>
using namespace std;

int main() {
    int a1, a2, b1, b2;
    cin >> a1 >> a2 >> b1 >> b2;
    int x = b1 - a1;
    int y = b2 - a2;

    cout << b1 - y << " " << b2 + x << " " << a1 - y << " " << a2 + x << endl;
    return 0;
}
