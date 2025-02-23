//? Tổng Mũ
// #include <bits/stdc++.h>
// #define input "LQDOJ9.in"
// #define output "LQDOJ9.out"
// #define io                        \
//     ios_base::sync_with_stdio(0); \
//     cin.tie(NULL);

// #define MOD 1000000000
// #define MAX 10000001
// #define OPTIMIZE false
// using namespace std;
// using ll = long long;
// ll power(ll a, ll b)
// {
//     ll exp = 1LL;
//     while (b)
//     {
//         if (b & 1)
//         {
//             exp = (exp % MOD * a % MOD) % MOD;
//         }
//         a = (a % MOD * a % MOD) % MOD;
//         b >>= 1;
//     }
//     return exp;
// }
// int main()
// {
//     cin.tie(0)->sync_with_stdio(0);
//     freopen(input, "r", stdin);
//     freopen(output, "w", stdout);
//     int N;
//     cin >> N;
//     vector<int> a(N);
//     vector<int> b(N);
//     for (int i = 0; i < N; i++)
//     {
//         cin >> a[i];
//     }
//     for (int j = 0; j < N; j++)
//     {
//         cin >> b[j];
//     }
//     ll res = 0LL;
//     for (int i = 0; i < N; i++)
//     {
//         // cout << power((ll)a[i], (ll)b[i]) << endl;
//         res = (res % MOD + power((ll)a[i], (ll)b[i]) % MOD) % MOD;
//     }
//     cout << res;
//     return 0;
// }
//? Siêu đối xứng (THTB Đà Nẵng 2022)
// #include <bits/stdc++.h>
// #define input "LQDOJ9.in"
// #define output "LQDOJ9.out"
// #define io                        \
//     ios_base::sync_with_stdio(0); \
//     cin.tie(NULL);
// #define MOD 1000000000
// #define MAX 10000001
// using namespace std;
// int main()
// {
//     cin.tie(0)->sync_with_stdio(0);
//     freopen(input, "r", stdin);
//     freopen(output, "w", stdout);
//     string n;
//     cin >> n;
//     string goal = "";
//     int add = 0;
//     char msd = (n[0] - '0' + (bool)(n[0] <= n[1])) + '0';
//     if (msd > '9')
//     {
//         msd = '1';
//         add = 1;
//     }
//     // cout << "msd: " << msd << endl;
//     while (goal.size() < n.size() + add)
//     {
//         goal += msd;
//         // cout << goal << endl;
//     }
//     cout << stoll(goal) - stoll(n);
//     return 0;
// }
//? Nguyên Tố Cùng Nhau
// #include <bits/stdc++.h>
// #define Input "LQDOJ9.in"
// #define Output "LQDOJ9.out"
// #define io                        \
//     ios_base::sync_with_stdio(0); \
//     cin.tie(NULL);

