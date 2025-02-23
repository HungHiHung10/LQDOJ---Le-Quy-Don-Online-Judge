//? Định thức bậc 3
// #include <bits/stdc++.h>
// #define input "LQDOJ10.in"
// #define output "LQDOJ10.out"
// using namespace std;
// using ll = long long;
// #define io                        \
//     ios_base::sync_with_stdio(0); \
//     cin.tie(NULL);
// #define MOD 2004010501
// ll Module(ll a, ll b, ll c)
// {
//     return ((((a % MOD + MOD) % MOD) * ((b % MOD + MOD) % MOD) * ((c % MOD + MOD) % MOD)) % MOD + MOD) % MOD;
// }
// int main()
// {
//     io;
//     freopen(input, "r", stdin);
//     freopen(output, "w", stdout);
//     int a, b, c, d, e, f, g, h, i;
//     cin >> a >> b >> c >> d >> e >> f >> g >> h >> i;
//     ll det = ((Module(a, e, i) - Module(a, f, h) - Module(b, d, i) + Module(b, f, g) + Module(c, d, h) - Module(c, e, g)) % MOD + MOD) % MOD;
//     cout << det;
//     return 0;
// }
//? Cây khung nhỏ nhất
// #include <bits/stdc++.h>
// #define input "LQDOJ10.in"
// #define output "LQDOJ10.out"
// #define io                        \
//     ios_base::sync_with_stdio(0); \
//     cin.tie(NULL);
// #define MOD 2004010501
// using ll = long long;
// using namespace std;
// void Prim(vector<vector<pair<int, int>>> &G, int n, vector<bool> &used, int startVertex)
// {
//     priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> PQueue;
//     PQueue.push({0, startVertex});

//     long long W = 0LL;

//     while (!PQueue.empty())
//     {
//         pair<int, int> wv = PQueue.top();
//         PQueue.pop();

//         if (used[wv.second])
//         {
//             continue;
//         }

//         used[wv.second] = true;
//         W += (long long)wv.first;

//         for (auto [neighbor, weighted] : G[wv.second])
//         {
//             if (!used[neighbor])
//             {
//                 PQueue.push({weighted, neighbor});
//             }
//         }
//     }
//     cout << W;
// }
// int main()
// {
//     cin.tie(0)->sync_with_stdio(NULL);
//     freopen(input, "r", stdin);
//     freopen(output, "w", stdout);

//     int n, m, u, v, c;
//     cin >> n >> m;
//     vector<vector<pair<int, int>>> G(n + 1);
//     vector<bool> used(n + 1, false);
//     for (int i = 0; i < m; i++)
//     {
//         cin >> u >> v >> c;
//         G[u].push_back({v, c});
//         G[v].push_back({u, c});
//     }
//     Prim(G, n, used, 1);
//     return 0;
// }
//? CSES - Road Reparation | Sửa chữa đường
// #include <bits/stdc++.h>
// #define input "LQDOJ10.in"
// #define output "LQDOJ10.out"
// #define io                        \
//     ios_base::sync_with_stdio(0); \
//     cin.tie(NULL);
// #define MOD 2004010501
// using ll = long long;
// using namespace std;
// void Prim(vector<vector<pair<int, int>>> &G, int n, vector<bool> &used, int vertex = 1)
// {
//     long long W = 0LL;
//     priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> PQueue;
//     PQueue.push({0, 1});

//     while (!PQueue.empty())
//     {
//         auto wv = PQueue.top();
//         PQueue.pop();
//         if (used[wv.second])
//         {
//             continue;
//         }
//         W += (long long)wv.first;
//         used[wv.second] = true;
//         for (auto [neighbor, weighted] : G[wv.second])
//         {
//             if (!used[neighbor])
//             {
//                 PQueue.push({weighted, neighbor});
//             }
//         }
//     }
//     for (int i = 1; i <= n; i++)
//     {
//         if (!used[i])
//         {
//             cout << "IMPOSSSIBLE";
//             return;
//         }
//     }
//     cout << W;
// }
// int main()
// {
//     cin.tie(0)->sync_with_stdio(NULL);
//     freopen(input, "r", stdin);
//     freopen(output, "w", stdout);

