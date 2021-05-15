#include<bits/stdc++.h>
using namespace std;
 
typedef long long ll;
typedef pair<int, int> P;
 
#define mod 1000000007
#define inf 1000000000
#define all(x) (x).begin(), (x).end()
#define pb push_back
#define popcount(x) __builtin_popcountll(x)
 
const long double PI = acos(-1);
 
ll gcd(ll a,ll b){return b ? gcd(b,a%b) : a;}
ll lcm(ll a,ll b){return a / gcd(a,b) * b;}

ll n, m;
bool graph[60][60];
bool vis[60];

void dfs(ll x){
  if(vis[x]) return;
  vis[x] = true;
  for(ll i = 0; i < n; i++){
    if(graph[x][i]){
      dfs(i);
    }
  }
}

int main(){
  cin >> n >> m;
  vector<ll> a(m), b(m);
  for(ll i = 0; i < m; i++){
    cin >> a[i] >> b[i];
    a[i]--, b[i]--;
    graph[a[i]][b[i]] = graph[b[i]][a[i]] = true;
  }

  ll ans = 0;

  for(ll i = 0; i < m; i++){
    graph[a[i]][b[i]] = graph[b[i]][a[i]] = false;
    for(ll j = 0; j < n; j++) vis[j] = false;
    dfs(0);
    bool conect = false;
    for(ll i = 0; i <n; i++){
      if(!vis[i]) conect = true;
    }
    if(conect) ans++;
    graph[a[i]][b[i]] = graph[b[i]][a[i]] = true;
  }
  cout << ans << endl;
  return 0;
}