// #define MOD 1000000000
// #define MAX 1000001
// #define OPTIMIZE false
// using namespace std;
// using ll = long long;
// int gcd(int a, int b)
// {
//     if (b == 0)
//     {
//         return a;
//     }
//     return gcd(b, a % b);
// }
// int N, M;
// int a[MAX];
// int divs[MAX] = {0};
// bool cop[MAX] = {0};
// void init()
// {
//     for (int i = 2; i < MAX; i++)
//     {
//         if (divs[i])
//             continue;
//         for (int j = i; j < MAX; j += i)
//         {
//             divs[j] = i;
//         }
//     }
// }
// void input()
// {
//     init();
//     cin >> N >> M;
//     for (int i = 0; i < N; i++)
//     {
//         cin >> a[i];
//     }
// }
// void factorize(int n)
// {
//     while (n > 1)
//     {
//         int divisor = divs[n];
//         cout << "divisor: " << divisor << endl;
//         if (!divisor)
//         {
//             break;
//         }
//         if (!cop[divisor])
//         {
//             for (int i = divisor; i < MAX; i += divisor)
//             {
//                 cop[i] = true;
//             }
//         }
//         n /= divisor;
//     }
// }
// void solve()
// {
//     for (int i = 0; i < N; i++)
//     {
//         cout << a[i] << " ";
//     }
//     for (int i = 0; i < N; i++)
//     {
//         factorize(a[i]);
//     }
//     vector<int> res;
//     for (int i = 1; i <= M; i++)
//     {
//         if (!cop[i])
//         {
//             res.push_back(i);
//         }
//     }
//     cout << res.size() << endl;
//     for (int num : res)
//     {
//         cout << num << '\n';
//     }
// }
// int main()
// {
//     cin.tie(0)->sync_with_stdio(0);
//     freopen(Input, "r", stdin);
//     freopen(Output, "w", stdout);
//     input();
//     solve();
//     return 0;
// }
//? Trốn Tìm
// #include <bits/stdc++.h>
// #define MAX 10001
// #define Input "LQDOJ9.in"
// #define Output "LQDOJ9.out"
// using namespace std;
// using ll = long long;
// int N, M;
// char v[MAX][MAX];
// int main()
// {
//     cin.tie(0)->sync_with_stdio(0);
//     freopen(Input, "r", stdin);
//     freopen(Output, "w", stdout);
//     cin >> N >> M;
//     for (int i = 0; i < N; i++)
//     {
//         for (int j = 0; j < M; j++)
//         {
//             cin >> v[i][j];
//         }
//     }
//     // for (int i = 0; i < N; i++)
//     // {
//     //     for (int j = 0; j < M; j++)
//     //     {
//     //         cout << v[i][j] << " ";
//     //     }
//     //     cout << endl;
//     // }
//     for (int i = 0; i < M; i++)
//     {
//         int count = 0;
//         for (int j = 0; j < N; j++)
//         {
//             if (v[j][i] == 'O')
//                 count++;
//         }
//         cout << count << " ";
//     }
//     return 0;
// }
//? Dãy Mới
// #include <bits/stdc++.h>
// #define Input "LQDOJ9.in"
// #define Output "LQDOJ9.out"
// #define MAX 1000001
// using namespace std;
// using ll = long long;
// int a[MAX];
// int b[MAX];
// ll c[MAX];
// int max_a[MAX];
// int max_b[MAX];
// int main()
// {
//     cin.tie(0)->sync_with_stdio(0);
//     freopen(Input, "r", stdin);
//     freopen(Output, "w", stdout);
//     int n;
//     cin >> n;
//     for (int i = 0; i < n; i++)
//     {
//         cin >> a[i];
//     }
//     for (int i = 0; i < n; i++)
//     {
//         cin >> b[i];
//     }
//     max_a[0] = a[0];
//     max_b[0] = b[0];
//     for (int i = 1; i < n; i++)
//     {
//         max_a[i] = max(a[i], max_a[i - 1]);
//         max_b[i] = max(b[i], max_b[i - 1]);
//     }
//     for (int i = 0; i < n; i++)
//     {
//         c[i] = max({(ll)max_a[i] * (ll)b[i], (ll)a[i] * (ll)b[i], (ll)c[i - 1]});
//     }
//     for (int i = 0; i < n; i++)
//     {
//         cout << c[i] << "\n";
//     }
//     return 0;
// }
//? Tổng Của Hiệu
// #include <bits/stdc++.h>
// #define Input "LQDOJ9.in"
// #define Output "LQDOJ9.out"
// #define MAX 200001
// using namespace std;
// using ll = long long;
// long long a[MAX];
// long long prefixSum[MAX];
// int main()
// {
//     cin.tie(0)->sync_with_stdio(0);
//     freopen(Input, "r", stdin);
//     freopen(Output, "w", stdout);
//     int N;
//     cin >> N;
//     for (int i = 0; i < N; i++)
//     {
//         cin >> a[i];
//     }
//     sort(a, a + N);
//     prefixSum[0] = a[0];
//     for (int i = 1; i < N; i++)
//     {
//         prefixSum[i] = a[i] + prefixSum[i - 1];
//     }
//     long long res = 0LL;
//     for (int i = N - 1; i >= 1; i--)
//     {
//         res += i * a[i] - prefixSum[i - 1];
//     }
//     cout << res;
//     return 0;
// }
//? Học sinh ham chơi
// #include <iostream>
// using namespace std;
// int main()
// {
//     int n, m, ai;
//     cin >> n;
//     for (int i = 0; i < n; i++)
//     {
//         cin >> ai;
//         m = max(m, ai);
//     }
//     cout << m << endl;
//     return 0;
// }
//? Tìm thành phần liên thông mạnh
// #include <iostream>
// #include <vector>
// #include <stack>
// using namespace std;

