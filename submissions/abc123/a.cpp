#include <bits/stdc++.h>
using namespace std;

int main() {
    int a[5], b = 1;
    int k, sum = 0;
    int count = 0;

    for (int i = 0; i < 5; i++) {
        cin >> a[i];
    }
    cin >> k;

    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            if (a[i] - a[j] > k) count++;
        }
    }

    if (count > 0) {
        cout << ":(" << endl;
    } else {
        cout << "Yay!" << endl;
    }
    return 0;
}
