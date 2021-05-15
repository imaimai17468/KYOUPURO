#include<bits/stdc++.h>
using namespace std;
 
typedef long long ll;
typedef pair<ll, ll> pll;
#define mod 1000000007
#define all(x) (x).begin(), (x).end()
#define call(x) (x).cbegin(), (x).cend()
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

  string s;
  cin >> s;
  ll n = s.size();

  ll ans = 100;
  for(char c = 'a'; c <= 'z'; c++){
    ll cnt = 0, ma = 0;
    for(ll i = 0; i < n; i++){
      if(s[i] != c) cnt++;
      else{
        ma = max(ma, cnt);
        cnt = 0;
      }

    }
    ma = max(ma, cnt);
    ans = min(ans, ma);
  }
  cout << ans << endl;
	return 0;
}