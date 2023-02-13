#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    int count = 0;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            if (i != j) {
                if (i % 2 == 0 && j % 2 != 0) {
                    count++;
                }
            }
        }
    }
    cout << count << endl;
    return 0;
}
