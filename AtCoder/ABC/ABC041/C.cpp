#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

#define mod 1000000007
#define all(x) (x).begin(), (x).end()
#define pb push_back

const long double PI = acos(-1);

ll gcd(ll a,ll b){return b ? gcd(b,a%b) : a;}
ll lcm(ll a,ll b){return a / gcd(a,b) * b;}
ll GetDigit(ll num) {return log10(num)+1;}

int main(){
  ll n;
  cin >> n;
  vector<ll> a(n);
  for(ll i = 0; i < n; i++) cin >> a[i];

  vector<pair<ll, ll>> p(n);
  for(ll i = 0; i < n; i++){
    p[i].first = a[i], p[i].second = i + 1;
  }
  sort(all(p), greater<pair<ll,ll>>());
  for(ll i = 0; i < n; i++){
    cout << p[i].second << endl;
  }

  return 0;
}