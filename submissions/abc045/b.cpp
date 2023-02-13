#include <bits/stdc++.h>
using namespace std;

int main() {
    string a, b, c;
    cin >> a >> b >> c;
    int num = 0;
    int ca = 0, cb = 0, cc = 0;
    while (1) {
        if (num == 0) {
            if (a[ca] == 'a') {
                ca++;
                num = 0;
            } else if (a[ca] == 'b') {
                ca++;
                num = 1;
            } else if (a[ca] == 'c') {
                ca++;
                num = 2;
            }
        } else if (num == 1) {
            if (b[cb] == 'a') {
                cb++;
                num = 0;
            } else if (b[cb] == 'b') {
                cb++;
                num = 1;
            } else if (b[cb] == 'c') {
                cb++;
                num = 2;
            }
        } else if (num == 2) {
            if (c[cc] == 'a') {
                cc++;
                num = 0;
            } else if (c[cc] == 'b') {
                cc++;
                num = 1;
            } else if (c[cc] == 'c') {
                cc++;
                num = 2;
            }
        }
        // cout << ca << cb << cc << endl;
        if (ca == a.size() && num == 0) {
            cout << 'A' << endl;
            return 0;
        }
        if (cb == b.size() && num == 1) {
            cout << 'B' << endl;
            return 0;
        }
        if (cc == c.size() && num == 2) {
            cout << 'C' << endl;
            return 0;
        }
    }
    return 0;
}
