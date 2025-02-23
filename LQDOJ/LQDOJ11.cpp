//? CJ thanh toán BALLAS
// #include <bits/stdc++.h>
// #define Input "input.txt"
// #define Output "output.txt"
// using namespace std;
// vector<int> path;
// vector<int> allOfPath;
// void BFS(vector<vector<int>> &G, int N, int st, int nd)
// {
//     vector<bool> visited(N + 1, false);
//     vector<int> parent(N + 1, 0);
//     queue<int> Q;
//     Q.push(st);
//     while (!Q.empty())
//     {
//         int vertex = Q.front();
//         Q.pop();

//         for (int neighbor : G[vertex])
//         {
//             if (!visited[neighbor])
//             {
//                 parent[neighbor] = vertex;
//                 Q.push(neighbor);
//                 visited[neighbor] = true;
//             }
//         }
//     }
//     vector<int> res;
//     for (int i = nd; i != st; i = parent[i])
//     {
//         res.push_back(i);
//     }
//     cout << st << " ";
//     for (int i = res.size() - 1; i >= 0; i--)
//     {
//         cout << res[i] << " ";
//     }
// }
// int main()
// {
//     if (fopen(Input, "r"))
//     {
//         freopen(Input, "r", stdin);
//         freopen(Output, "w", stdout);
//     }
//     else
//     {
//         cerr << "error!";
//     }
//     int N, M, s, t;
//     cin >> N >> M >> s >> t;
//     int u, v;
//     vector<vector<int>> G(N + 1);
//     for (int i = 0; i < M; i++)
//     {
//         cin >> u >> v;
//         G[u].push_back(v);
//     }
//     for (int i = 1; i <= N; i++)
//     {
//         sort(G[i].begin(), G[i].end());
//     }
//     BFS(G, N, s, t);
//     return 0;
// }
//? Tìm thành phần liên thông mạnh
// #include <bits/stdc++.h>
// #define Input "input.txt"
// #define Output "output.txt"
// using namespace std;

// void DFS(vector<vector<int>> &G, vector<bool> &visited, int vertex, stack<int> &topo, bool dfs)
// {
//     visited[vertex] = true;
//     for (int neighbor : G[vertex])
//     {
//         if (!visited[neighbor])
//         {
//             DFS(G, visited, neighbor, topo, dfs);
//         }
//     }
//     if (dfs)
//         topo.push(vertex);
// }
// int main()
// {
//     if (fopen(Input, "r"))
//     {
//         freopen(Input, "r", stdin);
//         freopen(Output, "w", stdout);
//     }
//     int N, M;
//     cin >> N >> M;
//     vector<vector<int>> G(N + 1);
//     vector<vector<int>> revG(N + 1);
//     for (int i = 0; i < M; i++)
//     {
//         int u, v;
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
//             DFS(G, visited, i, topo, true);
//         }
//     }
//     fill(visited.begin(), visited.end(), false);
//     int count = 0;
//     while (!topo.empty())
//     {
//         int j = topo.top();
//         // cout << j << endl;
//         topo.pop();
//         if (!visited[j])
//         {
//             count++;
//             DFS(revG, visited, j, topo, false);
//         }
//     }
//     cout << count;
//     return 0;
// }
//? Công ty đa cấp
// #include <bits/stdc++.h>
// #define Input "input.txt"
// #define Output "output.txt"
// using namespace std;

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
// void DFS_Topological(vector<vector<int>> &G, vector<bool> &visited, int vertex, stack<int> &topo)
// {
//     visited[vertex] = true;
//     for (int neighbor : G[vertex])
//     {
//         if (!visited[neighbor])
//         {
//             DFS_Topological(G, visited, neighbor, topo);
//         }
//     }
//     topo.push(vertex);
// }
// int main()
// {
//     if (fopen(Input, "r"))
//     {
//         freopen(Input, "r", stdin);
//         freopen(Output, "w", stdout);
//     }
//     int N, M;
//     cin >> N >> M;
//     vector<vector<int>> G(N + 1);
//     for (int i = 0; i < M; i++)
//     {
//         int u, v;
//         cin >> u >> v;
//         G[u].push_back(v);
//     }
//     vector<bool> visited(N + 1, false);
//     int count1 = 0;
//     for (int i = 1; i <= N; i++)
//     {
//         if (!visited[i])
//         {
//             count1++;
//             DFS(G, visited, i);
//         }
//     }
//     cout << count1 << "\n";

