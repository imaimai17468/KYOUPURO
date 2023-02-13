#include <bits/stdc++.h>
using namespace std;

int main() {
    int a, i = 0;
    cin >> a;

    while (a != 4 && a != 2 && a != 1) {
        if (a % 2 == 0)
            a = a / 2;
        else
            a = a * 3 + 1;
        i++;
        // cout << a << endl;
    }
    cout << i + 4 << endl;
    return 0;
}
