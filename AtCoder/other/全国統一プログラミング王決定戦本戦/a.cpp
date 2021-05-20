#include<bits/stdc++.h>
using namespace std;
 
using ll = long long;
using pll = pair<ll, ll>;
#define all(x) (x).begin(), (x).end()
#define call(x) (x).cbegin(), (x).cend()
#define rall(x) (x).rbegin(), (x).rend()
#define pb push_back
#define sz(x) ((x).size())
#define pd(a) printf("%.10f\n",a)
#define UNIQUE(v) v.erase(unique(v.begin(), v.end()), v.end())
#define rep(i, a, b) for(ll i = ll(a); i < ll(b); i++)
ll gcd(ll a,ll b){return b ? gcd(b,a%b) : a;}
ll lcm(ll a,ll b){return a / gcd(a,b) * b;}
ll ceil(ll a, ll b){return ((a)+(b)-1)/b;}
template<class T> inline bool chmax(T &a, const T &b){ if(a < b){ a=b; return 1; } return 0; }
template<class T> inline bool chmin(T &a, const T &b){ if(a > b){ a=b; return 1; } return 0; }

int main(){
	ll n;
	cin >> n;
	vector<ll> a(n);
	rep(i, 0, n) cin >> a[i];

	vector<ll> s(n+1);
	rep(i, 0, n) s[i+1] = s[i] + a[i];

	rep(i, 1, n+1){
		ll ans = 0;
		rep(j, 0, n-i+1){
			chmax(ans, s[j+i] - s[j]);
		}
		cout << ans << endl;
	}
} 