#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using pll = pair<ll, ll>;
using vll = vector<long long>;
#define all(x) (x).begin(), (x).end()
#define call(x) (x).cbegin(), (x).cend()
#define rall(x) (x).rbegin(), (x).rend()
#define eb emplace_back
#define pb push_back
#define sz(x) ((x).size())
#define UNIQUE(v) v.erase(unique(v.begin(), v.end()), v.end())
#define rep(i, a, b) for(ll i = ll(a); i < ll(b); i++)
ll gcd(ll a,ll b){return b ? gcd(b,a%b) : a;}
ll lcm(ll a,ll b){return a / gcd(a,b) * b;}
ll ceil(ll a, ll b){return ((a)+(b)-1)/b;}
ll fac(ll a){return a ? fac(a - 1) * a : 1;}
template<class T> inline bool chmax(T &a, const T &b){ if(a < b){ a=b; return 1; } return 0; }
template<class T> inline bool chmin(T &a, const T &b){ if(a > b){ a=b; return 1; } return 0; }

int main() {
	ll n, k;
	cin >> n >> k;
	vector<ll> s(n);
	rep(i, 0, n) cin >> s[i];

	rep(i, 0, n){
		if(s[i] == 0){
			cout << n << endl;
			return 0;
		}
	}

	ll ans = 0;
	ll sum = 1;
	ll right = 0;
	rep(left, 0, n){
		while(right < n && sum * s[right] <= k){
			sum *= s[right];
			right++;
		}

		ans = max(ans, right - left);

		if(right == left) right++;
		else sum /= s[left];
	}

	cout << ans << endl;
	return 0;
}