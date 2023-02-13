#include <bits/stdc++.h>
using namespace std;

int main() {
    int h, w, i;
    cin >> h >> w;
    string s[h];
    for (i = 0; i < h; i++) {
        cin >> s[i];
    }

    for (i = 0; i < w + 2; i++) {
        cout << "#";
    }
    cout << endl;

    for (i = 0; i < h; i++) {
        cout << "#" << s[i] << "#" << endl;
    }

    for (i = 0; i < w + 2; i++) {
        cout << "#";
    }
    cout << endl;
    return 0;
}
