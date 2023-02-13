#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    if (n > 11) n -= 12;
    float mdig = m * 6;
    float ndig = n * 30 + 30 * (mdig / 360);
    if (abs(ndig - mdig) > 180) {
        cout << 360 - abs(ndig - mdig) << endl;
        return 0;
    }
    cout << abs(ndig - mdig) << endl;
    return 0;
}
