// // Viên ngọc
// #include <bits/stdc++.h>
// using ld = long double;
// using ll = long long;
// using ull = unsigned long long;
// using uli = unsigned long int;
// using namespace std;

// #define PI 3.141592653589793
// #define INF 1000000000
// #define MOD 1000000007
// #define MAX 200001

// #define io                        \
//     ios_base::sync_with_stdio(0); \
//     cin.tie(0);                   \
//     cout.tie(0);
// #define iint pair<int, int>
// #define llong pair<long long, long long>
// #define st first;
// #define nd second;
// #define input "LQDOJ5.in"
// #define output "LQDOJ5.out"

// #define MTY(Container) Container.empty()
// #define MEM(Array, value) memset(Array, value, sizeof(Array))
// #define FOR(i, start, end) for (int i = start; i < end; i++)
// #define FOREACH(i, Container) for (auto i = (Container).begin(); i != (Container).end(); ++i)
// #define ALL(Container) (Container).begin(), (Container).end()
// #define SIZE(Container)
// #define PUSHBACK(Container, value) Container.push_back(value)
// #define PUSHFRONT(Container, value) Container.push_front(value)
// #define POPBACK(Container, value) Container.pop_back(value)
// #define POPFRONT(Container, value) Container.pop_front(value)

// template <class T1, class T2>
// istream &operator>>(istream &in, pair<T1, T2> &a)
// {
//     in >> a.first >> a.second;
//     return in;
// }
// template <class T>
// istream &operator>>(istream &in, vector<T> &a)
// {
//     for (auto &x : a)
//     {
//         in >> x;
//     }
//     return in;
// }
// template <typename dataType>
// dataType find_max(std::initializer_list<dataType> elements)
// {
//     return *std::max_element(elements.begin(), elements.end());
// }
// int pos[MAX] = {0};
// bool flg[MAX] = {false};
// int main()
// {
//     io;
//     freopen(input, "r", stdin);
//     freopen(output, "w", stdout);
//     int n;
//     cin >> n;
//     int times = 0;
//     vector<int> x(n);
//     for (int &v : x)
//     {
//         cin >> v;
//     }
//     for (int v : x)
//         cout << v << " ";
//     const bool BruteForce = false;
//     if (BruteForce)
//     {
//         int value = INT_MIN;
//         for (int i = 0; i < n; i++)
//         {
//             if (!flg[i])
//                 value = x[i];
//             else
//                 continue;
//             for (int j = i + 1; j < n; j++)
//             {
//                 if (!flg[j] && x[j] == value + 1)
//                 {
//                     value = x[j];
//                     flg[j] = true;
//                 }
//             }
//             times++;
//         }
//         cout << times;
//     }
//     else
//     {
//         for (int i = 0; i < n; i++)
//         {
//             pos[x[i]] = i;
//         }

//         for (int i = 1; i <= n; i++)
//         {
//             if (pos[i + 1] > pos[i] || pos[i] < pos[i + 1])
//                 continue;
//             else
//                 times++;
//         }
//         cout << times;
//     }
//     return 0;
// }
// // ----------
// // Số chẵn lớn nhất (Contest ôn tập #02 THTA 2023)
// #include <bits/stdc++.h>
// using ld = long double;
// using ll = long long;
// using ull = unsigned long long;
// using uli = unsigned long int;
// using namespace std;

// #define PI 3.141592653589793
// #define INF 1000000000
// #define MOD 1000000007
// #define MAX 200001

// #define io                        \
//     ios_base::sync_with_stdio(0); \
//     cin.tie(0);                   \
//     cout.tie(0);
// #define iint pair<int, int>
// #define llong pair<long long, long long>
// #define st first;
// #define nd second;
// #define input "LQDOJ5.in"
// #define output "LQDOJ5.out"

// #define MTY(Container) Container.empty()
// #define MEM(Array, value) memset(Array, value, sizeof(Array))
// #define FOR(i, start, end) for (int i = start; i < end; i++)
// #define FOREACH(i, Container) for (auto i = (Container).begin(); i != (Container).end(); ++i)
// #define ALL(Container) (Container).begin(), (Container).end()
// #define SIZE(Container)
// #define PUSHBACK(Container, value) Container.push_back(value)
// #define PUSHFRONT(Container, value) Container.push_front(value)
// #define POPBACK(Container, value) Container.pop_back(value)
// #define POPFRONT(Container, value) Container.pop_front(value)

