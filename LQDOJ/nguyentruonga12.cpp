#include <bits/stdc++.h>

using namespace std;

using lli = long long;
const int ioo = 2e9;
const int N = 1e5 + 5;

int n;
int a[N];
string factor[N];
void Inp()
{
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
    }
}

void calcFactor(int pos, int value)
{
    for (int i = 2; i * i <= value; i++)
    {
        int cnt = 0;
        while (value % i == 0)
        {
            cnt = (cnt + 1) % 2;
            value /= i;
        }
        if (cnt == 1)
        {
            factor[pos] += to_string(i) + " ";
        }
    }
    if (value > 1)
    {
        factor[pos] += to_string(value) + " ";
    }
}

void Solve()
{
    for (int i = 1; i <= n; i++)
        calcFactor(i, a[i]);
    sort(factor + 1, factor + 1 + n);

    lli st = 0;
    lli ans = 0;
    for (int i = 1; i <= n; i++)
    {
        // cout << i << ':' << factor[i] << '\n';
        if (i == 1 || factor[i] != factor[i - 1])
        {
            st = i;
        }
        ans += i - st;
    }
    cout << ans;
}

// #define taskname ""
signed main()
{
    cin.tie(0)->sync_with_stdio(0);
    // freopen(taskname ".inp", "r", stdin);
    // freopen(taskname ".out", "w", stdout);
    Inp();
    Solve();
    return 0;
}
