#include <bits/stdc++.h>
#define input "LQDOJ8.in"
#define output "LQDOJ8.out"
#define int long long
#define endl "\n"
using namespace std;
int t(int n)
{
    return n / 3 + n / 5 + n / 7 - n / 15 - n / 35 - n / 21 + n / 105;
}
int tknp(int l, int r, int k)
{
    int mid;
    while (l <= r)
    {
        mid = (l + r) / 2;
        if (t(mid) == k)
            return mid;
        else if (t(mid) > k)
            r = mid - 1;
        else
            l = mid + 1;
    }
    return mid;
}
signed main()
{
    cin.tie(0)->sync_with_stdio(0);
    freopen(input, "r", stdin);
    freopen(output, "w", stdout);
    int n, x;
    cin >> n;
    x = tknp(1, n * 3, n);
    while (x % 5 != 0 && x % 3 != 0 && x % 7 != 0)
        x--;
    cout << x;
    return 0;
}