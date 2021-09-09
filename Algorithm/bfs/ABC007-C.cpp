#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using pll = pair<ll, ll>;
using vll = vector<long long>;
using Graph = vector<vector<ll>>;
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
struct corr{ll y; ll x; ll depth;};
vector<ll> dx = {0, 0, -1, 1};
vector<ll> dy = {-1, 1, 0, 0};

int main() {
	ll x, y;
	ll sx, sy;
	ll gx, gy;
	cin >> y >> x >> sy >> sx >> gy >> gx;

	vector<string> s(y);
	rep(i, 0, y) cin >> s[i];

	sx--, sy--, gx--, gy--;
	corr start {sy, sx, 0};
	queue<corr> que;
	que.push(start);
	while(!que.empty()){
		corr now = que.front();
		que.pop();

		if(now.x == gx && now.y == gy){
			cout << now.depth << endl;
			return 0;
		}

		for(ll i = 0; i < 4; i++){
			corr next = {now.y + dy[i], now.x + dx[i], now.depth + 1};
			if(next.x >= 0 && next.x <= x-1 && next.y >= 0 && next.y <= y-1 && s[next.y][next.x] == '.'){
				s[next.y][next.x] = '*';
				que.push(next);
			}
		}
	}
	return 0;
}