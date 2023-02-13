#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define PI 3.1415926535897932384626433
#define mod 1000000007

int gcd(int a, int b) { return b ? gcd(b, a % b) : a; }

int lcm(int a, int b) { return a * b / gcd(a, b); }

void dfs(int i, string s) {
    if (i == 0) {
        cout << s << endl;
    } else {
        for (char c = 'a'; c <= 'c'; c++) {
            dfs(i - 1, s + c);
        }
    }
}

int main() {
    int n;
    cin >> n;
    dfs(n, "");
}