// template <class T1, class T2>
// istream &operator>>(istream &in, pair<T1, T2> &a)
// {
//     in >> a.first >> a.second;
//     return in;
// }
// template <class T>
// istream &operator>>(istream &in, vector<T> &a)
// {
//     for (auto &x : a)
//     {
//         in >> x;
//     }
//     return in;
// }
// template <typename dataType>
// dataType find_max(std::initializer_list<dataType> elements)
// {
//     return *std::max_element(elements.begin(), elements.end());
// }
// int pos[MAX] = {0};
// bool flg[MAX] = {false};
// int main()
// {
//     io;
//     freopen(input, "r", stdin);
//     freopen(output, "w", stdout);
//     int n;
//     cin >> n;
//     if (n % 10 != 8)
//     {
//         n = (n / 10) * 10 + 8;
//     }
//     cout << n;
//     return 0;
// }
// // ----------
// // Tìm các số chia hết cho 3 trong đoạn a, b
// #include <bits/stdc++.h>
// using ld = long double;
// using ll = long long;
// using ull = unsigned long long;
// using uli = unsigned long int;
// using namespace std;

// const bool BruteForce = false;

// #define PI 3.141592653589793
// #define INF 1000000000
// #define MOD 1000000007
// #define MAX 200001

// #define io                        \
//     ios_base::sync_with_stdio(0); \
//     cin.tie(0);                   \
//     cout.tie(0);
// #define iint pair<int, int>
// #define llong pair<long long, long long>
// #define st first;
// #define nd second;
// #define input "LQDOJ5.in"
// #define output "LQDOJ5.out"

// #define MTY(Container) Container.empty()
// #define MEM(Array, value) memset(Array, value, sizeof(Array))
// #define FOR(i, start, end) for (int i = start; i < end; i++)
// #define FOREACH(i, Container) for (auto i = (Container).begin(); i != (Container).end(); ++i)
// #define ALL(Container) (Container).begin(), (Container).end()
// #define SIZE(Container)
// #define PUSHBACK(Container, value) Container.push_back(value)
// #define PUSHFRONT(Container, value) Container.push_front(value)
// #define POPBACK(Container, value) Container.pop_back(value)
// #define POPFRONT(Container, value) Container.pop_front(value)

// template <class T1, class T2>
// istream &operator>>(istream &in, pair<T1, T2> &a)
// {
//     in >> a.first >> a.second;
//     return in;
// }
// template <class T>
// istream &operator>>(istream &in, vector<T> &a)
// {
//     for (auto &x : a)
//     {
//         in >> x;
//     }
//     return in;
// }
// template <typename dataType>
// dataType find_max(std::initializer_list<dataType> elements)
// {
//     return *std::max_element(elements.begin(), elements.end());
// }
// int pos[MAX] = {0};
// bool flg[MAX] = {false};
// int main()
// {
//     io;
//     freopen(input, "r", stdin);
//     freopen(output, "w", stdout);
//     ll a, b;
//     cin >> a >> b;
//     ll res = 0;
//     if (BruteForce)
//     {
//         for (int i = a; i <= b; i++)
//         {
//             res += (!(i % 3));
//         }
//         cout << res;
//     }
//     else
//     {
//         ll lwer = a / 3;
//         ll uppr = b / 3;
//         cout << lwer << " " << uppr << endl;
//         cout << uppr - lwer + (!(a % 3));
//     }
//     return 0;
// }
// // ----------
// // Đỉnh cận kề 19/30
// #include <bits/stdc++.h>
// #include <unordered_map>
// #include <unordered_set>
// using ld = long double;
// using ll = long long;
// using ull = unsigned long long;
// using uli = unsigned long int;
// using namespace std;

// const bool BruteForce = false;

// #define PI 3.141592653589793
// #define INF 1000000000
// #define MOD 1000000007
// #define MAX 200001

// #define io                        \
//     ios_base::sync_with_stdio(0); \
//     cin.tie(0);                   \
//     cout.tie(0);
// #define iint pair<int, int>
// #define llong pair<long long, long long>
// #define st first;
// #define nd second;
// #define input "LQDOJ5.in"
// #define output "LQDOJ5.out"