//     int n, m, a, b, c;
//     cin >> n >> m;
//     vector<vector<pair<int, int>>> G(n + 1);
//     vector<bool> used(n + 1, false);
//     for (int i = 0; i < m; i++)
//     {
//         cin >> a >> b >> c;
//         G[a].push_back({b, c});
//         G[b].push_back({a, c});
//     }
//     Prim(G, n, used, 1);
//     return 0;
// }
//? CJ dự tiệc
// #include <bits/stdc++.h>
// #define input "LQDOJ10.in"
// #define output "LQDOJ10.out"
// #define io                        \
//     ios_base::sync_with_stdio(0); \
//     cin.tie(NULL);
// #define oo LLONG_MAX
// using ll = long long;
// using namespace std;
// void Dijkstra(vector<vector<pair<int, int>>> &G, int N, vector<bool> &visited, int s, int t)
// {
//     priority_queue<pair<long long, int>, vector<pair<long long, int>>, greater<pair<long long, int>>> PQueue;
//     PQueue.push({0LL, s});
//     vector<long long> distance(N + 1, oo);
//     distance[s] = 0;
//     vector<int> parent(N + 1, 0);

//     while (!PQueue.empty())
//     {
//         auto [length, vertex] = PQueue.top();
//         PQueue.pop();
//         visited[vertex] = true;
//         for (auto [neighbor, weighted] : G[vertex])
//         {
//             if (!visited[neighbor] && length + weighted < distance[neighbor])
//             {
//                 distance[neighbor] = length + weighted;
//                 parent[neighbor] = vertex;
//                 PQueue.push({distance[neighbor], neighbor});
//             }
//         }
//     }

//     stack<int> path;
//     for (int i = t; i != s; i = parent[i])
//     {
//         path.push(i);
//     }
//     path.push(s);
//     cout << distance[t] << endl;
//     while (!path.empty())
//     {
//         cout << path.top() << " ";
//         path.pop();
//     }
// }
// int main()
// {
//     cin.tie(0)->sync_with_stdio(NULL);
//     freopen(input, "r", stdin);
//     freopen(output, "w", stdout);

//     int N, M, s, t, ui, vi, ci;
//     cin >> N >> M >> s >> t;

//     vector<vector<pair<int, int>>> G(N + 1);
//     vector<bool> visited(N + 1, false);
//     for (int i = 0; i < M; i++)
//     {
//         cin >> ui >> vi >> ci;
//         G[ui].push_back({vi, ci});
//         G[vi].push_back({ui, ci});
//     }
//     Dijkstra(G, N, visited, s, t);
//     return 0;
// }
//? CSES - Shortest Routes II | Tuyến đường ngắn nhất II
// #include <bits/stdc++.h>
// #define input "LQDOJ10.in"
// #define output "LQDOJ10.out"
// using namespace std;
// #define oo LLONG_MAX
// void Dijkstra(vector<vector<pair<int, int>>> &G, int n, vector<long long> &distance, int startVertex)
// {
//     priority_queue<pair<long long, int>, vector<pair<long long, int>>, greater<pair<long long, int>>> PQueue;
//     distance[startVertex] = 0LL;
//     PQueue.push({0LL, startVertex});

//     vector<bool> visited(n + 1, false);
//     while (!PQueue.empty())
//     {
//         auto [length, vertex] = PQueue.top();
//         PQueue.pop();
//         visited[vertex] = true;

//         for (auto [neighbor, weighted] : G[vertex])
//         {
//             if (!visited[neighbor] && weighted + length < distance[neighbor])
//             {
//                 distance[neighbor] = weighted + length;
//                 PQueue.push({distance[neighbor], neighbor});
//             }
//         }
//     }
// }
// int main()
// {
//     cin.tie(0)->sync_with_stdio(NULL);
//     freopen(input, "r", stdin);
//     freopen(output, "w", stdout);

//     int n, m, q, a, b, c;
//     cin >> n >> m >> q;
//     vector<vector<pair<int, int>>> G(n + 1);
//     for (int i = 0; i < m; i++)
//     {
//         cin >> a >> b >> c;
//         G[a].push_back({b, c});
//         G[b].push_back({a, c});
//     }

