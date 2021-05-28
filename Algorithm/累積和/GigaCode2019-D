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
	ll h, w, k, v;
	cin >> h >> w >> k >> v;

	vector<vector<ll>> a(h, vector<ll>(w, 0));
	rep(i, 0, h) rep(j, 0, w) cin >> a[i][j];

	vector<vector<ll>> s(h+1, vector<ll>(w+1, 0));
	rep(i, 0, h) rep(j, 0, w) s[i+1][j+1] = s[i+1][j] + s[i][j+1] - s[i][j] + a[i][j];

	ll ans = 0;
	rep(x1, 1, h+1){
		rep(y1, 1, w+1){
			rep(x2, x1, h+1){
				rep(y2, y1, w+1){
					ll sum = s[x2][y2] - s[x2][y1-1] - s[x1-1][y2] + s[x1-1][y1-1];
					ll area = (x2-x1+1) * (y2-y1+1);
					ll money =  sum + area * k;
					if(money <= v){
						chmax(ans, area);
					}
				}
			}
		}
	}

	// rep(i, 0, h+1){
	// 	rep(j, 0, w+1) cout << s[i][j] << "/";
	// 	cout << endl;
	// }

	cout << ans << endl;

	return 0;
} 