// #define MTY(Container) Container.empty()
// #define MEM(Array, value) memset(Array, value, sizeof(Array))
// #define FOR(i, start, end) for (int i = start; i < end; i++)
// #define FOREACH(i, Container) for (auto i = (Container).begin(); i != (Container).end(); ++i)
// #define ALL(Container) (Container).begin(), (Container).end()
// #define SIZE(Container)
// #define PUSHBACK(Container, value) Container.push_back(value)
// #define PUSHFRONT(Container, value) Container.push_front(value)
// #define POPBACK(Container, value) Container.pop_back(value)
// #define POPFRONT(Container, value) Container.pop_front(value)

// template <class T1, class T2>
// istream &operator>>(istream &in, pair<T1, T2> &a)
// {
//     in >> a.first >> a.second;
//     return in;
// }
// template <class T>
// istream &operator>>(istream &in, vector<T> &a)
// {
//     for (auto &x : a)
//     {
//         in >> x;
//     }
//     return in;
// }

// struct undirectedEdge
// {
//     pair<int, int> edge;
//     int weight = 0;
// };
// struct directedEdge
// {
//     int startVertex;
//     int endVertex;
//     int weight = 0;
// };
// struct Adjacent
// {
//     unordered_set<int> vertices;
// };
// void printListOfAdjacent(vector<Adjacent> listA, int N)
// {
//     for (int i = 1; i <= N; i++)
//     {
//         cout << i << " -> ";
//         for (int vertex : listA[i].vertices)
//         {
//             cout << vertex << " ";
//         }
//         cout << endl;
//     }
// }
// bool checkNearedVertex(vector<Adjacent> listA, int N, int vertex1, int vertex2)
// {
//     for (int intermediary : listA[vertex1].vertices)
//     {
//         if (intermediary != vertex2 && listA[intermediary].vertices.find(vertex2) != listA[intermediary].vertices.end()) {
//         if (intermediary != vertex2 && listA[intermediary].vertices.count(vertex2))
//         {
//             Brute Force
//             for (int next : listA[intermediary].vertices) {
//                 if (next == vertex2) return true;
//             }
//             return true;
//         }
//     }
//     return false;
// }
// int main()
// {
//     io;
//     freopen(input, "r", stdin);
//     freopen(output, "w", stdout);

//     int N, M, Q;
//     cin >> N >> M >> Q;

//     // Danh sách cạnh (List of Edge)
//     vector<undirectedEdge> listE(M + 1);
//     for (int i = 1; i <= M; i++) {
//         cin >> listE[i].edge.first >> listE[i].edge.second;
//     }
//     // Danh sách kề (List of Adjacent)
//     vector<Adjacent> listA(N + 1);
//     for (int i = 1; i <= M; i++) {
//         listA[listE[i].edge.first].vertices.insert(listE[i].edge.second);
//         listA[listE[i].edge.second].vertices.insert(listE[i].edge.first);
//     }

//     vector<Adjacent> listA(N + 1);
//     int firstVer, secondVer;
//     for (int i = 0; i < M; i++)
//     {
//         cin >> firstVer >> secondVer;
//         listA[firstVer].vertices.insert(secondVer);
//         listA[secondVer].vertices.insert(firstVer);
//     }
//     char t;
//     int vertex1, vertex2;
//     set<pair<int, int>> res;
//     while (Q--)
//     {
//         cin >> t;
//         if (t == '?')
//         {
//             cin >> vertex1 >> vertex2;
//             if (vertex1 > vertex2)
//                 swap(vertex1, vertex2);
//             pair<int, int> neighbor;
//             if (res.count(neighbor))
//             {
//                 cout << 1;
//                 continue;
//             }
//             if (checkNearedVertex(listA, N, vertex1, vertex2))
//             {
//                 res.insert(make_pair(vertex1, vertex2));
//                 cout << 1;
//             }
//             else
//             {
//                 cout << 0;
//             }
//         }
//         else
//         {
//             cin >> vertex1 >> vertex2;
//             listA[vertex1].vertices.insert(vertex2);
//             listA[vertex2].vertices.insert(vertex1);
//         }
//     }
//     return 0;
// }
// // ----------
// // DFS cơ bản
// #include <bits/stdc++.h>
// #include <unordered_map>
// #include <unordered_set>
// using ld = long double;
// using ll = long long;
// using ull = unsigned long long;
// using uli = unsigned long int;
// using namespace std;