//     vector<vector<long long>> Distance(n + 1, vector<long long>(n + 1, oo));
//     for (int i = 1; i <= n; i++)
//     {
//         Dijkstra(G, n, Distance[i], i);
//     }

//     while (q--)
//     {
//         cin >> a >> b;
//         if (Distance[a][b] == oo)
//         {
//             cout << -1 << endl;
//         }
//         else
//         {
//             cout << Distance[a][b] << endl;
//         }
//     }
//     return 0;
// }
//? Đường đi ngắn nhất có điều kiện
// #include <bits/stdc++.h>
// #define input "LQDOJ10.in"
// #define output "LQDOJ10.out"
// using namespace std;
// #define oo LLONG_MAX
// using ll = long long;
// struct City
// {
//     int v;       // vertex
//     long long w; // weighted
//     int d;       // discount
//     bool operator>(const City &other) const
//     {
//         return w > other.w;
//     }
// };
// int main()
// {
//     cin.tie(0)->sync_with_stdio(NULL);
//     freopen(input, "r", stdin);
//     freopen(output, "w", stdout);

//     int n, m, k, u, v, w;
//     cin >> n >> m >> k;
//     vector<vector<pair<int, int>>> G(n + 1);
//     for (int i = 0; i < m; i++)
//     {
//         cin >> u >> v >> w;
//         G[u].emplace_back(v, w);
//         G[v].emplace_back(u, w);
//     }
//     vector<vector<long long>> distance(n + 1, vector<long long>(k + 1, oo));
//     distance[1][k] = 0;
//     priority_queue<City, vector<City>, greater<City>> PQueue;
//     PQueue.push({1, 0, k});
//     while (!PQueue.empty())
//     {
//         auto [vertex, weighted, discount] = PQueue.top();
//         PQueue.pop();

//         for (auto [neighbor, weight] : G[vertex])
//         {
//             if (weighted > distance[vertex][discount])
//             {
//                 continue;
//             }
//             if (discount && weighted < distance[neighbor][discount - 1])
//             {
//                 distance[neighbor][discount - 1] = weighted;
//                 PQueue.push({neighbor, distance[neighbor][discount - 1], discount - 1});
//             }
//             if (weighted + weight < distance[neighbor][discount])
//             {
//                 distance[neighbor][discount] = weighted + weight;
//                 PQueue.push({neighbor, distance[neighbor][discount], discount});
//             }
//         }
//     }
//     // for (int i = 1; i <= n; i++)
//     // {
//     //     for (int j = 0; j <= k; j++)
//     //     {
//     //         cout << distance[i][j] << " ";
//     //     }
//     //     cout << endl;
//     // }
//     for (int i = 1; i <= n; i++)
//     {
//         long long Distance = oo;
//         for (int j = 0; j <= k; j++)
//         {
//             Distance = min(Distance, distance[i][j]);
//         }
//         if (Distance == oo)
//         {
//             cout << -1 << " ";
//         }
//         else
//         {
//             cout << Distance << " ";
//         }
//     }
//     return 0;
// }
//? Số đường đi ngắn nhất
// #include <bits/stdc++.h>
// #define input "LQDOJ10.in"
// #define output "LQDOJ10.out"
// using namespace std;
// #define oo LLONG_MAX
// using ll = long long;
// void Dijkstra(vector<vector<pair<int, int>>> &G, int N, vector<bool> &visited)
// {
//     vector<long long> distance(N + 1, oo);
//     distance[1] = 0LL;

//     vector<int> ways(N + 1, 0);
//     ways[1] = 1;

//     priority_queue<pair<long long, int>, vector<pair<long long, int>>, greater<pair<long long, int>>> PQueue;
//     PQueue.push({0LL, 1});

//     while (!PQueue.empty())
//     {
//         auto [length, vertex] = PQueue.top();
//         PQueue.pop();

//         if (length > distance[vertex])
//         {
//             continue;
//         }

