//? Liên thông
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
// #define input "LQDOJ6.in"
// #define output "LQDOJ6.out"

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
// struct Adjacency
// {
//     set<int> vertices;
// };
// void DFS(vector<Adjacency> &listAdj, vector<bool> &visited, int vertex) //, vector<set<int>> &component, int vertex, int nextVertex)
// {
//     visited[vertex] = true;
//     for (int neighbor : listAdj[vertex].vertices)
//     {
//         if (!visited[neighbor])
//         {
//             visited[neighbor] = true;
//             DFS(listAdj, visited, neighbor); //, component, vertex, neighbor);
//         }
//     }
// }
// int main()
// {
//     io;
//     freopen(input, "r", stdin);
//     freopen(output, "w", stdout);
//     int T;
//     cin >> T;
//     while (T--)
//     {
//         int N, M, u, v, start, end;
//         cin >> N >> M;
//         vector<Adjacency> G(N + 1);
//         vector<Adjacency> revG(N + 1);
//         for (int i = 0; i < M; i++)
//         {
//             cin >> u >> v;
//             G[u].vertices.insert(v);
//             revG[v].vertices.insert(u);
//         }
//         vector<bool> visited(N + 1, false);
//         DFS(G, visited, 1);
//         for (int i = 1; i <= N; i++)
//         {
//             if (!visited[i])
//             {
//                 cout << "YES\n";
//                 goto nextLoop;
//             }
//         }
//         fill(visited.begin(), visited.end(), false);
//         DFS(revG, visited, 1);
//         for (int i = 1; i <= N; i++)
//         {
//             if (!visited[i])
//             {
//                 cout << "YES\n";
//                 goto nextLoop;
//             }
//         }
//         cout << "NO\n";
//     nextLoop:;
//     }
//     return 0;
// }
//!----------!//
//? Dãy số hoàn hảo
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
// #define input "LQDOJ6.in"
// #define output "LQDOJ6.out"

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

// int main()
// {
//     io;
//     freopen(input, "r", stdin);
//     freopen(output, "w", stdout);
//     int n, k;
//     cin >> n >> k;
//     vector<int> a(n);
//     for (int i = 0; i < n; i++)
//     {
//         cin >> a[i];
//         // if (a[i] == k)
//         //     res++;
//     }
//     // cout << "res: " << res << endl;
//     vector<ll> prefix(n);
//     map<ll, int> sum;
//     prefix[0] = a[0];
//     sum[prefix[0]] = 1;
//     sum[0] += 1;
//     ll res = (prefix[0] == k);
//     for (int i = 1; i < n; i++)
//     {
//         prefix[i] = a[i] + prefix[i - 1];
//         if (sum[prefix[i] - k] > 0)
//         {
//             res += sum[prefix[i] - k];
//         }
//         sum[prefix[i]]++;
//     }
//     cout << res;
//     return 0;
// }
//!----------!//
// ?Atcoder Educational DP Contest - Problem A: Frog 1
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
// #define input "LQDOJ6.in"
// #define output "LQDOJ6.out"

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

// int main()
// {
//     io;
//     freopen(input, "r", stdin);
//     freopen(output, "w", stdout);
//     int n;
//     cin >> n;
//     vector<int> h(n);
//     for (int i = 0; i < n; i++)
//     {
//         cin >> h[i];
//     }
//     vector<ll> dp(n);
//     dp[0] = 0;
//     dp[1] = abs(h[1] - h[0]);
//     for (int i = 2; i < n; i++)
//     {
//         dp[i] = min(dp[i - 1] + abs(h[i] - h[i - 1]), dp[i - 2] + abs(h[i] - h[i - 2]));
//     }
//     cout << dp[n - 1];
//     return 0;
// }
//!----------!//
//? CSES - Course Schedule | Sắp xếp khóa học
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
// #define input "LQDOJ6.in"
// #define output "LQDOJ6.out"

// #define MTY(Container) Container.empty()
// #define MEM(Array, value) memset(Array, value, sizeof(Array))
// #define REV(Container) reverse(Container.begin(), Container.end())
// #define FOR(i, start, end) for (int i = start; i < end; i++)
// #define FOREACH(i, Container) for (auto i = (Container).begin(); i != (Container).end(); ++i)
// #define ALL(Container) (Container).begin(), (Container).end()
// #define SIZE(Container)
// #define PUSHBACK(Container, value) Container.push_back(value)
// #define PUSHFRONT(Container, value) Container.push_front(value)
// #define POPBACK(Container, value) Container.pop_back(value)
// #define POPFRONT(Container, value) Container.pop_front(value)