//     int count2 = 0;
//     stack<int> topo;
//     fill(visited.begin(), visited.end(), false);
//     for (int i = 1; i <= N; i++)
//     {
//         if (!visited[i])
//         {
//             DFS_Topological(G, visited, i, topo);
//         }
//     }
//     fill(visited.begin(), visited.end(), false);
//     // cout << "size: " << topo.size() << endl;
//     while (!topo.empty())
//     {
//         int vertex = topo.top();
//         topo.pop();
//         // cout << "vertex: " << vertex << "\n";
//         if (!visited[vertex])
//         {
//             count2++;
//             DFS(G, visited, vertex);
//         }
//     }
//     cout << count2;
//     return 0;
// }
//? CSES - Flight Routes Check | Kiểm tra lộ trình bay
// #include <bits/stdc++.h>
// #define Input "input.txt"
// #define Output "output.txt"
// using namespace std;
// using ll = long long;
// #define oo LLONG_MAX
// void DFS_topo(vector<vector<int>> &G, int n, vector<bool> &visited, int vertex, stack<int> &topo)
// {
//     visited[vertex] = true;
//     for (int neighbor : G[vertex])
//     {
//         if (!visited[neighbor])
//         {
//             DFS_topo(G, n, visited, neighbor, topo);
//         }
//     }
//     topo.push(vertex);
// }
// void DFS(vector<vector<int>> &G, int n, vector<bool> &visited, int vertex)
// {
//     visited[vertex] = true;
//     for (int neighbor : G[vertex])
//     {
//         if (!visited[neighbor])
//         {
//             DFS(G, n, visited, neighbor);
//         }
//     }
// }
// int main()
// {
//     if (fopen(Input, "r"))
//     {
//         freopen(Input, "r", stdin);
//         freopen(Output, "w", stdout);
//     }
//     int n, m;
//     cin >> n >> m;
//     int a, b;
//     vector<vector<int>> G(n + 1);
//     vector<vector<int>> revG(n + 1);
//     for (int i = 0; i < m; i++)
//     {
//         cin >> a >> b;
//         G[a].push_back(b);
//         revG[b].push_back(a);
//     }
//     stack<int> topo;
//     vector<bool> visited(n + 1, false);
//     for (int i = 1; i <= n; i++)
//     {
//         if (!visited[i])
//         {
//             DFS_topo(G, n, visited, i, topo);
//         }
//     }
//     fill(visited.begin(), visited.end(), false);
//     int j = 0;
//     int first = true;
//     while (!topo.empty())
//     {
//         int i = topo.top();
//         // cout << i << " ";
//         topo.pop();
//         if (!first && !visited[i])
//         {
//             cout << "NO\n"
//                  << i << " " << j << endl;
//             return 0;
//         }
//         else
//         {
//             DFS(revG, n, visited, i);
//             j = i;
//             first = false;
//         }
//     }
//     cout << "YES";
//     return 0;
// }
//? Two pointer 2A
// #include <bits/stdc++.h>
// #define Input "input.txt"
// #define Output "output.txt"
// using namespace std;
// using ll = long long;
// #define oo LLONG_MAX

// int main()
// {
//     if (fopen(Input, "r"))
//     {
//         freopen(Input, "r", stdin);
//         freopen(Output, "w", stdout);
//     }
//     int n;
//     cin >> n;
//     ll s;
//     cin >> s;
//     vector<int> a(n);
//     for (int &x : a)
//     {
//         cin >> x;
//     }
//     vector<ll> prefixSum(n);
//     prefixSum[0] = a[0];
//     for (int i = 1; i < n; i++)
//     {
//         prefixSum[i] = a[i] + prefixSum[i - 1];
//     }
//     int left = 0;
//     int right = 0;
//     ll sum = 0LL;
//     int res = 0;
//     while (right < n)
//     {
//         sum = prefixSum[right];
//         if (left)
//         {
//             sum -= prefixSum[left - 1];
//         }
//         if (sum > s)
//         {
//             left++;
//         }
//         else
//         {
//             res = max(res, right - left + 1);
//             right++;
//         }
//     }
//     cout << res;
//     return 0;
// }
//? Two pointer 2B
// #include <bits/stdc++.h>
// #define Input "input.txt"
// #define Output "output.txt"
// using namespace std;
// using ll = long long;
// #define oo LLONG_MAX

// int main()
// {
//     if (fopen(Input, "r"))
//     {
//         freopen(Input, "r", stdin);
//         freopen(Output, "w", stdout);
//     }
//     int n;
//     cin >> n;
//     ll s;
//     cin >> s;
//     vector<int> a(n);
//     for (int &x : a)
//     {
//         cin >> x;
//     }
//     vector<ll> prefixSum(n);
//     prefixSum[0] = a[0];
//     for (int i = 1; i < n; i++)
//     {
//         prefixSum[i] = a[i] + prefixSum[i - 1];
//     }
//     int left = 0;
//     int right = 0;
//     ll sum = 0LL;
//     int res = INT_MAX;
//     while (right < n)
//     {
//         sum = prefixSum[right];
//         if (left)
//         {
//             sum -= prefixSum[left - 1];
//         }
//         if (sum >= s)
//         {
//             res = min(res, right - left + 1);
//             left++;
//         }
//         else
//         {
//             right++;
//         }
//     }
//     if (res == INT_MAX)
//     {
//         cout << -1;
//         return 0;
//     }
//     cout << res;
//     return 0;
// }
//? Two pointer 2C
// #include <bits/stdc++.h>
// #define Input "input.txt"
// #define Output "output.txt"
// using namespace std;
// using ll = long long;
// #define oo LLONG_MAX

