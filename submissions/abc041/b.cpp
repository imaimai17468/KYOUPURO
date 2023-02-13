#include <bits/stdc++.h>
using namespace std;

#define mod 1000000007

int main() {
    long long int a, b, c;
    cin >> a >> b >> c;
    cout << ((a * b) % mod) * c % mod << endl;
    return 0;
}
