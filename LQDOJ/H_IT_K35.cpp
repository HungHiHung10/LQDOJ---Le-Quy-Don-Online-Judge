#include <bits/stdc++.h>
#include <random>
#include <chrono>
#define ll long long
#define ld long double
#define pb push_back
#define pii pair<int, int>
#define fi first
#define se second
#define bit(i, x) ((x >> i) & 1)
#define SZ(x) ((int)(x.size()))
#define FOR(i, a, b) for (int i = a; i <= b; ++i)
#define FORD(i, a, b) for (int i = a; i >= b; --i)
#define task "test"
using namespace std;

mt19937 rd(chrono::steady_clock::now().time_since_epoch().count());
ll rand(ll l, ll r)
{
    assert(l <= r);
    return uniform_int_distribution<ll>(l, r)(rd);
}

const int MAXn = 3e5 + 7;
const int MOD = 1e9 + 7;
const ll oo = (long long)(1e18);
const int BASE = 3137;
const int BL = 320;
const int INF = (int)1e9;

int n, m, vis[MAXn], id[MAXn], f[MAXn], res, dfstime;
vector<int> adj[MAXn];
stack<int> topo;

void dfs(int u)
{
    vis[u] = 1;
    for (int v : adj[u])
    {
        if (vis[v] == 1)
        {
            cout << "BUG";
            exit(0);
        }
        if (!vis[v])
        {
            dfs(v);
        }
    }
    vis[u] = 2;
    id[++dfstime] = u;
}

void solution()
{
    cin >> n >> m;
    FOR(i, 1, m)
    {
        int u, v;
        cin >> u >> v;
        adj[u].pb(v);
    }
    dfstime = 0;
    FOR(i, 1, n)
    {
        if (!vis[i])
            dfs(i);
    }
    FOR(i, 1, n)
    {
        int u = id[i];
        for (int v : adj[u])
        {
            f[u] = max(f[u], f[v] + 1);
        }
        res = max(res, f[u]);
    }
    cout << res;
}

int32_t main()
{
    if (fopen(task ".inp", "r"))
    {
        freopen(task ".inp", "r", stdin);
        freopen(task ".out", "w", stdout);
    }
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int ntest = 1; /// cin >> ntest;
    while (ntest--)
        solution();
    cerr << "\n"
         << 1.0 * clock() / CLOCKS_PER_SEC << "s ";
}