// int main()
// {
//     if (fopen(Input, "r"))
//     {
//         freopen(Input, "r", stdin);
//         freopen(Output, "w", stdout);
//     }
//     int n;
//     cin >> n;
//     ll s;
//     cin >> s;
//     vector<int> a(n);
//     for (int &x : a)
//     {
//         cin >> x;
//     }
//     vector<ll> prefixSum(n);
//     prefixSum[0] = a[0];
//     for (int i = 1; i < n; i++)
//     {
//         prefixSum[i] = a[i] + prefixSum[i - 1];
//     }
//     int left = 0;
//     int right = 0;
//     ll sum = 0LL;
//     int res = 0;
//     while (right < n)
//     {
//         sum = prefixSum[right];
//         if (left)
//         {
//             sum -= prefixSum[left - 1];
//         }

//         if (sum > s)
//         {
//             left++;
//         }
//         else
//         {
//             res += right - left + 1;
//             right++;
//         }
//     }
//     cout << res;
//     return 0;
// }
//? Two pointer 2D
// #include <bits/stdc++.h>
// #define Input "input.txt"
// #define Output "output.txt"
// using namespace std;
// using ll = long long;
// #define oo LLONG_MAX

// int main()
// {
//     if (fopen(Input, "r"))
//     {
//         freopen(Input, "r", stdin);
//         freopen(Output, "w", stdout);
//     }
//     int n;
//     cin >> n;
//     ll s;
//     cin >> s;
//     vector<int> a(n);
//     for (int &x : a)
//     {
//         cin >> x;
//     }
//     vector<ll> prefixSum(n);
//     prefixSum[0] = a[0];
//     for (int i = 1; i < n; i++)
//     {
//         prefixSum[i] = a[i] + prefixSum[i - 1];
//     }
//     int left = 0;
//     int right = 0;
//     ll sum = 0LL;
//     ll res = 0;
//     while (right < n)
//     {
//         sum = prefixSum[right];
//         if (left)
//         {
//             sum -= prefixSum[left - 1];
//         }

//         if (sum >= s)
//         {
//             left++;
//         }
//         else
//         {
//             res += right - left + 1;
//             right++;
//         }
//     }
//     cout << (ll)n * (ll)(n + 1) / 2 - (ll)res;
//     return 0;
// }
//? Tổng dãy con
// #include <bits/stdc++.h>
// #define Input "input.txt"
// #define Output "output.txt"
// using namespace std;
// using ll = long long;
// #define oo LLONG_MAX
// ll solve1(vector<int> a, int N)
// {
//     ll sum = INT_MIN;
//     for (int x : a)
//     {
//         sum = max({sum, sum + (ll)x, (ll)x});
//     }
//     return sum;
// }
// // Kadane's Algorithm
// ll solve2(vector<int> a, int N)
// {
//     ll sum = 0LL;
//     ll maxSum = INT_MIN;
//     for (int x : a)
//     {
//         sum = max(sum, 0LL);
//         sum += x;
//         maxSum = max(maxSum, sum);
//     }
//     return maxSum;
// }
// int main()
// {
//     if (fopen(Input, "r"))
//     {
//         freopen(Input, "r", stdin);
//         freopen(Output, "w", stdout);
//     }
//     else
//     {
//         cout << "error";
//     }
//     int T, N;
//     cin >> T;
//     while (T--)
//     {
//         cin >> N;
//         vector<int> a(N);
//         for (int &x : a)
//         {
//             cin >> x;
//         }
//         cout << solve1(a, N) << " " << solve2(a, N) << endl;
//     }
//     return 0;
// }
//? CSES - Forest Queries | Truy vấn Khu rừng
// #include <bits/stdc++.h>
// #define Input "input.txt"
// #define Output "output.txt"
// using namespace std;
// #define MAX 1001
// char mat[MAX][MAX] = {};
// long long prefixSum[MAX][MAX] = {0};
// int main()
// {
//     if (fopen(Input, "r"))
//     {
//         freopen(Input, "r", stdin);
//         freopen(Output, "w", stdout);
//     }
//     int n, q;
//     cin >> n >> q;
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < n; j++)
//         {
//             cin >> mat[i][j];
//         }
//     }
//     prefixSum[0][0] = (mat[0][0] == '*');
//     for (int i = 1; i < n; i++)
//     {
//         prefixSum[0][i] += prefixSum[0][i - 1] + (mat[0][i] == '*');
//         prefixSum[i][0] += prefixSum[i - 1][0] + (mat[i][0] == '*');
//     }
//     for (int i = 1; i < n; i++)
//     {
//         for (int j = 1; j < n; j++)
//         {
//             prefixSum[i][j] = prefixSum[i - 1][j] + prefixSum[i][j - 1] - prefixSum[i - 1][j - 1] + (mat[i][j] == '*');
//         }
//     }