// template <class dataType>
// istream &operator>>(istream &in, vector<dataType> Array)
// {
//     FOR(i, 0, Array.size())
//     in >> Array[i];
//     return in;
// }
// template <class dataType>
// ostream &operator<<(ostream &out, vector<dataType> Array)
// {
//     FOR(i, 0, Array.size())
//     out << Array[i] << " ";
//     return out;
// }
// struct Adjacency
// {
//     set<int> vertices;
// };
// bool detectCycle(vector<Adjacency> &listAdj, vector<char> &color, int vertex)
// {
//     color[vertex] = 'G';
//     for (int neighbor : listAdj[vertex].vertices)
//     {
//         if (color[neighbor] == 'W')
//         {
//             if (detectCycle(listAdj, color, neighbor))
//                 return true;
//         }
//         else if (color[neighbor] == 'G')
//         {
//             return true;
//         }
//     }
//     color[vertex] = 'B';
//     return false;
// }
// void DFS(vector<Adjacency> &listAdj, vector<bool> &visited, int vertex, stack<int> &topo)
// {
//     visited[vertex] = true;
//     for (int neighbor : listAdj[vertex].vertices)
//     {
//         if (!visited[neighbor])
//         {
//             DFS(listAdj, visited, neighbor, topo);
//         }
//     }
//     topo.push(vertex);
// }
// int main()
// {
//     io;
//     freopen(input, "r", stdin);
//     freopen(output, "w", stdout);
//     int N, M, u, v;
//     cin >> N >> M;
//     vector<Adjacency> G(N + 1);
//     vector<bool> visited(N + 1, false);
//     vector<char> color(N + 1, 'W');

//     for (int i = 0; i < M; i++)
//     {
//         cin >> u >> v;
//         G[u].vertices.insert(v);
//     }
//     for (int i = 1; i <= N; i++)
//     {
//         if (color[i] == 'W' && detectCycle(G, color, i))
//         {
//             cout << "IMPOSSIBLE";
//             return 0;
//         }
//     }
//     stack<int> topo;
//     for (int i = 1; i <= N; i++)
//     {
//         if (!visited[i])
//             DFS(G, visited, i, topo);
//     }
//     while (!topo.empty())
//     {
//         cout << topo.top() << " ";
//         topo.pop();
//     }
//     return 0;
// }
//!----------!//
// //? CSES - Building Roads | Xây đường
// #include <bits/stdc++.h>
// #include <unordered_map>
// #include <unordered_set>
// using ld = long double;
// using ll = long long;
// using ull = unsigned long long;
// using uli = unsigned long int;
// using lui = long unsigned int;
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
// #define input "LQDOJ6.in"
// #define output "LQDOJ6.out"

// #define MTY(Container) Container.empty()
// #define MEM(Array, value) memset(Array, value, sizeof(Array))
// #define REV(Container) reverse(Container.begin(), Container.end())
// #define FOR(i, start, end) for (int i = start; i < end; i++)
// #define FOREACH(i, Container) for (auto i = (Container).begin(); i != (Container).end(); ++i)
// #define ALL(Container) (Container).begin(), (Container).end()
// #define SIZE(Container)
// #define PUSHBACK(Container, value) Container.push_back(value)
// #define PUSHFRONT(Container, value) Container.push_front(value)
// #define POPBACK(Container, value) Container.pop_back(value)
// #define POPFRONT(Container, value) Container.pop_front(value)
// #define ISOK cout << "SUCCESS!"
// #define TLE cerr << "TLE: " << 1000 * clock() / CLOCKS_PER_SEC << "ms\n";

// template <class dataType>
// istream &operator>>(istream &in, vector<dataType> Array)
// {
//     FOR(i, 0, Array.size())
//     in >> Array[i];
//     return in;
// }
// template <class dataType>
// ostream &operator<<(ostream &out, vector<dataType> Array)
// {
//     FOR(i, 0, Array.size())
//     out << Array[i] << " ";
//     return out;
// }
// struct Adjacency
// {
//     vector<int> vertices;
// };
// void DFS(vector<Adjacency> &G, vector<bool> &visited, int v)
// {
//     visited[v] = true;
//     for (int near : G[v].vertices)
//     {
//         if (!visited[near])
//         {
//             DFS(G, visited, near);
//         }
//     }
// }
// int main()
// {
//     io;
//     freopen(input, "r", stdin);
//     freopen(output, "w", stdout);
//     int N, M, u, v;
//     cin >> N >> M;
//     vector<Adjacency> G(N + 1);
//     vector<bool> visited(N + 1, false);
//     for (int i = 0; i < M; i++)
//     {
//         cin >> u >> v;
//         G[u].vertices.push_back(v);
//         G[v].vertices.push_back(u);
//     }
//     vector<pair<int, int>> res;
//     int prev = 0;
//     for (lui i = 1; i <= N; i++)
//     {
//         if (!visited[i])
//         {
//             if (prev)
//             {
//                 res.push_back(make_pair(prev, i));
//             }
//             prev = i;
//             DFS(G, visited, i);
//         }
//     }
//     cout << res.size() << endl;
//     for (lui i = 0; i < res.size(); i++)
//     {
//         cout << res[i].first << " " << res[i].second << endl;
//     }
//     TLE;
//     return 0;
// }
//!----------!//
//? CSES - Message Route | Đường truyền tin nhắn
// #include <bits/stdc++.h>
// #include <unordered_map>
// #include <unordered_set>
// using ld = long double;
// using ll = long long;
// using ull = unsigned long long;
// using uli = unsigned long int;
// using lui = long unsigned int;
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
// #define input "LQDOJ6.in"
// #define output "LQDOJ6.out"

