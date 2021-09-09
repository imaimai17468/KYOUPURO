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
	while(1){
		cin >> n;
		if(n == 0) break;

		vector<ll> t(86400, 0);
		ll len = sz(t);
		rep(i, 0, n){
			string s, e;
			cin >> s >> e;
			ll sint = ((s[0]-'0')*10 + (s[1]-'0'))*3600 + ((s[3]-'0')*10 + (s[4]-'0'))*60 + ((s[6]-'0')*10 + (s[7]-'0'));
			ll eint = ((e[0]-'0')*10 + (e[1]-'0'))*3600 + ((e[3]-'0')*10 + (e[4]-'0'))*60 + ((e[6]-'0')*10 + (e[7]-'0'));

			t[sint]++, t[eint]--;
		}

		rep(i, 0, len) if(i > 0) t[i] += t[i-1];

		ll ans = 0;
		rep(i, 0, len) chmax(ans, t[i]);
		cout << ans << endl;
	}
	return 0;
} 