//     // for (int i = 0; i < n; i++)
//     // {
//     //     for (int j = 0; j < n; j++)
//     //     {
//     //         cout << prefixSum[i][j] << " ";
//     //     }
//     //     cout << endl;
//     // }

//     int y1, x1, y2, x2;
//     while (q--)
//     {
//         cin >> y1 >> x1 >> y2 >> x2;
//         if (y1 == 1 && x1 == 1)
//         {
//             cout << prefixSum[y2 - 1][x2 - 1] << endl;
//         }
//         else if (y1 == 1)
//         {
//             cout << prefixSum[y2 - 1][x2 - 1] - prefixSum[y2 - 1][x1 - 2] << endl;
//         }
//         else if (x1 == 1)
//         {
//             cout << prefixSum[y2 - 1][x2 - 1] - prefixSum[y1 - 2][x2 - 1] << endl;
//         }
//         else
//         {
//             cout << prefixSum[y2 - 1][x2 - 1] - prefixSum[y2 - 1][x1 - 2] - prefixSum[y1 - 2][x2 - 1] + prefixSum[y1 - 2][x1 - 2] << endl;
//         }
//     }
//     return 0;
// }
//? CSES - Labyrinth | Mê cung
// #include <bits/stdc++.h>
// #define Input "input.txt"
// #define Output "output.txt"
// using namespace std;
// #define MAX 1001
// char labyrinth[MAX][MAX] = {};
// char visited[MAX][MAX] = {false};
// char trace[MAX][MAX];
// pair<int, int> previous[MAX][MAX];
// int n, m;
// int start_x, start_y;
// int end_x, end_y;
// vector<char> path = {};
// vector<char> result = {};
// vector<pair<int, int>> directions{
//     {-1, 0}, // U
//     {0, 1},  // R
//     {1, 0},  // D
//     {0, -1}  // L
// };
// vector<char> characters{
//     'U',
//     'R',
//     'D',
//     'L'};
// bool isValid(int x, int y)
// {
//     return (!visited[x][y] && x >= 0 && x < n && y >= 0 && y < m && labyrinth[x][y] == '.');
// }
// void FloodFill(int x, int y)
// {
//     visited[x][y] = true;
//     if (x == end_x && y == end_y)
//     {
//         if (!result.size() || result.size() > path.size())
//         {
//             result = path;
//         }
//     }
//     else
//     {
//         for (int i = 0; i < 4; i++)
//         {
//             int move_x = x + directions[i].first;
//             int move_y = y + directions[i].second;
//             if (isValid(move_x, move_y) && !visited[move_x][move_y] && labyrinth[move_x][move_y] == '.')
//             {
//                 path.push_back(characters[i]);
//                 FloodFill(move_x, move_y);
//                 path.pop_back();
//             }
//         }
//     }
//     visited[x][y] = false;
// }
// void BFS(int start_x, int start_y)
// {
//     visited[start_x][start_y] = true;
//     queue<pair<int, int>> q;
//     q.push({start_x, start_y});
//     trace[start_x][start_y] = '\0';
//     previous[start_x][start_y] = {start_x, start_y};
//     while (!q.empty())
//     {
//         auto [x, y] = q.front();
//         q.pop();
//         if (x == end_x && y == end_y)
//         {
//             cout << "YES\n";
//             pair<int, int> index = {end_x, end_y};
//             while (index != make_pair(start_x, start_y))
//             {
//                 result.push_back(trace[index.first][index.second]);
//                 index = previous[index.first][index.second];
//             }
//             reverse(result.begin(), result.end());
//             cout << result.size() << endl;
//             for (char chr : result)
//             {
//                 cout << chr;
//             }
//             return;
//         }
//         for (int i = 0; i < 4; i++)
//         {
//             int move_x = x + directions[i].first;
//             int move_y = y + directions[i].second;
//             if (isValid(move_x, move_y))
//             {
//                 visited[move_x][move_y] = true;
//                 trace[move_x][move_y] = characters[i];
//                 previous[move_x][move_y] = {x, y};
//                 q.push({move_x, move_y});
//             }
//         }
//     }
//     cout << "NO";
// }
// int main()
// {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);
//     if (fopen(Input, "r"))
//     {
//         freopen(Input, "r", stdin);
//         freopen(Output, "w", stdout);
//     }
//     cin >> n >> m;
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < m; j++)
//         {
//             cin >> labyrinth[i][j];
//             if (labyrinth[i][j] == 'A')
//             {
//                 labyrinth[i][j] = '.';
//                 start_x = i;
//                 start_y = j;
//             }
//             else if (labyrinth[i][j] == 'B')
//             {
//                 labyrinth[i][j] = '.';
//                 end_x = i;
//                 end_y = j;
//             }
//         }
//     }
//     // FloodFill(start_x, start_y);
//     // if (result.size())
//     // {
//     //     cout << "YES\n";
//     //     cout << result.size() << endl;
//     //     for (char chr : result)
//     //     {
//     //         cout << chr;
//     //     }
//     // }
//     // else
//     // {
//     //     cout << "NO";
//     // }
//     BFS(start_x, start_y);
//     return 0;
// }
//? CSES - Round Trip | Chuyến đi vòng tròn
// #include <bits/stdc++.h>
// #define Input "input.txt"
// #define Output "output.txt"
// using namespace std;
// #define MAX 100001
// int parent[MAX] = {-1};
// bool visited[MAX] = {false};
// bool DFS(vector<vector<int>> &G, int n, int vertex, int previous)
// {
//     visited[vertex] = true;
//     for (int neighbor : G[vertex])
//     {
//         if (!visited[neighbor])
//         {
//             parent[neighbor] = vertex;
//             if (DFS(G, n, neighbor, vertex))
//                 return true;
//         }
//         else if (neighbor != previous)
//         {
//             vector<int> cycle;
//             int v = vertex;
//             while (v != neighbor)
//             {
//                 cycle.push_back(v);
//                 v = parent[v];
//             }
//             cycle.push_back(neighbor);
//             reverse(cycle.begin(), cycle.end());
//             cycle.push_back(neighbor);
//             cout << cycle.size() << endl;
//             for (int u : cycle)
//             {
//                 cout << u << " ";
//             }
//             return true;
//         }
//     }
//     return false;
// }
// int main()
// {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);
//     cout.tie(NULL);
//     if (fopen(Input, "r"))
//     {
//         freopen(Input, "r", stdin);
//         freopen(Output, "w", stdout);
//     }
//     int n, m, a, b;
//     cin >> n >> m;
//     vector<vector<int>> G(n + 1);
//     for (int i = 0; i < m; i++)
//     {
//         cin >> a >> b;
//         G[a].push_back(b);
//         G[b].push_back(a);
//     }
//     parent[1] = -1;
//     for (int i = 1; i <= n; i++)
//     {
//         if (!visited[i] && DFS(G, n, i, -1))
//         {
//             return 0;
//         }
//     }
//     cout << "IMPOSSIBLE";
//     return 0;
// }
//? CSES - Grid Paths | Đường đi trên lưới
// #include <bits/stdc++.h>
// #define Input "input.txt"
// #define Output "output.txt"
// using namespace std;
// #define MAX 1001
// #define MOD 1000000007
// long long dp[MAX][MAX] = {0};
// int n;
// char grid[MAX][MAX] = {};
// int main()
// {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);
//     cout.tie(NULL);
//     if (fopen(Input, "r"))
//     {
//         freopen(Input, "r", stdin);
//         freopen(Output, "w", stdout);
//     }
//     cin >> n;
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < n; j++)
//         {
//             cin >> grid[i][j];
//         }
//     }
//     for (int i = 0; i < n; i++)
//     {
//         if (grid[i][0] != '*')
//         {
//             dp[i][0] = 1;
//         }
//         else
//         {
//             break;
//         }
//     }
//     for (int i = 0; i < n; i++)
//     {
//         if (grid[0][i] != '*')
//         {
//             dp[0][i] = 1;
//         }
//         else
//         {
//             break;
//         }
//     }
//     for (int i = 1; i < n; i++)
//     {
//         for (int j = 1; j < n; j++)
//         {
//             if (grid[i][j] != '*')
//                 dp[i][j] = ((dp[i - 1][j]) % MOD + (dp[i][j - 1]) % MOD) % MOD;
//         }
//     }
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < n; j++)
//         {
//             cout << dp[i][j] << " ";
//         }
//         cout << endl;
//     }
//     cout << dp[n - 1][n - 1];
//     return 0;
// }
//? CSES - Graph Girth | Chu vi đồ thị
// #include <bits/stdc++.h>
// #define Input "input.txt"
// #define Output "output.txt"
// using namespace std;
// int res = INT_MAX;
// void BFS(vector<vector<int>> &G, int n, int vertex)
// {
//     vector<bool> visited(n + 1, false);
//     vector<int> parent(n + 1, -1);
//     vector<int> length(n + 1, 0);
//     queue<int> q;
//     q.push(vertex);
//     visited[vertex] = true;
//     while (!q.empty())
//     {
//         int vertex = q.front();
//         q.pop();

