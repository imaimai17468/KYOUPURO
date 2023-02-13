#include <bits/stdc++.h>
using namespace std;

int main() {
    char a;
    cin >> a;
    int cnt = 1;
    for (char c = 'A'; c <= 'Z'; c++) {
        if (c == a) {
            cout << cnt << endl;
            return 0;
        }
        cnt++;
    }
    return 0;
}