// const bool BruteForce = false;

// #define PI 3.141592653589793
// #define INF 1000000000
// #define MOD 1000000007
// #define MAX 100001

// #define io                        \
//     ios_base::sync_with_stdio(0); \
//     cin.tie(NULL);                \
//     cout.tie(NULL);
// #define iint pair<int, int>
// #define llong pair<long long, long long>
// #define st first;
// #define nd second;
// #define input "LQDOJ5.in"
// #define output "LQDOJ5.out"

// #define MTY(Container) Container.empty()
// #define MEM(Array, value) memset(Array, value, sizeof(Array))
// #define FOR(i, start, end) for (int i = start; i < end; i++)
// #define FOREACH(i, Container) for (auto i = (Container).begin(); i != (Container).end(); ++i)
// #define ALL(Container) (Container).begin(), (Container).end()
// #define SIZE(Container)
// #define PUSHBACK(Container, value) Container.push_back(value)
// #define PUSHFRONT(Container, value) Container.push_front(value)
// #define POPBACK(Container, value) Container.pop_back(value)
// #define POPFRONT(Container, value) Container.pop_front(value)

// template <class T1, class T2>
// istream &operator>>(istream &in, pair<T1, T2> &couple)
// {
//     in >> couple.first >> couple.second;
//     return in;
// }
// template <class T>
// istream &operator>>(istream &in, vector<T> &array)
// {
//     for (auto &x : array)
//     {
//         in >> x;
//     }
//     return in;
// }

// struct Adjacent
// {
//     unordered_set<int> vertices;
// };
// bool visited[MAX] = {false};
// void DFS(vector<Adjacent> &listA, int vertex)
// {
//     visited[vertex] = true;
//     for (int neighbor : listA[vertex].vertices)
//     {
//         if (!visited[neighbor])
//         {
//             DFS(listA, neighbor);
//         }
//     }
// }
// int main()
// {
//     io;
//     freopen(input, "r", stdin);
//     freopen(output, "w", stdout);

//     int n, m;
//     cin >> n >> m;
//     vector<Adjacent> listA(n + 1);
//     int vertexA, vertexB;
//     for (int i = 0; i < m; i++)
//     {
//         cin >> vertexA >> vertexB;
//         listA[vertexA].vertices.insert(vertexB);
//         listA[vertexB].vertices.insert(vertexA);
//     }
//     int connect = 0;
//     for (int i = 1; i <= n; i++)
//     {
//         if (!visited[i])
//         {
//             DFS(listA, i);
//             connect++;
//         }
//     }
//     cout << connect;
//     return 0;
// }
// // ----------
// // BFS Cơ bản
// #include <bits/stdc++.h>
// #include <unordered_map>
// #include <unordered_set>
// using ld = long double;
// using ll = long long;
// using ull = unsigned long long;
// using uli = unsigned long int;
// using namespace std;

// const bool BruteForce = false;

// #define PI 3.141592653589793
// #define INF 1000000000
// #define MOD 1000000007
// #define MAX 100001

// #define io                        \
//     ios_base::sync_with_stdio(0); \
//     cin.tie(NULL);                \
//     cout.tie(NULL);
// #define iint pair<int, int>
// #define llong pair<long long, long long>
// #define st first;
// #define nd second;
// #define input "LQDOJ5.in"
// #define output "LQDOJ5.out"

// #define MTY(Container) Container.empty()
// #define MEM(Array, value) memset(Array, value, sizeof(Array))
// #define FOR(i, start, end) for (int i = start; i < end; i++)
// #define FOREACH(i, Container) for (auto i = (Container).begin(); i != (Container).end(); ++i)
// #define ALL(Container) (Container).begin(), (Container).end()
// #define SIZE(Container)
// #define PUSHBACK(Container, value) Container.push_back(value)
// #define PUSHFRONT(Container, value) Container.push_front(value)
// #define POPBACK(Container, value) Container.pop_back(value)
// #define POPFRONT(Container, value) Container.pop_front(value)

