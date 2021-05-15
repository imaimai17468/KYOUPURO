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
  vector<ll> x(n);
  ll xmin = 100000000000000, xmax = 0;
  for(ll i = 0; i < n; i++){
    cin >> x[i];
    xmin = min(xmin, x[i]);
    xmax = max(xmax, x[i]);
  }
 
  // cout << xmax << " " << xmin << endl;
 
  ll ans = 1000000000000000000;
  for(ll i = xmin; i <= xmax; i++){
    ll minans = 0;
    for(ll j = 0; j < n; j++){
      minans += pow(x[j] - i, 2);
    }
    ans = min(minans, ans);
  }
  cout << ans << endl;
  return 0;
}