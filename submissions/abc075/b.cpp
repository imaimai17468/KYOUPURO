#include <bits/stdc++.h>
using namespace std;

int main() {
    int h, w;
    cin >> h >> w;
    string field[h + 1];
    for (int i = 0; i < h; i++) cin >> field[i];

    int dx[8] = {1, 1, 0, 1, 0, -1, -1, -1};
    int dy[8] = {0, 1, 1, -1, -1, -1, 0, 1};

    for (int i = 0; i < h; i++) {
        for (int j = 0; j < w; j++) {
            if (field[i][j] == '#') continue;

            int num = 0;
            for (int k = 0; k < 8; k++) {
                int numi = i + dx[k];
                int numj = j + dy[k];

                if (numi < 0 || numi >= h) continue;
                if (numj < 0 || numj >= w) continue;

                if (field[numi][numj] == '#') num++;
            }
            field[i][j] = char(num + '0');
        }
    }

    for (int i = 0; i < h; i++) cout << field[i] << endl;
    return 0;
}