// template <class T1, class T2>
// istream &operator>>(istream &in, pair<T1, T2> &couple)
// {
//     in >> couple.first >> couple.second;
//     return in;
// }
// template <class T>
// istream &operator>>(istream &in, vector<T> &array)
// {
//     for (auto &x : array)
//     {
//         in >> x;
//     }
//     return in;
// }
// struct Adjacent
// {
//     unordered_set<int> vertices;
// };
// void printListOfAdjacent(vector<Adjacent> listA, int N)
// {
//     for (int i = 1; i < N + 1; i++)
//     {
//         cout << i << ": ";
//         for (int neighbor : listA[i].vertices)
//         {
//             cout << neighbor << " ";
//         }
//         cout << endl;
//     }
// }
// void BFS(vector<Adjacent> &listA, vector<int> &distance, int S)
// {
//     queue<int> que;
//     que.push(S);
//     distance[S] = 0;
//     while (!que.empty())
//     {
//         int vertex = que.front();
//         que.pop();
//         // cout << vertex << " ";
//         for (int neighbor : listA[vertex].vertices)
//         {
//             if (distance[neighbor] == INT_MAX)
//             {
//                 distance[neighbor] = distance[vertex] + 1;
//                 que.push(neighbor);
//             }
//         }
//     }
// }
// bool compareByValue(pair<int, int> c1, pair<int, int> c2)
// {
//     if (c1.second == c2.second)
//         return c1.first < c2.first;
//     return c1.second < c2.second;
// }
// int main()
// {
//     io;
//     freopen(input, "r", stdin);
//     freopen(output, "w", stdout);
//     int N, M, S;
//     cin >> N >> M >> S;
//     vector<Adjacent> listA(N + 1);
//     int vertexA, vertexB;
//     for (int i = 0; i < M; i++)
//     {
//         cin >> vertexA >> vertexB;
//         listA[vertexA].vertices.insert(vertexB);
//         listA[vertexB].vertices.insert(vertexA);
//     }

//     vector<int> distance(N + 1, INT_MAX);
//     vector<pair<int, int>> res;

//     BFS(listA, distance, S);
//     for (int i = 1; i <= N; i++)
//     {
//         if (distance[i] != INT_MAX)
//         {
//             res.push_back(make_pair(i, distance[i]));
//         }
//     }

//     sort(res.begin(), res.end(), compareByValue);
//     for (pair<int, int> c : res)
//     {
//         cout << c.first << " " << c.second << endl;
//     }
//     return 0;
// }
// ----------
// // BFS
// #include <bits/stdc++.h>
// #include <unordered_map>
// #include <unordered_set>
// using ld = long double;
// using ll = long long;
// using ull = unsigned long long;
// using uli = unsigned long int;
// using namespace std;

// const bool BruteForce = false;

// #define PI 3.141592653589793
// #define INF 1000000000
// #define MOD 1000000007
// #define MAX 100001

// #define io                        \
//     ios_base::sync_with_stdio(0); \
//     cin.tie(NULL);                \
//     cout.tie(NULL);
// #define iint pair<int, int>
// #define llong pair<long long, long long>
// #define st first;
// #define nd second;
// #define input "BFS.INP"
// #define output "BFS.OUT"

// #define MTY(Container) Container.empty()
// #define MEM(Array, value) memset(Array, value, sizeof(Array))
// #define FOR(i, start, end) for (int i = start; i < end; i++)
// #define FOREACH(i, Container) for (auto i = (Container).begin(); i != (Container).end(); ++i)
// #define ALL(Container) (Container).begin(), (Container).end()
// #define SIZE(Container)
// #define PUSHBACK(Container, value) Container.push_back(value)
// #define PUSHFRONT(Container, value) Container.push_front(value)
// #define POPBACK(Container, value) Container.pop_back(value)
// #define POPFRONT(Container, value) Container.pop_front(value)

