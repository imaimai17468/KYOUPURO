#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    if (n < 3) {
        cout << "0" << endl;
        return 0;
    }

    cout << n / 3 << endl;
    return 0;
}
