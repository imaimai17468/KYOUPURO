#include <bits/stdc++.h>
using namespace std;

int main() {
    int a[3];
    for (int i = 0; i < 3; i++) {
        cin >> a[i];
    }

    int sc = 0, fc = 0;
    for (int i = 0; i < 3; i++) {
        if (a[i] == 7) sc++;
        if (a[i] == 5) fc++;
    }
    if (sc == 1 && fc == 2)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
    return 0;
}
