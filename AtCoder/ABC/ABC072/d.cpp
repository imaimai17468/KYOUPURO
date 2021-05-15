#include<bits/stdc++.h>
using namespace std;
 
typedef long long ll;
typedef pair<ll, ll> pll;
#define mod 1000000007
#define all(x) (x).begin(), (x).end()
#define pb push_back
#define yes(a) printf(a ? "yes\n" : "no\n")
#define Yes(a) printf(a ? "Yes\n" : "No\n")
#define YES(a) printf(a ? "YES\n" : "NO\n") 
const long double PI = acos(-1);
const long long INF = (1 << 30);
ll gcd(ll a,ll b){return b ? gcd(b,a%b) : a;}
ll lcm(ll a,ll b){return a / gcd(a,b) * b;}
ll stringcount(string s, char c){return count(s.cbegin(), s.cend(), c);}
bool isInteger(double x){return floor(x) == x;}
ll ceil(const ll a, const ll b){return ((a)+(b)-1)/b;}

int main(){
  ios::sync_with_stdio(false);
  cin.tie(0);

  ll n;
  cin >> n;
  vector<ll> a(n);
  for(ll i = 0; i < n; i++) cin >> a[i];

  ll cnt = 0;
  ll ans = 0;
  for(ll i = 0; i < n-1; i++){
    if(a[i] == i+1){
      swap(a[i], a[i+1]);
      ans++;
    }
  }
  if(a[n-1] == n) ans++;
  cout << ans << endl;
	return 0;
}