// struct Adjacency
// {
//     unordered_set<int> vertices;
// };
// void BFS(vector<Adjacency> &listA, vector<int> &distance) //, vector<bool> &visited)
// {
//     queue<int> que;
//     que.push(1);
//     // visited[1] = true;
//     int i = 0;
//     while (!que.empty())
//     {
//         int vertex = que.front();
//         que.pop();
//         // cout << vertex << " ";
//         for (int neighbor : listA[vertex].vertices)
//         {
//             // if (!visited[neighbor])
//             if (distance[neighbor] == -1)
//             {
//                 distance[neighbor] = distance[vertex] + 1;
//                 que.push(neighbor);
//                 // visited[neighbor] = true;
//             }
//         }
//     }
// }
// int main()
// {
//     io;
//     freopen(input, "r", stdin);
//     freopen(output, "w", stdout);
//     int n, m;
//     cin >> n >> m;
//     vector<Adjacency> listA(n + 1);
//     int vertexA, vertexB;
//     for (int i = 0; i < m; i++)
//     {
//         cin >> vertexA >> vertexB;
//         listA[vertexA].vertices.insert(vertexB);
//         listA[vertexB].vertices.insert(vertexA);
//     }
//     // vector<bool> visited(n + 1, false);
//     vector<int> distance(n + 1, -1);
//     distance[1] = 0;
//     BFS(listA, distance); //, visited);
//     for (int i = 2; i <= n; i++)
//         cout << distance[i] << endl;
//     return 0;
// }
// // ----------
// // CSES - Nearest Smaller Values | Giá trị nhỏ hơn gần nhất
// #include <bits/stdc++.h>
// #include <unordered_map>
// #include <unordered_set>
// using ld = long double;
// using ll = long long;
// using ull = unsigned long long;
// using uli = unsigned long int;
// using namespace std;

// const bool BruteForce = false;

// #define PI 3.141592653589793
// #define INF 1000000000
// #define MOD 1000000007
// #define MAX 100001

// #define io                        \
//     ios_base::sync_with_stdio(0); \
//     cin.tie(NULL);                \
//     cout.tie(NULL);
// #define iint pair<int, int>
// #define llong pair<long long, long long>
// #define st first;
// #define nd second;
// #define input "LQDOJ5.in"
// #define output "LQDOJ5.out"

// #define MTY(Container) Container.empty()
// #define MEM(Array, value) memset(Array, value, sizeof(Array))
// #define FOR(i, start, end) for (int i = start; i < end; i++)
// #define FOREACH(i, Container) for (auto i = (Container).begin(); i != (Container).end(); ++i)
// #define ALL(Container) (Container).begin(), (Container).end()
// #define SIZE(Container)
// #define PUSHBACK(Container, value) Container.push_back(value)
// #define PUSHFRONT(Container, value) Container.push_front(value)
// #define POPBACK(Container, value) Container.pop_back(value)
// #define POPFRONT(Container, value) Container.pop_front(value)

// template <class dataType>
// istream &operator>>(istream &in, vector<dataType> &Array)
// {
//     for (auto &value : Array)
//     {
//         in >> value;
//     }
//     return in;
// }

// int main()
// {
//     io;
//     freopen(input, "r", stdin);
//     freopen(output, "w", stdout);
//     int n;
//     cin >> n;
//     vector<int> x(n);
//     map<int, int> index;
//     stack<int> stk;
//     for (int i = 0; i < n; i++)
//     {
//         cin >> x[i];
//         index[x[i]] = i + 1;
//         if (stk.empty())
//         {
//             cout << 0 << " ";
//             stk.push(x[i]);
//             continue;
//         }
//         else
//         {
//             while (!stk.empty() && stk.top() >= x[i])
//             {
//                 stk.pop();
//             }
//             if (stk.empty())
//             {
//                 cout << 0 << " ";
//             }
//             else
//             {
//                 cout << index[stk.top()] << " ";
//             }
//             stk.push(x[i]);
//         }
//     }
//     return 0;
// }
// // ----------
// // CSES - Counting Rooms | Đếm phòng
// #include <bits/stdc++.h>
// #include <unordered_map>
// #include <unordered_set>
// using ld = long double;
// using ll = long long;
// using ull = unsigned long long;
// using uli = unsigned long int;
// using namespace std;

// const bool BruteForce = false;

// #define PI 3.141592653589793
// #define INF 1000000000
// #define MOD 1000000007
// #define MAX 100001

// #define io                        \
//     ios_base::sync_with_stdio(0); \
//     cin.tie(NULL);                \
//     cout.tie(NULL);
// #define iint pair<int, int>
// #define llong pair<long long, long long>
// #define st first;
// #define nd second;
// #define input "LQDOJ5.in"
// #define output "LQDOJ5.out"

