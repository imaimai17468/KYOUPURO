#include<bits/stdc++.h>
using namespace std;
 
using ll = long long;
using pll = pair<ll, ll>;
using vll = vector<long long>;
#define all(x) (x).begin(), (x).end()
#define call(x) (x).cbegin(), (x).cend()
#define rall(x) (x).rbegin(), (x).rend()
#define eb emplace_back
#define sz(x) ((x).size())
#define UNIQUE(v) v.erase(unique(v.begin(), v.end()), v.end())
#define rep(i, a, b) for(ll i = ll(a); i < ll(b); i++)
ll gcd(ll a,ll b){return b ? gcd(b,a%b) : a;}
ll lcm(ll a,ll b){return a / gcd(a,b) * b;}
ll ceil(ll a, ll b){return ((a)+(b)-1)/b;}
template<class T> inline bool chmax(T &a, const T &b){ if(a < b){ a=b; return 1; } return 0; }
template<class T> inline bool chmin(T &a, const T &b){ if(a > b){ a=b; return 1; } return 0; }

int main(){
	ll n, m;
	cin >> n >> m;
	vector<ll> p(m), imos(n+1, 0);
	rep(i, 0, m) cin >> p[i];

	rep(i, 0, m-1){
		if (p[i] < p[i+1]) {
			imos[p[i]]++;
			imos[p[i+1]]--;
		} else {
			imos[p[i]]--;
			imos[p[i+1]]++;
		}
	}
	

	rep(i, 0, n) imos[i+1] += imos[i];

	ll ans = 0;
	rep(i, 1, n){
		ll a, b, c;
		cin >> a >> b >> c;
		ans += min(a*imos[i], b*imos[i]+c);
	}
	cout << ans << endl;
	
	return 0;
} 