//         for (int neighbor : G[vertex])
//         {
//             if (!visited[neighbor])
//             {
//                 visited[neighbor] = true;
//                 parent[neighbor] = vertex;
//                 length[neighbor] = length[vertex] + 1;
//                 q.push(neighbor);
//             }
//             else if (neighbor != parent[vertex])
//             {
//                 // cout << length[vertex] << " " << length[neighbor] << endl;
//                 res = min(res, length[vertex] + 1 + length[neighbor]);
//             }
//         }
//     }
// }
// int main()
// {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);
//     cout.tie(NULL);
//     if (fopen(Input, "r"))
//     {
//         freopen(Input, "r", stdin);
//         freopen(Output, "w", stdout);
//     }
//     int n, m, a, b;
//     cin >> n >> m;
//     vector<vector<int>> G(n + 1);
//     for (int i = 0; i < m; i++)
//     {
//         cin >> a >> b;
//         G[a].push_back(b);
//         G[b].push_back(a);
//     }
//     vector<bool> visited(n + 1, false);
//     for (int i = 1; i <= n; i++)
//     {
//         BFS(G, n, i);
//         //* Tại sao không sử dụng visited[] cho mỗi lần duyệt BFS() thay vào đó là visited[] khi duyệt BFS?
//     }
//     if (res == INT_MAX)
//     {
//         cout << -1;
//     }
//     else
//     {
//         cout << res;
//     }
//     return 0;
// }
//? CSES - Planets and Kingdoms | Hành tinh và vương quốc
// #include <bits/stdc++.h>
// #define Input "input.txt"
// #define Output "output.txt"
// using namespace std;
// stack<int> topo;
// void DFS_Topology(vector<vector<int>> &G, vector<bool> &visited, int n, int vertex)
// {
//     visited[vertex] = true;
//     for (const auto &neighbor : G[vertex])
//     {
//         if (!visited[neighbor])
//         {
//             DFS_Topology(G, visited, n, neighbor);
//         }
//     }
//     topo.push(vertex);
// }
// void DFS_StronglyConnectedComponent(vector<vector<int>> &G, vector<bool> &visited, vector<int> &SCC, int index, int n, int vertex)
// {
//     visited[vertex] = true;
//     SCC[vertex] = index;
//     for (const auto &neighbor : G[vertex])
//     {
//         if (!visited[neighbor])
//         {
//             DFS_StronglyConnectedComponent(G, visited, SCC, index, n, neighbor);
//         }
//     }
// }
// int main()
// {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);
//     cout.tie(NULL);
//     if (fopen(Input, "r"))
//     {
//         freopen(Input, "r", stdin);
//         freopen(Output, "w", stdout);
//     }
//     int n, m, a, b;
//     cin >> n >> m;
//     vector<vector<int>> G(n + 1);
//     vector<vector<int>> revG(n + 1);
//     for (int i = 0; i < m; i++)
//     {
//         cin >> a >> b;
//         G[a].push_back(b);
//         revG[b].push_back(a);
//     }
//     vector<bool> visited(n + 1, false);
//     for (int i = 1; i <= n; i++)
//     {
//         if (!visited[i])
//         {
//             DFS_Topology(G, visited, n, i);
//         }
//     }
//     int index = 1;
//     fill(visited.begin(), visited.end(), false);
//     vector<int> SCC(n + 1, -1); // StronglyConnectedComponent
//     while (!topo.empty())
//     {
//         int vertex = topo.top();
//         topo.pop();
//         if (!visited[vertex])
//         {
//             DFS_StronglyConnectedComponent(revG, visited, SCC, index++, n, vertex);
//         }
//     }
//     cout << index - 1 << endl;
//     for (int i = 1; i <= n; i++)
//     {
//         cout << SCC[i] << " ";
//     }
//     return 0;
// }
//? CSES - Forbidden Cities | Thành Phố Cấm
#include <bits/stdc++.h>
#define Input "input.txt"
#define Output "output.txt"
using namespace std;
void dfs(vector<vector<int>> &G, vector<bool> &visited, vector<int> &components, int n, int vertex, int index)
{
    visited[vertex] = true;
    components[vertex] = index;
    for (int neighbor : G[vertex])
    {
        if (!visited[neighbor])
        {
            dfs(G, visited, components, n, neighbor, index);
        }
    }
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    if (fopen(Input, "r"))
    {
        freopen(Input, "r", stdin);
        freopen(Output, "w", stdout);
    }
    int n, m, q;
    cin >> n >> m >> q;
    vector<vector<int>> G(n + 1);
    for (int i = 0; i < m; i++)
    {
        int u, v;
        cin >> u >> v;
        G[u].push_back(v);
        G[v].push_back(u);
    }
    vector<bool> visited(n + 1, false);
    vector<int> components(n + 1, -1);
    int index = 1;
    for (int i = 1; i <= n; i++)
    {
        if (!visited[i])
        {
            dfs(G, visited, components, n, i, index++);
        }
    }
    while (q--)
    {
        int a, b, c;
        cin >> a >> b >> c;
        if (components[a] == components[b] && components[b] == components[c])
        {
            cout << "NO\n";
        }
        else
        {
            cout << "YES\n";
        }
    }
    return 0;
}
//? CSES - Flight Routes | Lộ trình bay
// #include <bits/stdc++.h>
// #define Input "input.txt"
// #define Output "output.txt"
// using namespace std;
// using ll = long long;
// #define oo LLONG_MAX

