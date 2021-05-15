#include<bits/stdc++.h>
using namespace std;
 
typedef long long ll;
typedef pair<int, int> P;
 
#define mod 1000000007
#define all(x) (x).begin(), (x).end()
#define pb push_back
#define popcount(x) __builtin_popcountll(x)
 
const long double PI = acos(-1);
 
ll gcd(ll a,ll b){return b ? gcd(b,a%b) : a;}
ll lcm(ll a,ll b){return a / gcd(a,b) * b;}
ll stringcount(string s, char c){return count(s.cbegin(), s.cend(), c);}
bool isInteger(double x){return floor(x) == x;}

int main(){
  ios::sync_with_stdio(false);
  cin.tie(0);

  ll n, x;
  cin >> n >> x;
  vector<ll> a(n);
  for(ll i = 0; i < n; i++) cin >> a[i];

  ll ans = 0;
  for(ll i = 0; i < n; i++){
    if(a[i] > x){
      ans += a[i] - x;
      a[i] = x;
    }
  }

  for(ll i = 0; i < n - 1; i++){
    if(a[i] + a[i+1] > x){
      ans += a[i] + a[i+1] - x;
      a[i+1] -= a[i] + a[i+1] - x;
    }
  }

  cout << ans << endl;
  return 0;
}