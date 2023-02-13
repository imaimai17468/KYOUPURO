#include <bits/stdc++.h>
using namespace std;

int main() {
    int sum = 0, min, a, i, j;
    cin >> a;
    min = a;
    for (i = 0; i < 4; i++) {
        cin >> a;
        if (a % 10 < min % 10 && a % 10 != 0) {
            sum += (min / 10) * 10 + 10;
            min = a;
        } else {
            if (a % 10 == 0)
                sum += a;
            else
                sum += (a / 10) * 10 + 10;
        }
    }
    cout << sum + min << endl;
    return 0;
}
