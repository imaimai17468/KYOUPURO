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
	ll n, q;
	cin >> n >> q;
	vector<vector<ll>> g(n);
	rep(i, 0, n-1){
		ll a, b;
		cin >> a >> b;
		g[a-1].eb(b-1);
		g[b-1].eb(a-1);
	}

	queue<ll> que;
	vector<ll> dis(n, -1);
	que.push(0);
	dis[0] = 0;
	while(!que.empty()){
		int t = que.front();
		que.pop();
		for(auto x : g[t]){
			if(dis[x] == -1){
				dis[x] = dis[t] + 1;
				que.push(x);
			}
		}
	}

	// for(auto x : dis) cout << x << endl;

	rep(i, 0, q){
		ll c, d;
		cin >> c >> d;
		if(dis[c-1] % 2 == dis[d-1] % 2) cout << "Town" << endl;
		if(dis[c-1] % 2 != dis[d-1] % 2) cout << "Road" << endl;
	}
	return 0;
}