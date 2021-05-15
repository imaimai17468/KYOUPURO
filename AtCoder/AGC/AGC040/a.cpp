#include<bits/stdc++.h>
using namespace std;
 
typedef long long ll;
typedef vector<pair<ll, ll>> vpll;
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

  string s;
  cin >> s;
  ll len = s.size();

  ll ans = 0;
  ll cnt = 0;
  vector<ll> a(500005);
  for(ll i = 0; i < len; i++){
    if(s[i] == '<'){
      a[i] = cnt;
      cnt++;
    }else{
      a[i] = cnt;
      cnt = 0;
    }
  }
  a[len] = cnt;
  cnt = 0;
  for(ll i = len-1; i >= 0; i--){
    if(s[i] == '>'){
      a[i+1] = cnt;
      cnt++;
    }else{
      a[i+1] = max(cnt, a[i+1]);
      cnt = 0;
    }
  }
  a[0] = max(cnt, a[0]);
  for(ll i = 0; i <= len; i++){
    ans += a[i];
  }
  cout << ans << endl;
	return 0;
}