//         for (auto [neighbor, weighted] : G[vertex])
//         {
//             if (distance[vertex] + weighted < distance[neighbor])
//             {
//                 distance[neighbor] = distance[vertex] + (long long)weighted;
//                 ways[neighbor] = ways[vertex];
//                 PQueue.push({distance[neighbor], neighbor});
//             }
//             else if (distance[vertex] + weighted == distance[neighbor])
//             {
//                 //! Notice:
//                 //! distance[vertex] + weighted == distance[neighbor] có nghĩa là tồn tại 1 đường đi(lộ trình) có trọng số tương tự
//                 //! Giả sử rằng có hai lộ trình ngắn nhất từ nguồn đến v thông qua u1 và u2.

//                 //!     Lộ trình 1 : nguồn->...->u1->v, với độ dài dist[u1] + weight

//                 //!     Lộ trình 2 : nguồn->...->u2->v, với độ dài dist[u2] + weight

//                 //!     Nếu dist[u1] + weight == dist[u2] + weight, và cả hai lộ trình này đều là lộ trình ngắn nhất đến v, thì hai lộ trình này là độc lập và không trùng lặp với nhau về các đỉnh và cạnh, ngoại trừ điểm cuối v.
//                 ways[neighbor] += ways[vertex];
//             }
//         }
//     }
//     cout << distance[N] << " " << ways[N];
// }
// int main()
// {
//     cin.tie(0)->sync_with_stdio(NULL);
//     freopen(input, "r", stdin);
//     freopen(output, "w", stdout);
//     int N, M, K, U, V, L;
//     cin >> N >> M;
//     vector<vector<pair<int, int>>> G(N + 1);
//     for (int i = 0; i < M; i++)
//     {
//         cin >> K >> U >> V >> L;
//         G[U].emplace_back(V, L);
//         if (K == 2)
//         {
//             G[V].emplace_back(U, L);
//         }
//     }
//     vector<bool> visited(N + 1, false);
//     Dijkstra(G, N, visited);
//     return 0;
// }
//? CSES - Investigation | Nghiên cứu
// #include <bits/stdc++.h>
// #define input "LQDOJ10.in"
// #define output "LQDOJ10.out"
// #define oo LLONG_MAX
// #define MOD 1000000007
// using namespace std;
// using ll = long long;
// void Dijkstra(vector<vector<pair<int, int>>> &G, int n)
// {
//     vector<long long> distance(n + 1, oo);
//     distance[1] = 0LL;

//     vector<long long> ways(n + 1, 0LL);
//     ways[1] = 1LL;

//     vector<int> Min(n + 1, INT_MAX);
//     Min[1] = 0;
//     vector<int> Max(n + 1, INT_MIN);
//     Max[1] = 0;

//     priority_queue<pair<long long, int>, vector<pair<long long, int>>, greater<pair<long long, int>>> PQueue;
//     PQueue.push({0LL, 1});

//     while (!PQueue.empty())
//     {
//         auto [length, vertex] = PQueue.top();
//         PQueue.pop();

//         //! Important
//         if (length > distance[vertex])
//             continue;
//         // Tai sao khong co dong code nay thi toi bi WA

//         for (auto [neighbor, weighted] : G[vertex])
//         {
//             if (distance[vertex] + weighted < distance[neighbor])
//             {
//                 distance[neighbor] = distance[vertex] + weighted;
//                 ways[neighbor] = (ways[vertex]) % MOD;
//                 Min[neighbor] = Min[vertex] + 1;
//                 Max[neighbor] = Max[vertex] + 1;
//                 PQueue.push({distance[neighbor], neighbor});
//             }
//             else if (distance[vertex] + weighted == distance[neighbor])
//             {
//                 ways[neighbor] = (ways[neighbor] + ways[vertex]) % MOD;
//                 Min[neighbor] = min(Min[neighbor], Min[vertex] + 1);
//                 Max[neighbor] = max(Max[neighbor], Max[vertex] + 1);
//             }
//         }
//     }
//     cout << distance[n] << " " << ways[n] % MOD << " " << Min[n] << " " << Max[n];
// }
// int main()
// {
//     cin.tie(0)->sync_with_stdio(NULL);
//     freopen(input, "r", stdin);
//     freopen(output, "w", stdout);
//     int n, m, a, b, c;
//     cin >> n >> m;
//     vector<vector<pair<int, int>>> G(n + 1);
//     for (int i = 0; i < m; i++)
//     {
//         cin >> a >> b >> c;
//         G[a].push_back({b, c});
//         // G[b].push_back({a, c});
//     }
//     Dijkstra(G, n);
//     return 0;
// }
//? Sắp xếp số trong xâu (TS10 LQĐ, Đà Nẵng 2016)
// #include <bits/stdc++.h>
// #define input "LQDOJ10.in"
// #define output "LQDOJ10.out"
// using namespace std;
// int main()
// {
//     cin.tie(0)->sync_with_stdio(NULL);
//     freopen(input, "r", stdin);
//     freopen(output, "w", stdout);

