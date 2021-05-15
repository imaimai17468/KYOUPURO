#include<bits/stdc++.h>
using namespace std;
 
using ll = long long;
using pll = pair<ll, ll>;
#define all(x) (x).begin(), (x).end()
#define call(x) (x).cbegin(), (x).cend()
#define rall(x) (x).rbegin(), (x).rend()
#define pb push_back
#define sz(x) ((x).size())
#define UNIQUE(v) v.erase(unique(v.begin(), v.end()), v.end())
#define rep(i, a, b) for(ll i = ll(a); i < ll(b); i++)
const double PI = acos(-1);
const int mod = 1e9+7;
const long long INF = (1LL << 60);
const int dx[] = {0,1,0,-1,1,1,-1,-1};
const int dy[] = {1,0,-1,0,1,-1,-1,1};
ll gcd(ll a,ll b){return b ? gcd(b,a%b) : a;}
ll lcm(ll a,ll b){return a / gcd(a,b) * b;}
ll stringcount(string s, char c){return count(s.cbegin(), s.cend(), c);}
bool isInteger(double x){return floor(x) == x;}
ll ceil(const ll a, const ll b){return ((a)+(b)-1)/b;}
template<class T> inline bool chmax(T &a, const T &b){ if(a < b){ a=b; return 1; } return 0; }
template<class T> inline bool chmin(T &a, const T &b){ if(a > b){ a=b; return 1; } return 0; }

int main(){
  ios::sync_with_stdio(false);
  cin.tie(0);

  ll n;
  cin >> n;
  vector<ll> h(n);
  rep(i, 0, n) cin >> h[i];

  ll ans = 0;
  rep(i, 0, n){
    if(i == 0 || i == n-1){
      if(i == 0){
        ll right = i;
        while(h[right] > h[right+1] && right < n-1) right++;
        chmax(ans, right-i+1);
      }else{
        ll left = i;
        while(h[left] > h[left-1] && left > 0) left--;
        chmax(ans, i-left+1);
      }
    }else if(h[i-1] < h[i] && h[i] > h[i+1]){
      ll left = i, right = i;
      while(h[right] > h[right+1] && right < n-1) right++;
      while(h[left] > h[left-1] && left > 0) left--;
      //cout << left << ' ' << i << ' ' << right << endl;
      chmax(ans, right-left+1);
    }
  }
  cout << ans << endl;
  return 0;
}