#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

#define mod 1000000007
#define all(x) (x).begin(), (x).end()
#define pb push_back

const long double PI = acos(-1);

ll gcd(ll a,ll b){return b ? gcd(b,a%b) : a;}
ll lcm(ll a,ll b){return a / gcd(a,b) * b;}

int main(){
  vector<ll> a(6);
  for(ll i = 1; i <= 6; i++) a[i-1] = i;

  ll n;
  cin >> n;
  for(ll i = 0; i < n; i++){
    ll tmp;
    tmp = a[(i%5)+1];
    a[(i%5)+1] = a[(i%5)];
    a[(i%5)] = tmp;
  }

  string s = "";
  for(ll i = 0; i < 6; i++){
    s += '0' + a[i];
  }
  cout << s << endl;
  return 0;
}