// void DFS_topo(vector<vector<int>> &G, vector<bool> &visited, int vertex, stack<int> &topo)
// {
//     visited[vertex] = true;
//     for (int neighbor : G[vertex])
//     {
//         if (!visited[neighbor])
//         {
//             DFS_topo(G, visited, neighbor, topo);
//         }
//     }
//     topo.push(vertex);
// }
// void DFS(vector<vector<int>> &G, vector<bool> &visited, int vertex)
// {
//     visited[vertex] = true;
//     for (int neighbor : G[vertex])
//     {
//         if (!visited[neighbor])
//         {
//             DFS(G, visited, neighbor);
//         }
//     }
// }
// int main()
// {
//     cin.tie(0)->sync_with_stdio(0);
//     // freopen("input.txt", "r", stdin);
//     // freopen("output.txt", "w", stdout);
//     int N, M, u, v;
//     cin >> N >> M;
//     vector<vector<int>> G(N + 1);
//     vector<vector<int>> revG(N + 1);
//     for (int i = 0; i < M; i++)
//     {
//         cin >> u >> v;
//         G[u].push_back(v);
//         revG[v].push_back(u);
//     }
//     stack<int> topo;
//     vector<bool> visited(N + 1, false);
//     for (int i = 1; i <= N; i++)
//     {
//         if (!visited[i])
//         {
//             DFS_topo(G, visited, i, topo);
//         }
//     }
//     fill(visited.begin(), visited.end(), false);
//     int scs = 0;
//     while (!topo.empty())
//     {
//         int vertex = topo.top();
//         topo.pop();
//         if (!visited[vertex])
//         {
//             DFS(revG, visited, vertex);
//             scs++;
//         }
//     }
//     cout << scs;
//     return 0;
// }
//? Tìm số thất lạc
// #include <bits/stdc++.h>
// #include <unordered_set>
// #define Input "LQDOJ9.in"
// #define Output "LQDOJ9.out"
// using namespace std;
// #define MAX 100001
// int c[MAX] = {0};
// int d[MAX] = {0};
// int main()
// {
//     cin.tie(0)->sync_with_stdio(0);
//     freopen(Input, "r", stdin);
//     freopen(Output, "w", stdout);
//     int n, m;
//     cin >> n >> m;
//     // vector<int> loss(m);
//     for (int i = 0; i < n; i++)
//     {
//         cin >> c[i];
//     }
//     for (int i = 0; i < n - m; i++)
//     {
//         cin >> d[i];
//     }
//     sort(c, c + n);
//     sort(d, d + n - m);
//     // for (int i = 0; i < n - m; i++)
//     // {
//     //     cout << d[i] << ' ';
//     // }
//     int i = 0;
//     int j = 0;
//     while (i < n && j < n)
//     {
//         if (c[i] != d[j])
//         {
//             cout << c[i] << ' ';
//             i++;
//             continue;
//         }
//         i++;
//         j++;
//     }
//     return 0;
// }
//? CSES - Common Divisors | Ước chung
// #include <bits/stdc++.h>
// #include <unordered_set>
// #define Input "LQDOJ9.in"
// #define Output "LQDOJ9.out"
// using namespace std;
// int n;
// int x[200001];
// int frequence[100001] = {0};
// int multiple[100001] = {0};
// int res = 1;
// int GCD(int a, int b)
// {
//     if (b == 0)
//     {
//         return a;
//     }
//     return GCD(b, a % b);
// }
// int main()
// {
//     cin.tie(0)->sync_with_stdio(0);
//     freopen(Input, "r", stdin);
//     freopen(Output, "w", stdout);

//     cin >> n;
//     for (int i = 0; i < n; i++)
//     {
//         cin >> x[i];
//     }
//     // for (int i = 0; i < n; i++)
//     // {
//     //     cout << x[i] << " ";
//     // }

//     //* Brute Force O(N^2 * logN)
//     // for (int i = 0; i < n - 1; i++)
//     // {
//     //     for (int j = i + 1; j < n; j++)
//     //     {
//     //         if (res > max(x[i], x[j]))
//     //             continue;
//     //         res = max(res, GCD(x[i], x[j]));
//     //     }
//     // }
//     // cout << res;