// #define MTY(Container) Container.empty()
// #define MEM(Array, value) memset(Array, value, sizeof(Array))
// #define REV(Container) reverse(Container.begin(), Container.end())
// #define FOR(i, start, end) for (int i = start; i < end; i++)
// #define FOREACH(i, Container) for (auto i = (Container).begin(); i != (Container).end(); ++i)
// #define ALL(Container) (Container).begin(), (Container).end()
// #define SIZE(Container)
// #define PUSHBACK(Container, value) Container.push_back(value)
// #define PUSHFRONT(Container, value) Container.push_front(value)
// #define POPBACK(Container, value) Container.pop_back(value)
// #define POPFRONT(Container, value) Container.pop_front(value)
// #define ISOK cout << "SUCCESS!"
// #define TLE cerr << "TLE: " << 1000 * clock() / CLOCKS_PER_SEC << "ms\n";

// template <class dataType>
// istream &operator>>(istream &in, vector<dataType> Array)
// {
//     FOR(i, 0, Array.size())
//     in >> Array[i];
//     return in;
// }
// template <class dataType>
// ostream &operator<<(ostream &out, vector<dataType> Array)
// {
//     FOR(i, 0, Array.size())
//     out << Array[i] << " ";
//     return out;
// }
// struct Adjacency
// {
//     vector<int> vertices;
// };
// bool DFS(vector<Adjacency> &G, vector<bool> &visited, vector<int> &parent, int start, int &end)
// {
//     visited[start] = true;
//     for (int near : G[start].vertices)
//     {
//         if (!visited[near])
//         {
//             parent[near] = start;
//             if (near == end)
//             {
//                 // cout << "\nparent: " << parent << endl;
//                 vector<int> path;
//                 for (int i = end; i != 1; i = parent[i])
//                 {
//                     path.push_back(i);
//                 }
//                 path.push_back(1);
//                 REV(path);
//                 cout << path.size() << endl;
//                 cout << path;
//                 return true;
//             }
//             if (DFS(G, visited, parent, near, end))
//                 return true;
//         }
//     }
//     return false;
// }
// bool BFS(vector<Adjacency> &G, vector<bool> &visited, vector<int> &parent, int &end)
// {
//     queue<int> Queue;
//     Queue.push(1);
//     visited[1] = true;
//     while (!Queue.empty())
//     {
//         int start = Queue.front();
//         Queue.pop();
//         for (int near : G[start].vertices)
//         {
//             if (!visited[near])
//             {
//                 parent[near] = start;
//                 if (near == end)
//                 {
//                     // cout << "\nparent: " << parent << endl;
//                     vector<int> path;
//                     for (int i = end; i != 1; i = parent[i])
//                     {
//                         path.push_back(i);
//                     }
//                     path.push_back(1);
//                     REV(path);
//                     cout << path.size() << endl;
//                     cout << path;
//                     return true;
//                 }
//                 Queue.push(near);
//                 visited[near] = true;
//             }
//         }
//     }
//     return false;
// }
// int main()
// {
//     io;
//     freopen(input, "r", stdin);
//     freopen(output, "w", stdout);
//     int N, M, u, v;
//     cin >> N >> M;
//     vector<Adjacency> G(N + 1);
//     vector<bool> visited(N + 1, false);
//     for (int i = 0; i < M; i++)
//     {
//         cin >> u >> v;
//         G[u].vertices.push_back(v);
//         G[v].vertices.push_back(u);
//     }

//     // for (int i = 1; i < N; i++)
//     // {
//     //     cout << i << " -> " << G[i].vertices << endl;
//     // }

//     vector<int> parent(N + 1, 0);
//     // if (!DFS(G, visited, parent, 1, N))
//     if (!BFS(G, visited, parent, N))
//     {
//         cout << "IMPOSSIBLE";
//     }
//     TLE;
//     return 0;
// }
//? CSES - Building Teams | Xây đội
//!----------!//
#include <bits/stdc++.h>
#include <unordered_map>
#include <unordered_set>
using ld = long double;
using ll = long long;
using ull = unsigned long long;
using uli = unsigned long int;
using lui = long unsigned int;
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
#define input "LQDOJ6.in"
#define output "LQDOJ6.out"

