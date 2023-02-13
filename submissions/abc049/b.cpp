#include <bits/stdc++.h>
using namespace std;

int main() {
    int h, w, j = 0;
    cin >> h >> w;
    string c[h + 1], ans[h * 2 + 1];

    for (int i = 0; i < h; i++) cin >> c[i];

    for (int i = 0; i < h; i++) {
        ans[j] = c[i];
        ans[j + 1] = c[i];
        j += 2;
    }

    for (int i = 0; i < h * 2; i++) cout << ans[i] << endl;
    return 0;
}