//     //* Optimize
//     for (int i = 0; i < n; i++)
//     {
//         frequence[x[i]]++;
//     }

//     for (int i = 1; i < 20; i++)
//     {
//         for (int j = i; j < 20; j += i)
//         {
//             if (frequence[j])
//             {
//                 multiple[i] += frequence[j];
//             }
//         }
//     }
//     int res = 1;
//     for (int i = 2; i < n; i++)
//     {
//         if (multiple[i] > 1)
//         {
//             res = i;
//         }
//     }
//     cout << res;
//     // for (int i = 0; i < 20; i++)
//     // {
//     //     cout << "i: " << i << " = " << multiple[i] << endl;
//     // }
//     return 0;
// }
//? CSES - Flight Discount | Khuyến mãi chuyến bay
// #include <bits/stdc++.h>
// #define Input "LQDOJ9.in"
// #define Output "LQDOJ9.out"
// #define MAX 200001
// #define oo LLONG_MAX
// using namespace std;
// void Dijkstra(vector<vector<pair<int, int>>> &G, vector<bool> &marked, vector<long long> &distance, int source)
// {
//     priority_queue<pair<long long, int>, vector<pair<long long, int>>, greater<pair<long long, int>>> PQueue;
//     PQueue.push({0LL, source});
//     distance[source] = 0LL;
//     while (!PQueue.empty())
//     {
//         auto [length, vertex] = PQueue.top();
//         PQueue.pop();

//         if (marked[vertex] == true)
//         {
//             continue;
//         }
//         marked[vertex] = true;
//         for (auto [neighbor, weighted] : G[vertex])
//         {
//             if (distance[neighbor] > length + weighted)
//             {
//                 distance[neighbor] = length + (long long)weighted;
//                 PQueue.push({distance[neighbor], neighbor});
//             }
//         }
//     }
// }
// int main()
// {
//     cin.tie(0)->sync_with_stdio(0);
//     freopen(Input, "r", stdin);
//     freopen(Output, "w", stdout);
//     int n, m, a, b, c;
//     cin >> n >> m;
//     vector<vector<pair<int, int>>> G(n + 1);
//     vector<vector<pair<int, int>>> revG(n + 1);
//     for (int i = 0; i < m; i++)
//     {
//         cin >> a >> b >> c;
//         G[a].push_back({b, c});
//         revG[b].push_back({a, c});
//     }
//     vector<long long> distance_from_Syrjälä(n + 1, oo);
//     vector<long long> distance_from_Metsälä(n + 1, oo);
//     vector<bool> marked(n + 1, false);
//     Dijkstra(G, marked, distance_from_Syrjälä, 1);
//     fill(marked.begin(), marked.end(), false);
//     Dijkstra(revG, marked, distance_from_Metsälä, n);

//     // for (long long distance : distance_from_Syrjälä)
//     // {
//     //     cout << distance << " ";
//     // }

//     // cout << endl;

//     // for (long long distance : distance_from_Metsälä)
//     // {
//     //     cout << distance << " ";
//     // }

//     long long res = oo;
//     for (int vertex = 1; vertex <= n; vertex++)
//     {
//         for (auto [neighbor, weighted] : G[vertex])
//         {
//             if (distance_from_Syrjälä[vertex] != oo && distance_from_Metsälä[neighbor] != oo)
//             {
//                 res = min(distance_from_Syrjälä[vertex] + (long long)(weighted / 2) + distance_from_Metsälä[neighbor], res);
//             }
//         }
//     }
//     cout << res;
//     return 0;
// }
//? Đếm số học sinh
// #include <bits/stdc++.h>
// #define Input "LQDOJ9.in"
// #define Output "LQDOJ9.out"
// #define MAX 1000001
// #define MOD 1000000007
// using namespace std;
// typedef long long ll;
// typedef unsigned long long ull;

// ll u[8] = {0};
// int main()
// {
//     cin.tie(0)->sync_with_stdio(0);
//     freopen(Input, "r", stdin);
//     freopen(Output, "w", stdout);
//     int t;
//     cin >> t;
//     // ll u1, u2, u3, u4, u5, u6, u7;
//     while (t--)
//     {
//         for (int i = 1; i <= 7; i++)
//         {
//             cin >> u[i];
//         }
//         for (int i = 1; i <= 7; i++)
//         {
//             if (u[i] < 0)
//             {
//                 cout << -1 << endl;
//                 break;
//             }
//         }
//         // cin >> u1 >> u2 >> u3 >> u4 >> u5 >> u6 >> u7;
//         ll res = u[1] + u[2] + u[3] - u[4] - u[5] - u[6] + u[7];