#define MTY(Container) Container.empty()
#define MEM(Array, value) memset(Array, value, sizeof(Array))
#define REV(Container) reverse(Container.begin(), Container.end())
#define FOR(i, start, end) for (int i = start; i < end; i++)
#define FOREACH(i, Container) for (auto i = (Container).begin(); i != (Container).end(); ++i)
#define ALL(Container) (Container).begin(), (Container).end()
#define SIZE(Container)
#define PUSHBACK(Container, value) Container.push_back(value)
#define PUSHFRONT(Container, value) Container.push_front(value)
#define POPBACK(Container, value) Container.pop_back(value)
#define POPFRONT(Container, value) Container.pop_front(value)
#define ISOK cout << "SUCCESS!"
#define TLE cerr << "TLE: " << 1000 * clock() / CLOCKS_PER_SEC << "ms\n";

template <class dataType>
istream &operator>>(istream &in, vector<dataType> Array)
{
    FOR(i, 0, Array.size())
    in >> Array[i];
    return in;
}
template <class dataType>
ostream &operator<<(ostream &out, vector<dataType> Array)
{
    FOR(i, 0, Array.size())
    out << Array[i] << " ";
    return out;
}
struct Adjacency
{
    vector<int> vertices;
};
bool DFS(vector<Adjacency> &G, vector<bool> &visited, vector<int> &parent, int start, int &end)
{
    visited[start] = true;
    for (int near : G[start].vertices)
    {
        if (!visited[near])
        {
            parent[near] = start;
            if (near == end)
            {
                // cout << "\nparent: " << parent << endl;
                vector<int> path;
                for (int i = end; i != 1; i = parent[i])
                {
                    path.push_back(i);
                }
                path.push_back(1);
                REV(path);
                cout << path.size() << endl;
                cout << path;
                return true;
            }
            if (DFS(G, visited, parent, near, end))
                return true;
        }
    }
    return false;
}
bool BFS(vector<Adjacency> &G, vector<bool> &visited, vector<int> &parent, int &end)
{
    queue<int> Queue;
    Queue.push(1);
    visited[1] = true;
    while (!Queue.empty())
    {
        int start = Queue.front();
        Queue.pop();
        for (int near : G[start].vertices)
        {
            if (!visited[near])
            {
                parent[near] = start;
                if (near == end)
                {
                    // cout << "\nparent: " << parent << endl;
                    vector<int> path;
                    for (int i = end; i != 1; i = parent[i])
                    {
                        path.push_back(i);
                    }
                    path.push_back(1);
                    REV(path);
                    cout << path.size() << endl;
                    cout << path;
                    return true;
                }
                Queue.push(near);
                visited[near] = true;
            }
        }
    }
    return false;
}
int main()
{
    io;
    freopen(input, "r", stdin);
    freopen(output, "w", stdout);
    int N, M, u, v;
    cin >> N >> M;
    vector<Adjacency> G(N + 1);
    vector<bool> visited(N + 1, false);
    for (int i = 0; i < M; i++)
    {
        cin >> u >> v;
        G[u].vertices.push_back(v);
        G[v].vertices.push_back(u);
    }

    // for (int i = 1; i < N; i++)
    // {
    //     cout << i << " -> " << G[i].vertices << endl;
    // }

    vector<int> parent(N + 1, 0);
    // if (!DFS(G, visited, parent, 1, N))
    if (!BFS(G, visited, parent, N))
    {
        cout << "IMPOSSIBLE";
    }
    TLE;
    return 0;
}
//!----------!//
//? Công ty đa cấp
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
// #define input "LQDOJ6.in"
// #define output "LQDOJ6.out"

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
// struct Adjacency
// {
//     set<int> vertices;
// };
// void DFS(vector<Adjacency> &listAdj, vector<bool> &visited, int vertex) //, vector<set<int>> &component, int vertex, int nextVertex)
// {
//     visited[vertex] = true;
//     for (int neighbor : listAdj[vertex].vertices)
//     {
//         if (!visited[neighbor])
//         {
//             visited[neighbor] = true;
//             DFS(listAdj, visited, neighbor); //, component, vertex, neighbor);
//         }
//     }
// }
// int main()
// {
//     io;
//     freopen(input, "r", stdin);
//     freopen(output, "w", stdout);
//         int N, M, u, v, start, end;
//         cin >> N >> M;
//         vector<Adjacency> G(N + 1);
//         vector<Adjacency> revG(N + 1);
//         for (int i = 0; i < M; i++)
//         {
//             cin >> u >> v;
//             G[u].vertices.insert(v);
//             revG[v].vertices.insert(u);
//         }
//         vector<bool> visited(N + 1, false);

//     return 0;

// }