//     string str;
//     cin >> str;
//     vector<char> digit;
//     for (char chr : str)
//     {
//         if (chr >= '0' && chr <= '9')
//         {
//             digit.push_back(chr);
//         }
//     }
//     sort(digit.begin(), digit.end());
//     int i = 0;
//     for (char chr : str)
//     {
//         if (chr >= '0' && chr <= '9')
//         {
//             cout << digit[i++];
//         }
//         else
//         {
//             cout << chr;
//         }
//     }
//     return 0;
// }
//? Khoảng Cách Lớn Thứ Hai
// #include <bits/stdc++.h>
// #define input "LQDOJ10.in"
// #define output "LQDOJ10.out"
// using namespace std;
// using ll = long long;
// int main()
// {
//     cin.tie(0)->sync_with_stdio(NULL);
//     freopen(input, "r", stdin);
//     freopen(output, "w", stdout);

//     int N, xi, yi;
//     cin >> N;
//     vector<pair<ll, ll>> point(N);
//     vector<long long> distance;
//     // Subtask 1
//     for (int i = 0; i < N; i++)
//     {
//         cin >> xi >> yi;
//         point[i] = {xi, yi};
//     }
//     for (int i = 0; i < N - 1; i++)
//     {
//         for (int j = i + 1; j < N; j++)
//         {
//             distance.push_back(max(abs((ll)point[i].first - (ll)point[j].first), abs((ll)point[i].second - (ll)point[j].second)));
//         }
//     }
//     sort(distance.begin(), distance.end(), greater<int>());
//     cout << distance[1];
//     return 0;
// }
//? Ổ cắm
// #include <bits/stdc++.h>
// #define input "LQDOJ10.in"
// #define output "LQDOJ10.out"
// using namespace std;
// using ll = long long;
// void heapify(vector<int> &a, int n, int index)
// {
//     int largest = index;

//     int left = index * 2 + 1;
//     int right = index * 2 + 2;
//     if (left < n && a[largest] > a[left])
//     {
//         largest = left;
//     }
//     if (right < n && a[largest] > a[right])
//     {
//         largest = right;
//     }
//     if (largest != index)
//     {
//         swap(a[largest], a[index]);
//         heapify(a, n, largest);
//     }
// }
// void heapSort(vector<int> &a, int n, int start, int end)
// {
//     for (int i = n / 2 - 1; i >= 0; i--)
//     {
//         heapify(a, n, i);
//     }
//     for (int i = n - 1; i > 0; i--)
//     {
//         swap(a[i], a[0]);
//         heapify(a, i, 0);
//     }
// }
// int main()
// {
//     cin.tie(0)->sync_with_stdio(NULL);
//     freopen(input, "r", stdin);
//     freopen(output, "w", stdout);

