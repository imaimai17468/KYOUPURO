#include <bits/stdc++.h>
using namespace std;

int n, m;
string a[60], b[60];

bool match(int x, int y) {
    int i, j;
    for (i = 0; i < m; i++) {
        for (j = 0; j < m; j++) {
            if (a[x + i][y + j] != b[i][j]) {
                return false;
            }
        }
    }
    return true;
}

int main(void) {
    int i, j;
    cin >> n >> m;
    bool found = false;
    for (i = 0; i < n; i++) cin >> a[i];
    for (i = 0; i < m; i++) cin >> b[i];

    for (i = 0; i <= n - m; i++) {
        for (j = 0; j <= n - m; j++) {
            if (match(i, j)) found = true;
        }
    }
    cout << (found ? "Yes" : "No") << endl;
    return 0;
}
