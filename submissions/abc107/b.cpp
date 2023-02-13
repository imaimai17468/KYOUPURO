#include <bits/stdc++.h>
using namespace std;

int main() {
    int h, w;
    cin >> h >> w;
    char field[150][150];
    bool fh[150], fw[150];
    for (int i = 0; i < h; i++) cin >> field[i];

    for (int i = 0; i < h; i++) {
        for (int j = 0; j < w; j++) {
            if (field[i][j] == '#') {
                fh[i] = true;
                fw[j] = true;
            }
        }
    }
    for (int i = 0; i < h; i++) {
        if (fh[i]) {
            for (int j = 0; j < w; j++) {
                if (fw[j]) {
                    cout << field[i][j];
                }
            }
            cout << endl;
        }
    }
    return 0;
}
