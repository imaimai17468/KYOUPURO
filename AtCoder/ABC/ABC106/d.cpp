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
	ll n, m, q;
	cin >> n >> m >> q;
	vector<ll> l(m), r(m);
	rep(i, 0, m) cin >> l[i] >> r[i];
	vector<ll> p(q), qq(q);
	rep(i, 0, q) cin >> p[i] >> qq[i];

	vector<vector<ll>> s(n+1, vector<ll>(n+1, 0));
	rep(i, 0, m) s[l[i]][r[i]]++;
	rep(L, 1, n+1) rep(R, 2, n+1) s[L][R] += s[L][R-1];
	
	rep(i, 0, q){
		ll ans = 0;
		rep(L, p[i], qq[i]+1) ans += s[L][qq[i]];
		cout << ans << endl;
	}

	return 0;
} 