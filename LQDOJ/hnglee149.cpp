// Author : Le Quoc Hung, VNUHCM - University of Science //
//                                               _                               _
/*            _                               _ //                             _|_|        
_____________/_\_____________________________/_\______________________________|_|______________________ 
|  __       _____    ______    __    __   _______   ______    _      _   _     _   ___     _   ______  |
| | |      |  ___|  | ____ |   |     | | |  ___  | |  ____|  | |    | | | |   | | |   \   | | |  ____| |
| | |      | |___   | |    |   | |   | | | |   | | | |       | |____| | | |   | | | |\ \  | | | |  __  |
| | |      |  ___|  | |   _|   | |   | | | |   | | | |       |  ____| | | |   | | | | \ \ | | | | |_ | |
| | |____  | |___   | |__|_|_  | |___| | | |___| | | |____   | |    | | | |___| | | |  \ \| | | |__| | |
| |______| |_____|  |______|_| |_______| |_______| |______|  |_|    |_| |_______| |_|   \___| |______| |
|______________________________________________________________________________________________________|

*/

#include <bits/stdc++.h>

using namespace std;
using ii = pair<int, int>;
using iii = pair<int, ii>;
using ll = long long;

#define faster ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define fi first
#define se second
#define pb push_back
#define task "ROBOT"
#define endl '\n'
#define all(a) a.begin(), a.end()

const int maxn = 1e7;
const int MOD = 1e9 + 7;

string sum(string a, string b)
{
    int aSize = a.size();
    int bSize = b.size();

    reverse(all(a)), reverse(all(b));

    int diff = aSize - bSize;

    if (diff < 0)
    {
        a += string(bSize - aSize + 1, '0');
        b += "0";
    }

    else
    {
        a += "0";
        b += string(aSize - bSize + 1, '0');
    }

    string c = string(max(aSize, bSize) + 1, '0');

    int sum, nho = 0;

    for (int i = 0; i <= max(aSize, bSize); i++)
    {
        sum = a[i] - '0' + b[i] - '0' + nho;
        nho = sum/10;
        sum %= 10;
        c[i] = sum + '0';
    }

    if (c[c.length() - 1] == '0') c.pop_back();
    reverse(all(c));
    return c;
}

bool vatCan[101][101];
string dp[101][101];

int main()
{
    faster

    if (fopen(task".INP","r"))
    {
        freopen(task".INP", "r", stdin);
        freopen(task".OUT", "w", stdout);
    }

    int n, m; cin >> n >> m;

    for (int i = 0; i < m; i++)
    {
        int x, y; cin >> x >> y;
        vatCan[x][y] = true;
    }

    for (int i = 0; i <= n; i++) dp[i][0] = "0";
    for (int j = 0; j <= n; j++) dp[0][j] = "0";

    dp[0][1] = "1";

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (vatCan[i][j] == false)
            {
                dp[i][j] = sum(dp[i-1][j] , dp[i][j-1]);
            }
            else
            {
                dp[i][j] = "0";
            }
        }
    }

    cout << dp[n][n];
    cerr << "Time run: " << 1000*clock()/CLOCKS_PER_SEC << "ms\n";
}