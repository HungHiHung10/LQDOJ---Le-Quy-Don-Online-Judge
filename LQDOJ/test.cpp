// #include <bits/stdc++.h>
// #include <unordered_set>
// #define Input "LQDOJ9.in"
// #define Output "LQDOJ9.out"
// using namespace std;
// int minAddToMakeValid(string s)
// {
//     int res = 0;
//     if (s.size() == 0)
//     {
//         return res;
//     }
//     stack<char> Stack;
//     if (s[0] == ')')
//     {
//         res++;
//     }
//     else
//     {
//         Stack.push(s[0]);
//     }
//     int i = 1;
//     while (i < s.size())
//     {
//         if (s[i] == '(')
//         {
//             if (!Stack.empty())
//             {
//                 Stack.pop();
//             }
//             else
//             {
//                 res++;
//             }
//         }
//         else
//         {
//             Stack.push(s[i]);
//         }
//         i++;
//     }
//     res += Stack.size();
//     return res;
// }
// int main()
// {
//     cin.tie(0)->sync_with_stdio(0);
//     freopen(Input, "r", stdin);
//     freopen(Output, "w", stdout);
//     string str;
//     cin >> str;
//     cout << minAddToMakeValid(str);
//     return 0;
// }
// Kiểm tra chuỗi ngoặc đúng
// #include <iostream>
// #include <string>
// #include <stack>
// #define Input "LQDOJ9.in"
// #define Output "LQDOJ9.out"
// using namespace std;
// int main()
// {
//     cin.tie(0)->sync_with_stdio(0);
//     freopen(Input, "r", stdin);
//     freopen(Output, "w", stdout);
//     ios_base::sync_with_stdio(false);
//     int N;
//     cin >> N;
//     string str;
//     int i = 0;
//     while (N--)
//     {
//         cin >> str;
//         bool res = true;
//         stack<char> S;
//         for (char chr : str)
//         {
//             if (chr == '(' || chr == '[' || chr == '{')
//             {
//                 S.push(chr);
//             }
//             else
//             {
//                 if (S.empty() ||
//                 (chr == ')' && S.top() != '(') ||
//                 (chr == ']' && S.top() != '[') ||
//                 (chr == '}' && S.top() != '{'))
//                 {
//                     res = false;
//                     break;
//                 }
//                 S.pop();
//             }
//         }
//         if (res)
//         {
//             cout << "YES\n";
//         }
//         else
//         {
//             cout << "NO\n";
//         }
//     }
//     return 0;
// }

#include <bits/stdc++.h>
#define Input "LQDOJ10.in"
#define Output "LQDOJ10.out"
using namespace std;
struct State
{
    long long cost;
    int city;
    int coupons;
    bool operator>(const State &other) const
    {
        return cost > other.cost;
    }
};

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    freopen(Input, "r", stdin);
    freopen(Output, "w", stdout);
    int n, m, k;
    cin >> n >> m >> k;

    vector<vector<pair<int, int>>> adj(n + 1);
    for (int i = 0; i < m; ++i)
    {
        int u, v, w;
        cin >> u >> v >> w;
        adj[u].emplace_back(v, w);
        adj[v].emplace_back(u, w);
    }

    vector<vector<long long>> dist(n + 1, vector<long long>(k + 1, LLONG_MAX));
    priority_queue<State, vector<State>, greater<State>> pq;
    dist[1][k] = 0;
    pq.push({0, 1, k});

    while (!pq.empty())
    {
        auto [current_cost, u, coupons_left] = pq.top();
        pq.pop();

        if (current_cost > dist[u][coupons_left])
            continue;

        for (auto [v, weight] : adj[u])
        {
            // If we don't use a coupon
            if (current_cost + weight < dist[v][coupons_left])
            {
                dist[v][coupons_left] = current_cost + weight;
                pq.push({dist[v][coupons_left], v, coupons_left});
            }
            // If we use a coupon
            if (coupons_left > 0 && current_cost < dist[v][coupons_left - 1])
            {
                dist[v][coupons_left - 1] = current_cost;
                pq.push({dist[v][coupons_left - 1], v, coupons_left - 1});
            }
        }
    }

    for (int i = 2; i <= n; ++i)
    {
        long long min_cost = LLONG_MAX;
        for (int j = 0; j <= k; ++j)
        {
            min_cost = min(min_cost, dist[i][j]);
        }
        if (min_cost == LLONG_MAX)
        {
            cout << -1 << '\n';
        }
        else
        {
            cout << min_cost << '\n';
        }
    }

    return 0;
}