//         if (res < 1 ||
//             u[1] < u[4] || u[2] < u[5] || u[3] < u[6] ||
//             u[1] < u[5] || u[2] < u[6] || u[3] < u[4] ||
//             u[1] < u[6] || u[1] < u[7] || u[1] < u[6] || u[1] < u[7] || u[2] < u[6] || u[2] < u[7] || u[3] < u[6] || u[3] < u[7] ||
//             u[4] < u[7] || u[5] < u[7] || u[6] < u[7]
//         )

//         // u1 < u4 || u2 < u5 || u3 < u6 || // đảm bảo u1, u2, u3 >= u4, u5, u6
//         // res < u1 || res < u2 || res < u3 || res < u4 || res < u5 || res < u6 || res < u7)
//         {
//             cout << -1 << endl;
//         }
//         else
//         {
//             cout << res << endl;
//         }
//     }
//     return 0;
// }
//? Vượt Ải
// #include <bits/stdc++.h>
// #define Input "LQDOJ9.in"
// #define Output "LQDOJ9.out"
// #define MAX 100001
// #define MOD 1000000007
// using namespace std;
// using ll = long long;
// int a[MAX] = {0};
// int main()
// {
//     cin.tie(0)->sync_with_stdio(0);
//     freopen(Input, "r", stdin);
//     freopen(Output, "w", stdout);
//     int n, k;
//     cin >> n >> k;
//     ll res = 0LL;
//     ll d = LLONG_MAX;
//     ll Max = LLONG_MIN;
//     for (int i = 0; i < n; i++)
//     {
//         cin >> a[i];
//         if (d > (ll)a[i] - (ll)k && (ll)a[i] - (ll)k >= 0)
//         {
//             d = a[i] - k;
//         }
//         Max = max(Max, (ll)a[i]);
//         res += (ll)a[i];
//     }
//     // cout << "d: " << d << endl;
//     if (d == LLONG_MAX)
//     {
//         res -= Max;
//         cout << res + 1LL;
//     }
//     else
//     {
//         cout << (ll)res - (ll)(k) + 1LL;
//     }
//     return 0;
// }
// //? Kiểm tra chuỗi ngoặc đúng
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
//     cin.tie(NULL);
//     int N;
//     cin >> N;
//     string str;
//     int i = 0;
//     while (N--)
//     {
//         cin >> str;
//         int sz = str.size();
//         i = 0;
//         stack<char> S;
//         if (str[0] == ')' || str[0] == ']' || str[0] == '}')
//         {
//             cout << "NO\n";
//             continue;
//         }
//         S.push(str[i++]);
//         while (!S.empty() && i < sz)
//         {
//             if (str[i] == '(' || str[i] == '[' || str[i] == '{')
//             {
//                 S.push(str[i++]);
//             }
//             else
//             {
//                 if ((str[i] == ')' && S.top() != '(') ||
//                     (str[i] == ']' && S.top() != '[') ||
//                     (str[i] == '}' && S.top() != '{'))
//                 {
//                     cout << "NO\n";
//                     continue;
//                 }
//                 S.pop();
//                 i++;
//             }
//         }
//         cout << "YES\n";
//     }
//     return 0;
// }
#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    cout << n;
    return 0;
}
//? Các thùng nước
// #include <bits/stdc++.h>
// #define Input "LQDOJ9.in"
// #define Output "LQDOJ9.out"
// using namespace std;
// #define MAX 10005
// int N, P, X, Y, Z;
// int parent[MAX] = {0};
// int level[MAX] = {0};
// void Set()
// {
//     for (int i = 1; i <= MAX; i++)
//     {
//         parent[i] = i;
//     }
// }
// int Find(int X)
// {
//     if (X == parent[X])
//         return X;
//     int root = Find(parent[X]);
//     parent[X] = root;
//     return root;
// }
// void Union(int X, int Y)
// {
//     X = Find(X);
//     Y = Find(Y);
//     if (X != Y)
//     {
//         if (level[X] < level[Y])
//         {
//             swap(X, Y);
//         }
//         parent[Y] = X;
//         if (level[X] == level[Y])
//             level[X]++;
//     }
// }
// int main()
// {
//     cin.tie(0)->sync_with_stdio(0);
//     freopen(Input, "r", stdin);
//     freopen(Output, "w", stdout);
//     cin >> P;
//     int Q = P;
//     Set();
//     while (P--)
//     {
//         cin >> X >> Y >> Z;
//         if (Z == 1)
//         {
//             Union(X, Y);
//         }
//         else
//         {
//             cout << (bool)(Find(X) == Find(Y)) << endl;
//         }
//     }
//     // for (int i = 0; i <= Q; i++)
//     // {
//     //     cout << X << " " << parent[X] << endl;
//     // }
//     return 0;
// }
//? CSES - Shortest Routes I | Tuyến đường ngắn nhất I
// //* Just applies only to non-negative weight graph
// #include <bits/stdc++.h>
// #define Input "LQDOJ9.in"
// #define Output "LQDOJ9.out"
// using ld = long double;
// using ll = long long;
// using ull = unsigned long long;
// using uli = unsigned long int;
// #define io                        \
//     ios_base::sync_with_stdio(0); \
//     cin.tie(NULL);                \
//     cout.tie(NULL);

