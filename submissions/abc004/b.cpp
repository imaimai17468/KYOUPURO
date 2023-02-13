#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define PI 3.1415926535897932384626433
#define MOD 1000000007

int i = 0;
int ans = 0;

int main() {
    char field[4][4];
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            cin >> field[i][j];
        }
    }

    for (int i = 3; i >= 0; i--) {
        for (int j = 3; j >= 0; j--) {
            cout << field[i][j];
            if (j != 0) {
                cout << " ";
            }
        }
        cout << endl;
    }
    return 0;
}