//     int n, m;
//     cin >> n >> m;
//     vector<int> a(n);
//     for (int &x : a)
//     {
//         cin >> x;
//     }
//     heapSort(a, n, 0, n - 1);
//     if (m == 1)
//     {
//         return 0;
//     }
//     int count = a[0];
//     if (count >= m)
//     {
//         cout << 1;
//         return 0;
//     }
//     for (int i = 1; i < n; i++)
//     {
//         count += a[i] - 1;
//         if (count >= m)
//         {
//             cout << i + 1;
//             return 0;
//         }
//     }
//     cout << -1;
//     return 0;
// }
//? Tìm 2 số có tổng bằng x
// #include <bits/stdc++.h>
// #define input "LQDOJ10.in"
// #define output "LQDOJ10.out"
// using namespace std;
// int main()
// {
//     cin.tie(0)->sync_with_stdio(NULL);
//     freopen(input, "r", stdin);
//     freopen(output, "w", stdout);
//     int N, X;
//     cin >> N >> X;
//     vector<int> A(N);
//     vector<pair<int, int>> B;
//     for (int i = 0; i < N; i++)
//     {
//         cin >> A[i];
//         B.emplace_back(A[i], i + 1);
//     }
//     sort(B.begin(), B.end());
//     int left = 0;
//     int right = N - 1;
//     while (left < right)
//     {
//         if (B[left].first + B[right].first == X)
//         {
//             cout << B[left].second << " " << B[right].second;
//             return 0;
//         }
//         else if (B[left].first + B[right].first > X)
//         {
//             right--;
//         }
//         else
//         {
//             left++;
//         }
//     }
//     cout << "IMPOSSIBLE";
//     return 0;
// }
// //? EVA
// #include <bits/stdc++.h>
// #define input "LQDOJ10.in"
// #define output "LQDOJ10.out"
// #define oo LLONG_MAX
// using namespace std;
// using ll = long long;
// void Dijkstra(vector<vector<pair<int, int>>> &G, int n, int source, vector<ll> &distance)
// {
//     priority_queue<pair<ll, int>, vector<pair<ll, int>>, greater<pair<ll, int>>> PQ;
//     PQ.push({0LL, source});
//     distance[source] = 0LL;
//     while (!PQ.empty())
//     {
//         auto [length, vertex] = PQ.top();
//         PQ.pop();

//         if (distance[vertex] < length)
//         {
//             continue;
//         }

//         for (auto [neighbor, weighted] : G[vertex])
//         {
//             if (distance[vertex] + weighted < distance[neighbor])
//             {
//                 distance[neighbor] = distance[vertex] + weighted;
//                 PQ.push({distance[neighbor], neighbor});
//             }
//         }
//     }
// }
// int main()
// {
//     cin.tie(0)->sync_with_stdio(NULL);
//     freopen(input, "r", stdin);
//     freopen(output, "w", stdout);

//     int n, k, m, u, v;
//     cin >> n >> k;
//     vector<int> exit(k);
//     for (int &x : exit)
//     {
//         cin >> x;
//     }
//     cin >> m;
//     vector<vector<pair<int, int>>> G(n + 1);
//     for (int i = 0; i < m; i++)
//     {
//         cin >> u >> v;
//         G[u].emplace_back(v, 1);
//         G[v].emplace_back(u, 1);
//     }
//     vector<ll> distance(n + 1, oo);
//     for (int src : exit)
//     {
//         Dijkstra(G, n, src, distance);
//     }
//     for (int i = 1; i <= n; i++)
//     {
//         cout << distance[i] << " ";
//     }
//     return 0;
// }
//? Đường đi dài nhất
// #include <bits/stdc++.h>
// #define input "LQDOJ10.in"
// #define output "LQDOJ10.out"
// #define oo LLONG_MAX
// using namespace std;
// using ll = long long;
// stack<int> topo;
// void TopologicalSort(vector<vector<int>> &G, int N, vector<bool> &visited, int vertex)
// {
//     visited[vertex] = true;
//     for (int neighbor : G[vertex])
//     {
//         if (!visited[neighbor])
//         {
//             TopologicalSort(G, N, visited, neighbor);
//         }
//     }
//     topo.push(vertex);
// }
// int main()
// {
//     cin.tie(0)->sync_with_stdio(NULL);
//     if (fopen(input, "r"))
//     {
//         freopen(input, "r", stdin);
//         freopen(output, "w", stdout);
//     }

//     int N, M, u, v;
//     cin >> N >> M;