// #define MTY(Container) Container.empty()
// #define MEM(Array, value) memset(Array, value, sizeof(Array))
// #define FOR(i, start, end) for (int i = start; i < end; i++)
// #define FOREACH(i, Container) for (auto i = (Container).begin(); i != (Container).end(); ++i)
// #define ALL(Container) (Container).begin(), (Container).end()
// #define SIZE(Container)
// #define PUSHBACK(Container, value) Container.push_back(value)
// #define PUSHFRONT(Container, value) Container.push_front(value)
// #define POPBACK(Container, value) Container.pop_back(value)
// #define POPFRONT(Container, value) Container.pop_front(value)

// template <class dataType>
// istream &operator>>(istream &in, vector<dataType> &Array)
// {
//     for (auto &value : Array)
//     {
//         in >> value;
//     }
//     return in;
// }
// int d_x[4] = {-1, 0, 1, 0};
// int d_y[4] = {0, 1, 0, -1};
// void floodFill(vector<vector<char>> &mat, int n, int m, int x, int y)
// {
//     mat[x][y] = '#';
//     for (int i = 0; i < 4; i++)
//     {
//         int move_x = x + d_x[i];
//         int move_y = y + d_y[i];
//         if (move_x >= 0 && move_x < n && move_y >= 0 && move_y < m && mat[move_x][move_y] == '.')
//         {
//             floodFill(mat, n, m, move_x, move_y);
//         }
//     }
// }
// int main()
// {
//     io;
//     freopen(input, "r", stdin);
//     freopen(output, "w", stdout);
//     int n, m;
//     cin >> n >> m;
//     vector<vector<char>> building(n, vector<char>(m));
//     // Input:
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < m; j++)
//         {
//             cin >> building[i][j];
//         }
//     }
//     // Output:
//     // for (int i = 0; i < n; i++)
//     // {
//     //     for (int j = 0; j < m; j++)
//     //     {
//     //         cout << building[i][j] << " ";
//     //     }
//     //     cout << endl;
//     // }
//     int room = 0;
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < m; j++)
//         {
//             if (building[i][j] == '.')
//             {
//                 floodFill(building, n, m, i, j);
//                 room++;
//                 // cout << "\n----------\n";
//                 // for (int i = 0; i < n; i++)
//                 // {
//                 //     for (int j = 0; j < m; j++)
//                 //     {
//                 //         cout << building[i][j] << " ";
//                 //     }
//                 //     cout << endl;
//                 // }
//                 // cout << "\n----------\n";
//             }
//         }
//     }
//     cout << room;
//     return 0;
// }
// // ----------
// CSES - Exponentiation | Lũy thừa
#include <bits/stdc++.h>
#include <unordered_map>
#include <unordered_set>
using ld = long double;
using ll = long long;
using ull = unsigned long long;
using uli = unsigned long int;
using namespace std;

const bool BruteForce = false;

#define PI 3.141592653589793
#define INF 1000000000
#define MOD 1000000007
#define MAX 100001

#define io                        \
    ios_base::sync_with_stdio(0); \
    cin.tie(NULL);                \
    cout.tie(NULL);
#define iint pair<int, int>
#define llong pair<long long, long long>
#define st first;
#define nd second;
#define input "LQDOJ5.in"
#define output "LQDOJ5.out"

#define MTY(Container) Container.empty()
#define MEM(Array, value) memset(Array, value, sizeof(Array))
#define FOR(i, start, end) for (int i = start; i < end; i++)
#define FOREACH(i, Container) for (auto i = (Container).begin(); i != (Container).end(); ++i)
#define ALL(Container) (Container).begin(), (Container).end()
#define SIZE(Container)
#define PUSHBACK(Container, value) Container.push_back(value)
#define PUSHFRONT(Container, value) Container.push_front(value)
#define POPBACK(Container, value) Container.pop_back(value)
#define POPFRONT(Container, value) Container.pop_front(value)

template <class dataType>
istream &operator>>(istream &in, vector<dataType> &Array)
{
    for (auto &value : Array)
    {
        in >> value;
    }
    return in;
}
ll exp(ll a, ll b)
{
    ll res = 1;
    while (b)
    {
        if (b & 1)
        {
            res = (res % MOD * a % MOD) % MOD;
        }
        a = (a % MOD * a % MOD) % MOD;
        b >>= 1;
    }
    return res;
}
int main()
{
    io;
    freopen(input, "r", stdin);
    freopen(output, "w", stdout);
    int n;
    ll a, b;
    cin >> n;
    while (n--)
    {
        cin >> a >> b;
        cout << exp(a, b) << endl;
    }
    return 0;
}