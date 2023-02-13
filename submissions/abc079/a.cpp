#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, n1, n2, n3, n4;
    int flag;
    cin >> n;
    n1 = n / 1000;
    n2 = n % 1000 / 100;
    n3 = n % 100 / 10;
    n4 = n % 10;
    if (n1 == n2 && n2 == n3 || n2 == n3 && n3 == n4) {
        cout << "Yes" << endl;
    } else
        cout << "No" << endl;
    return 0;
}