//     vector<vector<int>> G(N + 1);
//     vector<vector<int>> revG(N + 1);
//     vector<bool> visited(N, false);
//     for (int i = 1; i <= N; i++)
//     {
//         cin >> u >> v;
//         G[u].push_back(v);
//         revG[v].push_back(u);
//     }
//     for (int i = 1; i <= N; i++)
//     {
//         if (!visited[i])
//         {
//             TopologicalSort(G, N, visited, i);
//         }
//     }
//     int res = 0;
//     vector<int> numOf(N + 1, 0);
//     while (!topo.empty())
//     {
//         int vertex = topo.top();
//         for (int neighbor : G[vertex])
//         {
//             numOf[neighbor] = max(numOf[neighbor], numOf[vertex] + 1);
//             res = max(res, numOf[neighbor]);
//         }
//         topo.pop();
//     }
//     cout << res;
//     return 0;
// }
//? 4 VALUES
// #include <bits/stdc++.h>
// #define input "LQDOJ10.in"
// #define output "LQDOJ10.out"
// #define oo LLONG_MAX
// using namespace std;
// using ll = long long;
// int main()
// {
//     cin.tie(0)->sync_with_stdio(NULL);
//     if (fopen(input, "r"))
//     {
//         freopen(input, "r", stdin);
//         freopen(output, "w", stdout);
//     }

//     int n, ei;
//     cin >> n;
//     set<long long> e;
//     for (int i = 0; i < n; i++)
//     {
//         cin >> ei;
//         e.insert(ei);
//     }
//     // sort(e.begin(), e.end());
//     ll smallest = *(e.begin());
//     ll second_smallest = *(++e.begin());
//     ll biggest = *(e.rbegin());
//     ll second_biggest = *(++e.rbegin());
//     // cout << smallest << " " << second_smallest << " " << biggest << " " << second_biggest << endl;
//     cout << max((biggest - smallest) * (second_biggest - second_smallest), (biggest - second_smallest) * (second_biggest - smallest));
//     return 0;
// }
//? Find the number of distinct islands in a 2D matrix
// C++ implementation of above approach
// #include <bits/stdc++.h>
//     #define input "LQDOJ10.in"
//     #define output "LQDOJ10.out"
//     #define oo LLONG_MAX
//     using namespace std;
//     using ll = long long;

// // 2D array for the storing the horizontal and vertical
// // directions. (Up, left, down, right}
// vector<vector<int>> dirs = {{0, -1},
//                             {-1, 0},
//                             {0, 1},
//                             {1, 0}};

// // Function to perform dfs of the input grid
// void dfs(vector<vector<int>> &grid, int x0, int y0,
//          int i, int j, vector<pair<int, int>> &v)
// {
//     int rows = grid.size(), cols = grid[0].size();

//     if (i < 0 || i >= rows || j < 0 || j >= cols || grid[i][j] <= 0)
//         return;

//     // marking the visited element as -1
//     grid[i][j] *= -1;

//     // computing coordinates with x0, y0 as base
//     v.push_back({i - x0, j - y0});

//     // repeat dfs for neighbors
//     for (auto dir : dirs)
//     {
//         dfs(grid, x0, y0, i + dir[0], j + dir[1], v);
//     }
// }

// // Main function that returns distinct count of islands in
// // a given boolean 2D matrix
// int countDistinctIslands(vector<vector<int>> &grid)
// {
//     int rows = grid.size();
//     if (rows == 0)
//         return 0;

//     int cols = grid[0].size();
//     if (cols == 0)
//         return 0;

//     set<vector<pair<int, int>>> coordinates;

//     for (int i = 0; i < rows; ++i)
//     {
//         for (int j = 0; j < cols; ++j)
//         {

//             // If a cell is not 1
//             // no need to dfs
//             if (grid[i][j] != 1)
//                 continue;

//             // vector to hold coordinates
//             // of this island
//             vector<pair<int, int>> v;
//             dfs(grid, i, j, i, j, v);

//             // insert the coordinates for
//             // this island to set
//             coordinates.insert(v);
//         }
//     }
//     return coordinates.size();
// }

// // Driver code
// int main()
// {
//     cin.tie(0)->sync_with_stdio(NULL);
//     if (fopen(input, "r"))
//     {
//         freopen(input, "r", stdin);
//         freopen(output, "w", stdout);
//     }
//     vector<vector<int>> grid = {{1, 1, 0, 1, 1},
//                                 {1, 0, 0, 0, 0},
//                                 {0, 0, 0, 0, 1},
//                                 {1, 1, 0, 1, 1}};

//     cout << "Number of distinct islands is " << countDistinctIslands(grid);

