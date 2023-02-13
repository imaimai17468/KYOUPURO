#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, n1, dig, sum, i;
    cin >> n;
    n1 = n;

    while (n) {
        dig = n % 10;
        sum += dig;
        n /= 10;
    }
    if (n1 % sum == 0)
        cout << "Yes" << endl;
    else
        cout << "No" << endl;
    return 0;
}
