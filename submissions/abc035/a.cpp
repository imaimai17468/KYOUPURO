#include <bits/stdc++.h>
using namespace std;

int main() {
    int w, h;
    cin >> w >> h;
    if (h / 3 * 4 == w) {
        cout << "4:3" << endl;
    } else {
        cout << "16:9" << endl;
    }
    return 0;
}
