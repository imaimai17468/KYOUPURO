#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    int dig = n;
    int sum = 0;
    while (dig) {
        sum += dig % 10;
        dig /= 10;
    }

    if (n % sum == 0)
        cout << "Yes" << endl;
    else
        cout << "No" << endl;
    return 0;
}