// #define oo LLONG_MAX
// using namespace std;

// void Dijkstra(vector<vector<pair<int, int>>> &Graph, vector<bool> &marked, vector<long long> &distance, int source)
// {
//     priority_queue<pair<long long, int>, vector<pair<long long, int>>, greater<pair<long long, int>>> PQueue;
//     distance[source] = 0LL;
//     PQueue.push({0, source});

//     while (!PQueue.empty())
//     {
//         pair<long long, int> Distance_Vertex = PQueue.top();
//         PQueue.pop();

//         if (marked[Distance_Vertex.second])
//         {
//             continue;
//         }
//         marked[Distance_Vertex.second] = true;
//         for (auto neighbor : Graph[Distance_Vertex.second])
//         {
//             if (Distance_Vertex.first + neighbor.second < distance[neighbor.first])
//             {
//                 distance[neighbor.first] = Distance_Vertex.first + neighbor.second;
//                 PQueue.push({Distance_Vertex.first + neighbor.second, neighbor.first});
//             }
//         }
//     }
// }
// int main()
// {
//     io;
//     freopen(Input, "r", stdin);
//     freopen(Output, "w", stdout);

//     int N, M, u, v, w;
//     cin >> N >> M;
//     vector<vector<pair<int, int>>> Graph(N + 1);
//     vector<bool> marked(N + 1, false);
//     vector<long long> distance(N + 1, oo);
//     for (int i = 0; i < M; i++)
//     {
//         cin >> u >> v >> w;
//         Graph[u].push_back(make_pair(v, w));
//     }
//     Dijkstra(Graph, marked, distance, 1);

//     for (int i = 1; i <= N; i++)
//     {
//         cout << distance[i] << " ";
//     }
//     return 0;
// }
//? COLORBOX (OLP MT&TN 2023 Sơ Loại Không Chuyên)
// #include <bits/stdc++.h>
// #include <unordered_set>
// #define Input "LQDOJ9.in"
// #define Output "LQDOJ9.out"
// #define MAX 1000001
// using namespace std;
// int a[MAX];
// int main()
// {
//     int n;
//     cin >> n;
//     for (int i = 0; i < n; i++)
//     {
//         cin >> a[i];
//     }
//     int Subtask = 1;
//     // Subtask 1
//     if (Subtask == 1)
//     {

//         for (int i = 0; i < n; i++)
//         {

//         }
//     }
//     return 0;
// }
//? kbeauty
// #include <bits/stdc++.h>
// #include <unordered_set>
// #define Input "LQDOJ9.in"
// #define Output "LQDOJ9.out"
// #define MAX_SIZE 500001
// #define MAX_VALUE 1000001

// using namespace std;
// int n, k;
// int a[MAX_SIZE] = {0};
// int frequence[MAX_VALUE] = {0};
// int main()
// {
//     cin.tie(NULL)->sync_with_stdio(0);
//     freopen(Input, "r", stdin);
//     freopen(Output, "w", stdout);
//     cin >> n >> k;
//     for (int i = 0; i < n; i++)
//     {
//         cin >> a[i];
//     }