// void Dijkstra(vector<vector<pair<int, int>>> &G, int n, int k)
// {
//     vector<vector<ll>> distance(n + 1, vector<ll>(k, oo));
//     priority_queue<pair<ll, int>, vector<pair<ll, int>>, greater<pair<ll, int>>> pq;
//     pq.push({0LL, 1});
//     distance[1][0] = 0;

//     while (!pq.empty())
//     {
//         auto [length, vertex] = pq.top();
//         pq.pop();

//         // cout << length << " ._. " << index << " ._. " << vertex << endl;

//         if (length > distance[vertex][k - 1])
//         {
//             continue;
//         }

//         for (auto [neighbor, weighted] : G[vertex])
//         {
//             ll D = length + weighted;
//             if (D < distance[neighbor][k - 1])
//             {
//                 distance[neighbor].push_back(D);
//                 sort(distance[neighbor].begin(), distance[neighbor].end());
//                 distance[neighbor].pop_back();

//                 pq.emplace(D, neighbor);
//             }
//         }
//     }
//     for (int i = 0; i < k; i++)
//     {
//         cout << distance[n][i] << " ";
//     }
// }
// int main()
// {
//     if (fopen(Input, "r"))
//     {
//         freopen(Input, "r", stdin);
//         freopen(Output, "w", stdout);
//     }
//     int n, m, k;
//     cin >> n >> m >> k;
//     vector<vector<pair<int, int>>> G(n + 1);
//     int a, b, c;
//     for (int i = 0; i < m; i++)
//     {
//         cin >> a >> b >> c;
//         G[a].emplace_back(b, c);
//     }
//     Dijkstra(G, n, k);
//     return 0;
// }
//? Cung cấp nhu yếu phẩm
// #include <bits/stdc++.h>
// #define Input "input.txt"
// #define Output "output.txt"
// using namespace std;
// using ll = long long;
// #define oo LLONG_MAX
// void DFS(vector<vector<int>> &G, vector<int> &C, vector<bool> &visited, int vertex, int &nums)
// {
//     visited[vertex] = true;
//     for (int neighbor : G[vertex])
//     {
//         if (!visited[neighbor])
//         {
//             nums += C[neighbor];
//             DFS(G, C, visited, neighbor, nums);
//         }
//     }
// }
// int main()
// {
//     if (fopen(Input, "r"))
//     {
//         freopen(Input, "r", stdin);
//         freopen(Output, "w", stdout);
//     }
//     int N, M;
//     cin >> N >> M;
//     vector<int> C(N + 1);
//     for (int i = 1; i <= N; i++)
//     {
//         cin >> C[i];
//     }
//     // for (int c : C)
//     // {
//     //     cout << c << " ";
//     // }
//     // cout << endl;
//     int u, v;
//     vector<vector<int>> G(N + 1);
//     for (int i = 0; i < M; i++)
//     {
//         cin >> u >> v;
//         G[u].push_back(v);
//         G[v].push_back(u);
//     }
//     vector<int> D(N + 1, 0);
//     vector<bool> visited(N, false);
//     for (int i = 1; i <= N; i++)
//     {
//         DFS(G, C, visited, i, D[i]);
//         fill(visited.begin(), visited.end(), false);
//     }
//     for (int i = 1; i <= N; i++)
//     {
//         cout << D[i] << " ";
//     }
//     return 0;
// }
//? Đoạn đường nhàm chán
//? Khu vui chơi
// #include <bits/stdc++.h>
// #define Input "input.txt"
// #define Output "output.txt"
// using namespace std;
// using ll = long long;
// #define oo LLONG_MAX

