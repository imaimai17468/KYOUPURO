#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    double x[n], sum = 0;
    string u[n];
    for (int i = 0; i < n; i++) {
        cin >> x[i] >> u[i];
    }

    for (int i = 0; i < n; i++) {
        if (u[i] == "JPY")
            sum += x[i];
        else
            sum += 380000 * x[i];
    }
    cout << sum << endl;
    return 0;
}
