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
	vector<vector<ll>> d(n, vector<ll>(n));
	rep(i, 0, n) rep(j, 0, n) cin >> d[i][j];

	vector<vector<ll>> s(n+1, vector<ll>(n+1, 0));
	rep(i, 0, n){
		rep(j, 0, n){
			s[i+1][j+1] = s[i][j+1] + s[i+1][j] - s[i][j] + d[i][j];
		}
	}

	vector<ll> v(n*n+1);
	rep(x1, 0, n){
		rep(x2, x1+1, n+1){
			rep(y1, 0, n){
				rep(y2, y1+1, n+1){
					ll m = (x2 - x1) * (y2 - y1);
					ll sum = s[x2][y2] - s[x1][y2] - s[x2][y1] + s[x1][y1];
					v[m] = max(v[m], sum);
				}
			}
		}
	}

	rep(i, 0, n*n){
		v[i+1] = max(v[i+1], v[i]);
	}

	ll q;
	cin >> q;
	rep(i, 0, q){
		ll p;
		cin >> p;
		cout << v[p] << endl;
	}
}