//     return 0;
// }
//? 795. Number of Subarrays with Bounded Maximum
// #include <bits/stdc++.h>
// #define input "LQDOJ10.in"
// #define output "LQDOJ10.out"
// using namespace std;
// int numSubarrayBoundedMax(vector<int> &nums, int left, int right)
// {
//     int n = nums.size();
//     int l = 0;
//     int r = 0;
//     int res = 0;
//     while (r < n)
//     {
//         int maxEle = nums[r];
//         while (r < n && left <= maxEle && maxEle <= right)
//         {
//             r++;
//             maxEle = max(maxEle, nums[r]);
//         }
//         int count = (r - l + 1) * (r - l) / 2;
//         cout << count << endl;
//         res += count;
//         l = r + 1;
//         r = l;
//         // cout << "left: " << l << " " << " right: " << r << endl;
//     }
//     return res;
// }
// int main()
// {
//     cin.tie(0)->sync_with_stdio(NULL);
//     if (fopen(input, "r"))
//     {
//         freopen(input, "r", stdin);
//         freopen(output, "w", stdout);
//     }
//     int n, left, right;
//     cin >> n >> left >> right;
//     vector<int> nums(n);
//     for (int &x : nums)
//     {
//         cin >> x;
//     }
//     cout << numSubarrayBoundedMax(nums, left, right);
//     return 0;
// }
//? Help Conan 12!
// #include <bits/stdc++.h>
// #define input "LQDOJ10.in"
// #define output "LQDOJ10.out"
// using namespace std;
// long long A[200005] = {0};
// long long Max[100005] = {0};
// void init()
// {
//     A[0] = 0;
//     A[1] = 1;
//     for (int i = 1; i < 100001; i++)
//     {
//         A[2 * i] = A[i];
//         A[2 * i + 1] = A[i] + A[i + 1];
//     }
// }
// void find()
// {
//     for (int i = 1; i < 100001; i++)
//     {
//         Max[i] = max(A[i], Max[i - 1]);
//     }
// }
// int main()
// {
//     cin.tie(0)->sync_with_stdio(NULL);
//     freopen(input, "r", stdin);
//     freopen(output, "w", stdout);

//     init();
//     for (int x : A)
//     {
//         cout << x << " ";
//     }
//     find();
//     int T, N;
//     cin >> T;
//     while (T--)
//     {
//         cin >> N;
//         cout << Max[N] << endl;
//     }
//     return 0;
// }
//? Xây dựng thành phố
// #include <bits/stdc++.h>
// #define input "LQDOJ10.in"
// #define output "LQDOJ10.out"
// using namespace std;
// #define oo LLONG_MAX
// using ll = long long;
// void Prim(vector<vector<pair<int, int>>> &G, int N, vector<bool> &used)
// {
//     long long W = 0LL;
//     priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> PQueue;
//     // priority_queue<pair<int, int>, vector<pair<int, int>>, less<pair<int, int>>> PQueue;
//     PQueue.push({0, 1});

//     while (!PQueue.empty())
//     {
//         auto [weighted, vertex] = PQueue.top();
//         PQueue.pop();

//         if (used[vertex])
//         {
//             continue;
//         }

//         W = max(W, (long long)weighted);
//         for (auto [neighbor, weight] : G[vertex])
//         {
//             if (!used[neighbor])
//             {
//                 PQueue.push({weight, neighbor});
//             }
//         }
//     }
//     cout << W;
// }
// int main()
// {
//     cin.tie(0)->sync_with_stdio(NULL);
//     freopen(input, "r", stdin);
//     freopen(output, "w", stdout);
//     int N, M, u, v, t;
//     cin >> N >> M;
//     vector<vector<pair<int, int>>> G(N + 1);
//     vector<bool> used(N + 1, false);

//     for (int i = 0; i < M; i++)
//     {
//         cin >> u >> v >> t;
//         G[u].push_back({v, t});
//         G[v].push_back({u, t});
//     }
//     // for (int u = 1; u <= N; u++)
//     // {
//     //     cout << u << " ";
//     //     for (auto [v, w] : G[u])
//     //     {
//     //         cout << v << " " << w << endl;
//     //     }
//     // }
//     Prim(G, N, used);
//     return 0;
// }