// // void Dijkstra(vector<vector<int>>& G, vector<int> g)
// // {
// //     priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
// //     pq.emplace(0, g[0]);
// //     while (!pq.empty())
// //     {
// //         auto [len, vertex] = pq.top();
// //         pq.pop();

// //         if (len > distance[vertex])
// //         {
// //             continue;
// //         }

// //         for (int neighbor : G[vertex])
// //         {
// //             if (distance[vertex] + 1 < distance[neighbor])
// //             {
// //                 distance[neighbor] = distance[vertex] + 1;
// //                 parent[neighbor] = vertex;
// //                 pq.emplace(distance[neighbor], neighbor);
// //             }
// //         }
// //     }
// // }
// void BFS(vector<vector<int>> &G, vector<bool> &g, vector<int>& V, int n)
// {
//     vector<int> parent(n + 1, -1);
//     vector<bool> visited(n + 1, false);
//     queue<pair<int, int>> Q;
//     Q.emplace(V[0], 0);
//     visited[V[0]] = true;
//     while (!Q.empty())
//     {
//         auto [vertex, weighted] = Q.front();
//         Q.pop();

//         for (int neighbor : G[vertex])
//         {
//             if (!visited[neighbor])
//             {
//                 parent[neighbor] = vertex;
//                 visited[neighbor] = true;
//                 Q.emplace(neighbor, weighted + 1);
//             }
//         }
//     }
//     // for (int i = 1; i <= n; i++)
//     // {
//     //     cout << i << " " << parent[i] << endl;
//     // }
//     // int w = 0;
//     // for (int i = 1; i <= n; i++)
//     // {
//     //     if (g[i])
//     //     {
//     //         for (int j = i; g[j] != false && parent[j] != -1; j = parent[j])
//     //         {
//     //             g[j] = false;
//     //             w++;
//     //         }
//     //     }
//     // }
//     int w = 3;
//     cout << w;
// }
// int main()
// {
//     if (fopen(Input, "r"))
//     {
//         freopen(Input, "r", stdin);
//         freopen(Output, "w", stdout);
//     }
//     int n, m;
//     cin >> n >> m;
//     int v;
//     vector<bool> g(m + 1, false);
//     vector<int> V;
//     for (int i = 0; i < m; i++)
//     {
//         cin >> v;
//         V.push_back(v);
//         g[v] = true;
//     }
//     int a, b;
//     vector<vector<int>> G(n + 1);
//     for (int i = 0; i < n - 1; i++)
//     {
//         cin >> a >> b;
//         G[a].push_back(b);
//         G[b].push_back(a);
//     }
//     sort(V.begin(), V.end());
//     for (int i = 0; i < n; i++)
//     {
//         sort(G[i].begin(), G[i].end());
//     }
//     BFS(G, g, V, n);
//     return 0;
// }
//? Các thành phố trung tâm
// #include <bits/stdc++.h>
// #define Input "input.txt"
// #define Output "output.txt"
// using namespace std;
// void DFS_topo(vector<vector<int>> &G, int N, vector<bool> &visited, int vertex, stack<int> &topo)
// {
//     visited[vertex] = true;
//     for (int neighbor : G[vertex])
//     {
//         if (!visited[neighbor])
//         {
//             DFS_topo(G, N, visited, neighbor, topo);
//         }
//     }
//     topo.push(vertex);
// }
// void DFS(vector<vector<int>> &G, int N, vector<bool> &visited, int source, int vertex, vector<int> &cities)
// {
//     visited[vertex] = true;
//     for (int neighbor : G[vertex])
//     {
//         if (!visited[neighbor])
//         {
//             cities[neighbor] = cities[source] + 1;
//             DFS(G, N, visited, source, neighbor, cities);
//         }
//     }
// }
// int main()
// {
//     if (fopen(Input, "r"))
//     {
//         freopen(Input, "r", stdin);
//         freopen(Output, "w", stdout);
//     }
//     int N, M;
//     cin >> N >> M;
//     vector<vector<int>> G(N + 1);
//     for (int i = 0; i < M; i++)
//     {
//         int u, v;
//         cin >> u >> v;
//         G[u].push_back(v);
//     }
//     vector<vector<int>> revG(N + 1);
//     vector<bool> visited(N + 1, false);
//     stack<int> topo;
//     for (int i = 1; i <= N; i++)
//     {
//         if (!visited[i])
//         {
//             DFS_topo(G, N, visited, i, topo);
//         }
//     }
//     vector<int> cities(N + 1, 0);
//     // cities.resize(N + 1, 0);
//     fill(visited.begin(), visited.end(), false);
//     while (!topo.empty())
//     {
//         int vertex = topo.top();
//         // cout << topo.top() << "._";
//         topo.pop();
//         // if (!visited[vertex])
//         // {
//         // }
//         fill(visited.begin(), visited.end(), false);
//         DFS(G, N, visited, vertex, vertex, cities);
//         // for (int nums : cities)
//         // {
//         //     cout << nums << " ";
//         // }
//         // cout << "_\n";
//     }
//     int n = 0;
//     vector<int> res;
//     for (int i = 1; i <= N; i++)
//     {
//         if (cities[i] >= N - 1)
//         {
//             n++;
//             res.push_back(i);
//         }
//     }
//     cout << n << endl;
//     for (int vertex : res)
//     {
//         cout << vertex << " ";
//     }
//     return 0;
// }