//     int left = 0;
//     int right = 0;
//     int difference = 0;

//     int res = 0;
//     int resl = 0;
//     int resr = 0;
//     while (right < n)
//     {
//         if (frequence[a[right]] == 0)
//         {
//             difference++;
//         }
//         frequence[a[right]]++;
//         while (difference > k)
//         {
//             frequence[a[left]]--;
//             if (frequence[a[left]] == 0)
//             {
//                 difference--;
//             }
//             left++;
//         }

//         if (right - left + 1 > res)
//         {
//             res = right - left + 1;
//             resl = left;
//             resr = right;
//         }
//         right++;
//     }
//     cout << resl + 1 << " " << resr + 1;
//     return 0;
// }
//? Phần thưởng (HSG11-2023, Hà Tĩnh)
// #include <bits/stdc++.h>
// #define MAX 10001
// using namespace std;
// using ll = long long;
// int n, k;
// int a[MAX];
// void solve()
// {
//     vector<ll> dp(n);
//     if (k == 1)
//     {
//         dp[0] = a[0];
//         dp[1] = max(a[0], a[1]);
//         if (n < 3)
//         {
//             cout << dp[n];
//             return;
//         }
//         for (int i = 2; i < n; i++)
//         {
//             dp[i] = max(dp[i - 1], dp[i - 2] + a[i]);
//         }
//         cout << dp[n - 1];
//     }
//     else
//     {
//         vector<bool> chosen(n);
//         if (a[0] > 0)
//         {
//             chosen[0] = true;
//         }
//         for (int i = 0; i < n; i++)
//         {
//             if (chosen[i])
//             {

//             }
//             else
//             {

//             }
//         }
//         // if ()
//         // dp[0] = max(a[0], 0);
//         // dp[1] = max(dp[0], dp[0] + a[1]);
//     }
// }
// int main()
// {
//     cin.tie(0)->sync_with_stdio(0);
//     cin >> n;
//     for (int i = 0; i < n; i++)
//     {
//         cin >> a[i];
//     }
//     cin >> k;
//     solve();
//     return 0;
// }
//? Trò chơi (HSG11-2023, Hà Tĩnh)
// #include <bits/stdc++.h>
// #define Input "LQDOJ9.in"
// #define Output "LQDOJ9.out"
// #define io                        \
//     ios_base::sync_with_stdio(0); \
//     cin.tie(NULL);

// #define MOD 1000000000
// #define MAX 1000001
// #define OPTIMIZE false
// using namespace std;
// using ll = long long;
// int n, T;
// int A[MAX];
// map<ll, ll> a;
// int binarySearch(int x)
// {
//     int left = 0;
//     int right = n - 1;
//     while (left <= right)
//     {
//         int middle = (left + right) / 2;
//         if (A[middle] == x)
//         {
//             return a[A[middle]];
//         }
//         if (A[middle] < x)
//         {
//             left = middle + 1;
//         }
//         else
//         {
//             right = middle - 1;
//         }
//     }
//     return -1;
// }
// void input()
// {
//     cin >> n;
//     int val;
//     int index = 0;
//     for (int i = 0; i < n; i++)
//     {
//         cin >> val;
//         if (!a[val])
//         {
//             A[index++] = val;
//             a[val] = i + 1;
//         }
//     }
//     n = index;
// }
// void solve()
// {
//     sort(A, A + n);
//     cin >> T;
//     int x;
//     int res = 0;
//     while (T--)
//     {
//         cin >> x;
//         auto find = binarySearch(x);
//         if (find == -1)
//         {
//             cout << find << endl;
//             res--;
//         }
//         else
//         {
//             cout << find << endl;
//             res++;
//         }
//     }
//     if (res > 0)
//     {
//         cout << 1;
//     }
//     else if (res == 0)
//     {
//         cout << 0;
//     }
//     else
//     {
//         cout << -1;
//     }
// }
// int main()
// {
//     cin.tie(0)->sync_with_stdio(0);
//     freopen(Input, "r", stdin);
//     freopen(Output, "w", stdout);
//     input();
//     solve();
//     return 0;
//     return 0;
// }