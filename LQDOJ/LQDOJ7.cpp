//? CSES - Collecting Numbers | Thu thập số
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
// #define st first
// #define nd second
// #define input "LQDOJ7.in"
// #define output "LQDOJ7.out"

// #define MTY(Container) Container.empty()
// #define MEM(Array, value) memset(Array, value, sizeof(Array))
// #define REV(Container) reverse(Container.begin(), Container.end())
// #define FOR(i, start, end) for (int i = start; i < end; i++)
// #define FOREACH(i, Container) for (auto i = (Container).begin(); i != (Container).end(); ++i)
// #define ALL(Container) (Container).begin(), (Container).end()
// #define SIZE(Container) Container.size()
// #define PUSHBACK(Container, value) Container.push_back(value)
// #define PUSHFRONT(Container, value) Container.push_front(value)
// #define POPBACK(Container, value) Container.pop_back()
// #define POPFRONT(Container, value) Container.pop_front()
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
// int main()
// {
//     io;
//     freopen(input, "r", stdin);
//     freopen(output, "w", stdout);
//     int n;
//     cin >> n;
//     vector<int> x(n);
//     unordered_map<int, int> index;
//     for (int i = 0; i < n; i++)
//     {
//         cin >> x[i];
//         index[x[i]] = i;
//     }
//     // for (auto iter = index.begin(); iter != index.end(); iter++)
//     // {
//     //     cout << iter->first << " " << iter->second << endl;
//     // }
//     int lap = 1;
//     for (int i = 2; i <= n; i++)
//     {
//         if (index[i - 1] > index[i])
//         {
//             lap++;
//         }
//         cout << i << " " << lap << endl;
//     }
//     cout << lap;
//     return 0;
// }
//!----------!//
//? Dãy số
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
// #define st first
// #define nd second
// #define input "LQDOJ7.in"
// #define output "LQDOJ7.out"

// #define MTY(Container) Container.empty()
// #define MEM(Array, value) memset(Array, value, sizeof(Array))
// #define REV(Container) reverse(Container.begin(), Container.end())
// #define FOR(i, start, end) for (int i = start; i < end; i++)
// #define FOREACH(i, Container) for (auto i = (Container).begin(); i != (Container).end(); ++i)
// #define ALL(Container) (Container).begin(), (Container).end()
// #define SIZE(Container) Container.size()
// #define PUSHBACK(Container, value) Container.push_back(value)
// #define PUSHFRONT(Container, value) Container.push_front(value)
// #define POPBACK(Container, value) Container.pop_back()
// #define POPFRONT(Container, value) Container.pop_front()
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
// int main()
// {
//     io;
//     freopen(input, "r", stdin);
//     freopen(output, "w", stdout);
//     int N;
//     cin >> N;
//     vector<int> A(N);
//     unordered_map<int, vector<int>> index;
//     vector<ll> prefix(N);
//     for (int i = 0; i < N; i++)
//     {
//         cin >> A[i];
//     }
//     prefix[0] = A[0];
//     for (int i = 1; i < N; i++)
//     {
//         prefix[i] = prefix[i - 1] + A[i];
//     }
//     ll res = LLONG_MIN;
//     for (int i = 0; i < N; i++)
//     {
//         if (index[A[i]].size())
//         {
//             for (auto prev : index[A[i]])
//             {
//                 ll sum = 0;
//                 if (prev)
//                 {
//                     sum = prefix[prev - 1];
//                 }
//                 res = max(res, prefix[i] - sum);
//             }
//         }
//         index[A[i]].push_back(i);
//     }
//     cout << res;
//     return 0;
// }
//!----------!//
// //? CSES - Subarray Divisibility | Tính chia hết của đoạn con
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
// #define st first
// #define nd second
// #define input "LQDOJ7.in"
// #define output "LQDOJ7.out"

// #define MTY(Container) Container.empty()
// #define MEM(Array, value) memset(Array, value, sizeof(Array))
// #define REV(Container) reverse(Container.begin(), Container.end())
// #define FOR(i, start, end) for (int i = start; i < end; i++)
// #define FOREACH(i, Container) for (auto i = (Container).begin(); i != (Container).end(); ++i)
// #define ALL(Container) (Container).begin(), (Container).end()
// #define SIZE(Container) Container.size()
// #define PUSHBACK(Container, value) Container.push_back(value)
// #define PUSHFRONT(Container, value) Container.push_front(value)
// #define POPBACK(Container, value) Container.pop_back()
// #define POPFRONT(Container, value) Container.pop_front()
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
// int main()
// {
//     //! NOTICE:
//     //! x < 0 ⇒ (x % k) ≠ -x % k
//     //! → or x % k = k - ((-x) % k)
//     //! → or x % k = (x + k) % k
//     io;
//     freopen(input, "r", stdin);
//     freopen(output, "w", stdout);
//     int N;
//     cin >> N;
//     vector<ll> a(N);
//     unordered_map<ll, ll> frequence;
//     vector<ll> prefixSum(N);
//     ll divSum;
//     for (int i = 0; i < N; i++)
//     {
//         cin >> a[i];
//     }
//     prefixSum[0] = (a[0]);
//     frequence[(prefixSum[0] % N + N) % N]++;
//     frequence[0]++;
//     ll res = (!prefixSum[0] && frequence[(prefixSum[0] % N + N) % N] > 0);
//     for (int i = 1; i < N; i++)
//     {
//         prefixSum[i] = (prefixSum[i - 1] + a[i]);
//         divSum = (prefixSum[i] % N + N) % N;
//         res += frequence[divSum];
//         frequence[divSum]++;
//     }
//     cout << res << endl;
//     return 0;
// }
//!----------!//
//? CSES - Playlist | Danh sách phát
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
// #define st first
// #define nd second
// #define input "LQDOJ7.in"
// #define output "LQDOJ7.out"

// #define MTY(Container) Container.empty()
// #define MEM(Array, value) memset(Array, value, sizeof(Array))
// #define REV(Container) reverse(Container.begin(), Container.end())
// #define FOR(i, start, end) for (int i = start; i < end; i++)
// #define FOREACH(i, Container) for (auto i = (Container).begin(); i != (Container).end(); ++i)
// #define ALL(Container) (Container).begin(), (Container).end()
// #define SIZE(Container) Container.size()
// #define PUSHBACK(Container, value) Container.push_back(value)
// #define PUSHFRONT(Container, value) Container.push_front(value)
// #define POPBACK(Container, value) Container.pop_back()
// #define POPFRONT(Container, value) Container.pop_front()
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
// int main()
// {
//     io;
//     freopen(input, "r", stdin);
//     freopen(output, "w", stdout);
//     int n;
//     cin >> n;
//     vector<int> k(n);
//     for (int i = 0; i < n; i++)
//     {
//         cin >> k[i];
//     }
//     ll res = 1LL;
//     if (BruteForce)
//     {
//         for (int i = 0; i < n - 1; i++)
//         {
//             for (int j = i + 1; j < n; j++)
//             {
//                 set<int> sub;
//                 for (int h = i; h <= j; h++)
//                 {
//                     sub.insert(k[h]);
//                 }
//                 if (sub.size() == (lui)(j - i + 1))
//                 {
//                     res = max(res, (ll)sub.size());
//                 }
//             }
//         }
//     }
//     else
//     {
//         // Sliding Window
//         map<int, int> last;
//         int left = 0;
//         for (int right = 0; right < n; right++)
//         {
//             if (last.count(k[right]) && last[k[right]] >= left)
//             {
//                 left = last[k[right]] + 1;
//             }
//             last[k[right]] = right;
//             res = max(res, (ll)(right - left + 1));
//         }
//     }
//     cout << res;
//     return 0;
// }
//!---------!//
//? Two pointer 1A; 1B; 1C
// #include <bits/stdc++.h>
// #include <unordered_map>
// #include <unordered_set>
// using ld = long double;
// using ll = long long;
// using ull = unsigned long long;
// using uli = unsigned long int;
// using lui = long unsigned int;
// using namespace std;

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
// #define st first
// #define nd second
// #define input "LQDOJ7.in"
// #define output "LQDOJ7.out"

// #define MTY(Container) Container.empty()
// #define MEM(Array, value) memset(Array, value, sizeof(Array))
// #define REV(Container) reverse(Container.begin(), Container.end())
// #define FOR(i, start, end) for (int i = start; i < end; i++)
// #define FOREACH(i, Container) for (auto i = (Container).begin(); i != (Container).end(); ++i)
// #define ALL(Container) (Container).begin(), (Container).end()
// #define SIZE(Container) Container.size()
// #define PUSHBACK(Container, value) Container.push_back(value)
// #define PUSHFRONT(Container, value) Container.push_front(value)
// #define POPBACK(Container, value) Container.pop_back()
// #define POPFRONT(Container, value) Container.pop_front()
// #define ISOK cout << "SUCCESS!"
// #define TLE cerr << "TLE: " << 1000 * clock() / CLOCKS_PER_SEC << "ms\n";

// template <class dataType>
// istream &operator>>(istream &in, vector<dataType> &Array)
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
// int main()
// {
//     io;
//     freopen(input, "r", stdin);
//     freopen(output, "w", stdout);
//     int n, m;
//     cin >> n >> m;
//     vector<int> a(n);
//     vector<int> b(m);
//     vector<int> res;
//     for (int i = 0; i < n; i++)
//         cin >> a[i];
//     for (int j = 0; j < m; j++)
//         cin >> b[j];
//     const char problem = 'C';
//     if (problem == 'A')
//     {
//         // cout << a << endl
//         // cout << b << endl;
//         int pa = 0;
//         int pb = 0;
//         while (pa < n && pb < m)
//         {
//             if (a[pa] < b[pb])
//             {
//                 res.push_back(a[pa++]);
//             }
//             else
//             {
//                 res.push_back(b[pb++]);
//             }
//         }
//         while (pa < n)
//         {
//             res.push_back(a[pa++]);
//         }
//         while (pb < m)
//         {
//             res.push_back(b[pb++]);
//         }
//         cout << res;
//     }
//     else if (problem == 'B')
//     {
//         int pa = 0;
//         for (int i = 0; i < m; i++)
//         {
//             int last = pa;
//             while (pa < n && a[pa] < b[i])
//             {
//                 pa++;
//             }
//             if (pa < n)
//             {
//                 res.push_back(pa);
//             }
//             else
//             {
//                 res.push_back(n);
//             }
//         }
//         cout << res;
//     }
//     else
//     {
//         ll res = 0LL;
//         map<int, int> mpa;
//         map<int, int> mpb;
//         for (int i = 0; i < n; i++)
//         {
//             mpa[a[i]]++;
//         }
//         for (int i = 0; i < m; i++)
//         {
//             mpb[b[i]]++;
//         }
//         for (auto iter = mpa.begin(); iter != mpa.end(); iter++)
//         {
//             if (mpb[iter->first])
//             {
//                 res += iter->second * mpb[iter->first];
//             }
//         }
//         cout << res;
//     }
//     return 0;
// }
//!----------!//
//? Big Sorting
// #include <bits/stdc++.h>
// #include <unordered_map>
// #include <unordered_set>
// using ld = long double;
// using ll = long long;
// using ull = unsigned long long;
// using uli = unsigned long int;
// using lui = long unsigned int;
// using namespace std;

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
// #define st first
// #define nd second
// #define input "LQDOJ7.in"
// #define output "LQDOJ7.out"

// #define MTY(Container) Container.empty()
// #define MEM(Array, value) memset(Array, value, sizeof(Array))
// #define REV(Container) reverse(Container.begin(), Container.end())
// #define FOR(i, start, end) for (int i = start; i < end; i++)
// #define FOREACH(i, Container) for (auto i = (Container).begin(); i != (Container).end(); ++i)
// #define ALL(Container) (Container).begin(), (Container).end()
// #define SIZE(Container) Container.size()
// #define PUSHBACK(Container, value) Container.push_back(value)
// #define PUSHFRONT(Container, value) Container.push_front(value)
// #define POPBACK(Container, value) Container.pop_back()
// #define POPFRONT(Container, value) Container.pop_front()
// #define ISOK cout << "SUCCESS!"
// #define TLE cerr << "TLE: " << 1000 * clock() / CLOCKS_PER_SEC << "ms\n";
// bool compare(string a, string b)
// {
//     if (a.size() == b.size())
//     {
//         for (size_t i = 0; i < a.size(); i++)
//         {
//             if (a[i] < b[i])
//                 return true;
//             else if (a[i] > b[i])
//                 return false;
//         }
//     }
//     return a.size() < b.size();
// }
// void heapify(vector<string> &a, int n, int i)
// {
//     int largest = i;
//     int left = i * 2 + 1;
//     int right = i * 2 + 2;
//     if (left < n && compare(a[largest], a[left]))
//     {
//         largest = left;
//     }
//     if (right < n && compare(a[largest], a[right]))
//     {
//         largest = right;
//     }
//     if (largest != i)
//     {
//         swap(a[largest], a[i]);
//         heapify(a, n, largest);
//     }
// }
// void heapSort(vector<string> &a, int n)
// {
//     for (int i = n / 2 - 1; i >= 0; i--)
//     {
//         heapify(a, n, i);
//     }
//     for (int i = n - 1; i > 0; i--)
//     {
//         swap(a[0], a[i]);
//         heapify(a, i, 0);
//     }
// }
// int main()
// {
//     io;
//     freopen(input, "r", stdin);
//     freopen(output, "w", stdout);
//     int n;
//     cin >> n;
//     vector<string> a(n);
//     for (string &str : a)
//     {
//         cin >> str;
//     }
//     heapSort(a, n);
//     for (string str : a)
//     {
//         cout << str << " ";
//     }
//     return 0;
// }
//!----------!//
//? Leo Thang
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

// #define Brute_Force false
// #define io                        \
//     ios_base::sync_with_stdio(0); \
//     cin.tie(NULL);                \
//     cout.tie(NULL);
// #define iint pair<int, int>
// #define llong pair<long long, long long>
// #define st first
// #define nd second
// #define input "LQDOJ7.in"
// #define output "LQDOJ7.out"
// #define OJ

// #define MTY(Container) Container.empty()
// #define MEM(Array, value) memset(Array, value, sizeof(Array))
// #define REV(Container) reverse(Container.begin(), Container.end())
// #define FOR(i, start, end) for (int i = start; i < end; i++)
// #define FOREACH(i, Container) for (auto i = (Container).begin(); i != (Container).end(); ++i)
// #define ALL(Container) (Container).begin(), (Container).end()
// #define SIZE(Container) Container.size()
// #define PUSHBACK(Container, value) Container.push_back(value)
// #define PUSHFRONT(Container, value) Container.push_front(value)
// #define POPBACK(Container, value) Container.pop_back()
// #define POPFRONT(Container, value) Container.pop_front()
// #define ISOK cout << "SUCCESS!"
// #define TLE cerr << "TLE: " << 1000 * clock() / CLOCKS_PER_SEC << "ms\n";

// template <class dataType>
// istream &operator>>(istream &in, vector<dataType> &Array)
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
// int main()
// {
//     io;
//     // freopen("CLIMBSTAIR.INP", "r", stdin);
//     // freopen("CLIMBSTAIR.OUT", "w", stdout);
//     freopen(input, "r", stdin);
//     freopen(output, "w", stdout);
//     int n, m;
//     cin >> n >> m;
//     vector<int> a(n);
//     cin >> a;
//     int t;
//     char Subtask = '3';
//     // Subtask 1
//     if (m <= 100)
//     {
//         while (m--)
//         {
//             cin >> t;
//             int j = 0;
//             while (j < n && a[j] <= t)
//             {
//                 j++;
//             }
//             cout << j << endl;
//         }
//     }
//     // Subtask 2
//     else if (Subtask == '2')
//     {
//         while (m--)
//         {
//             cin >> t;
//             auto iter = upper_bound(a.begin(), a.end(), t);
//             if (iter == a.begin())
//             {
//                 cout << 0 << endl;
//             }
//             else
//             {
//                 cout << distance(a.begin(), --iter) + 1 << endl;
//             }
//         }
//     }
//     // Subtask 3
//     else
//     {
//         vector<int> prefix(n);
//         prefix[0] = a[0];
//         for (int i = 1; i < n; i++)
//         {
//             prefix[i] = max(prefix[i - 1], a[i]);
//         }
//         while (m--)
//         {
//             cin >> t;
//             auto iter = upper_bound(prefix.begin(), prefix.end(), t);
//             if (iter == prefix.begin())
//             {
//                 cout << 0 << endl;
//             }
//             else if (iter == prefix.end())
//             {
//                 cout << n << endl;
//             }
//             else
//             {
//                 cout << distance(prefix.begin(), --iter) + 1 << endl;
//             }
//         }
//     }
//     return 0;
// }
//!----------!//
//? MILKTEA
// #include <iostream>
// #include <vector>
// #include <algorithm>
// using namespace std;
// #define input "LQDOJ7.in"
// #define output "LQDOJ7.out"
// #define io                        \
//     ios_base::sync_with_stdio(0); \
//     cin.tie(NULL);                \
//     cout.tie(NULL);
//
// void heapify(vector<int> &x, int &n, int i)
// {
//     int left = i * 2 + 1;
//     int right = i * 2 + 2;
//     int largest = i;
//     if (left < n && x[left] > x[largest])
//     {
//         largest = left;
//     }
//     if (right < n && x[right] > x[largest])
//     {
//         largest = right;
//     }
//     if (largest != i)
//     {
//         swap(x[largest], x[i]);
//         heapify(x, n, largest);
//     }
// }
// void heapSort(vector<int> &x, int &n)
// {
//     for (int i = n / 2 - 1; i >= 0; i--)
//     {
//         heapify(x, n, i);
//     }
//     for (int i = n - 1; i > 0; i--)
//     {
//         swap(x[i], x[0]);
//         heapify(x, i, 0);
//     }
// }
// int main()
// {
//     io;
//     freopen(input, "r", stdin);
//     freopen(output, "w", stdout);
//     int n;
//     cin >> n;
//     vector<int> x(n);
//     for (int &v : x)
//     {
//         cin >> v;
//     }
//     heapSort(x, n);
//     for (int v : x)
//     {
//         cout << v << " ";
//     }
//     cout << endl;
//     int q, m;
//     cin >> q;
//     while (q--)
//     {
//         cin >> m;
//         if (m >= x[x.size() - 1])
//         {
//             cout << n << endl;
//             continue;
//         }
//         // cout << binarySearch(x, n, m) + 1 << endl;
//         auto iter = upper_bound(x.begin(), x.end(), m);
//         if (iter == x.begin())
//         {
//             cout << 0 << endl;
//         }
//         else if (iter == x.end())
//         {
//             cout << n << endl;
//         }
//         else
//         {
//             // cout << distance(x.begin(), --iter) + 1 << endl;
//             cout << (--iter - x.begin()) + 1 << endl;
//         }
//     }
//     return 0;
// }
//!----------!//
//? Tập xe
// #include <iostream>
// #include <vector>
// #include <algorithm>
// #define input "LQDOJ7.in"
// #define output "LQDOJ7.out"
// #define io                        \
//     ios_base::sync_with_stdio(0); \
//     cin.tie(NULL);                \
//     cout.tie(NULL);
// using namespace std;
// using ll = long long;

// int partition(vector<int> &a, int low, int high)
// {
//     int i = low - 1;
//     int pivot = high;
//     for (int j = low; j <= high - 1; j++)
//     {
//         if (a[j] < a[pivot])
//         {
//             i++;
//             swap(a[i], a[j]);
//         }
//     }
//     i++;
//     swap(a[i], a[pivot]);
//     return i;
// }
// void quickSort(vector<int> &a, int n, int low, int high)
// {
//     if (low >= high)
//     {
//         return;
//     }
//     int pi = partition(a, low, high);
//     quickSort(a, n, low, pi - 1);
//     quickSort(a, n, pi + 1, high);
// }
// int main()
// {
//     io;
//     freopen(input, "r", stdin);
//     freopen(output, "w", stdout);

//     int n, m;
//     cin >> n >> m;
//     vector<int> a(n);
//     for (int &x : a)
//     {
//         cin >> x;
//     }
//     quickSort(a, n, 0, n - 1);
//     for (int x : a)
//     {
//         cout << x << " ";
//     }
//     cout << endl;
//     ll res = 0;
//     for (int i = 0; i < n - 1; i++)
//     {
//         // cout << res << endl;
//         auto iter = upper_bound(a.begin() + i, a.end(), m - a[i]);
//         if (iter == a.begin())
//         {
//             res += 0;
//         }
//         else if (iter == a.end())
//         {
//             res += n - i - 1;
//         }
//         else
//         {
//             --iter;
//             if (iter - (a.begin()) > i)
//             {
//                 // cout << "here we go: " << (iter - (a.begin() + i)) << endl;
//                 res += (iter - (a.begin() + i));
//             }
//         }
//     }
//     cout << res;
//     return 0;
// }
//!----------!//
//? Nobita và cửa ải cuối cùng
#include <iostream>
#include <vector>
#include <algorithm>
#define input "LQDOJ7.in"
#define output "LQDOJ7.out"
#define io                        \
    ios_base::sync_with_stdio(0); \
    cin.tie(NULL);                \
    cout.tie(NULL);
using namespace std;
using ll = long long;
int partition(vector<ll> &a, int low, int high)
{
    int pivot = high;
    int i = low - 1;
    for (int j = low; j < high; j++)
    {
        if (a[j] < a[pivot])
        {
            i++;
            swap(a[i], a[j]);
        }
    }
    i++;
    swap(a[i], a[pivot]);
    return i;
}
void quickSort(vector<ll> &a, int n, int low, int high)
{
    if (low >= high)
    {
        return;
    }
    int pi = partition(a, low, high);
    quickSort(a, n, low, pi - 1);
    quickSort(a, n, pi + 1, high);
}
int main()
{
    io;
    freopen(input, "r", stdin);
    freopen(output, "w", stdout);

    int n, k;
    cin >> n >> k;
    vector<int> a(n);
    for (int &x : a)
    {
        cin >> x;
    }
    const int brute_force = true;
    if (brute_force)
    {
        vector<ll> b;
        for (int i = 0; i < n - 1; i++)
        {
            for (int j = i + 1; j < n; j++)
            {
                b.push_back((ll)a[i] * (ll)a[j]);
            }
        }
        quickSort(b, b.size(), 0, b.size() - 1);
        // for (int x : b)
        // {
        //     cout << x << " ";
        // }
        cout << b[k - 1];
    }
    else
    {
    }
    return 0;
}
//!----------!//
//? CSES - Subarray Distinct Values | Giá trị phân biệt trong đoạn con
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
// #define st first
// #define nd second
// #define input "LQDOJ7.in"
// #define output "LQDOJ7.out"

// #define MTY(Container) Container.empty()
// #define MEM(Array, value) memset(Array, value, sizeof(Array))
// #define REV(Container) reverse(Container.begin(), Container.end())
// #define FOR(i, start, end) for (int i = start; i < end; i++)
// #define FOREACH(i, Container) for (auto i = (Container).begin(); i != (Container).end(); ++i)
// #define ALL(Container) (Container).begin(), (Container).end()
// #define SIZE(Container) Container.size()
// #define PUSHBACK(Container, value) Container.push_back(value)
// #define PUSHFRONT(Container, value) Container.push_front(value)
// #define POPBACK(Container, value) Container.pop_back()
// #define POPFRONT(Container, value) Container.pop_front()
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
// int main()
// {
//     io;
//     freopen(input, "r", stdin);
//     freopen(output, "w", stdout);
//     int n, k;
//     cin >> n >> k;
//     vector<int> x(n);
//     for (int i = 0; i < n; i++)
//     {
//         cin >> x[i];
//     }

//     unordered_map<int, int> lastIndex;
//     int left, right;
//     ll res = 0LL;
//     left = 0;
//     right = 1;
//     lastIndex[left] = 0;
//     lastIndex[right] = 1;
//     while (right < n)
//     {
//         if (right - left + 1 <= k)
//         {
//             lastIndex[x[right]] = right++;
//             if (lastIndex[right] > left && lastIndex[right] < right)
//             {
//                 left = max(lastIndex[right] + 1, right + 1);
//                 right = max(left + 1, lastIndex[right] + 1);
//             }
//             res++;
//         }
//         if (right - left + 1 > k)
//         {
//             for (int i = left; i <= right; i++)
//             {
//                 cout << x[i] << " ";
//             }
//             cout << endl;
//             lastIndex[left] = left++;
//             lastIndex[right] = right++;
//             res++;
//         }
//     }
//     cout << res;
//     // while (right < n)
//     // {
//     //     if (right - left + 1 < k)
//     //     {
//     //         while (right < n && lastIndex[x[right]] > left)
//     //         {
//     //             left = lastIndex[x[right]];
//     //             right = max(left + 1, right + 1);
//     //             // right++;
//     //             // lastIndex[x[left++]] = left;
//     //             // lastIndex[x[right++]] = right;
//     //             if (right - left + 1 == k)
//     //             {
//     //                 res++;
//     //                 left
//     //             }
//     //             lastIndex[x[right]] = right;
//     //         }
//     //     }
//     //     if (right - left + 1 == k)
//     //     {
//     //         res++;
//     //         lastIndex[x[left++]] = left;
//     //         lastIndex[x[right++]] = right;
//     //     }
//     //     if (lastIndex[right] > left)
//     //     {

//     //     }
//     //     lastIndex[x[left]] = left;
//     // }
//     return 0;
// }
//!----------!//
//? Chú ếch và hòn đá 2
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
// #define st first
// #define nd second
// #define input "LQDOJ7.in"
// #define output "LQDOJ7.out"

// #define MTY(Container) Container.empty()
// #define MEM(Array, value) memset(Array, value, sizeof(Array))
// #define REV(Container) reverse(Container.begin(), Container.end())
// #define FOR(i, start, end) for (int i = start; i < end; i++)
// #define FOREACH(i, Container) for (auto i = (Container).begin(); i != (Container).end(); ++i)
// #define ALL(Container) (Container).begin(), (Container).end()
// #define SIZE(Container) Container.size()
// #define PUSHBACK(Container, value) Container.push_back(value)
// #define PUSHFRONT(Container, value) Container.push_front(value)
// #define POPBACK(Container, value) Container.pop_back()
// #define POPFRONT(Container, value) Container.pop_front()
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
// int main()
// {
//     io;
//     freopen(input, "r", stdin);
//     freopen(output, "w", stdout);
//     int N, K;
//     cin >> N >> K;
//     vector<int> h(N);
//     vector<ll> dp(N, LLONG_MAX);
//     for (int &x : h)
//     {
//         cin >> x;
//     }
//     // h[]
//     // for (int x : h)
//     // {
//     //     cout << x << " ";
//     // }
//     dp[0] = 0LL;
//     for (int i = 0; i < N; i++)
//     {
//         for (int j = 1; j <= min(i, K); j++)
//         {
//             dp[i] = min(dp[i], dp[i - j] + (ll)abs(h[i] - h[i - j]));
//         }
//     }
//     // dp[]
//     // for (ll x : dp)
//     // {
//     //     cout << x << " ";
//     // }
//     cout << dp[N - 1];
//     return 0;
// }
//!----------!//
//? CSES - Subarray Sums I | Tổng đoạn con I
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
// #define st first
// #define nd second
// #define input "LQDOJ7.in"
// #define output "LQDOJ7.out"

// #define MTY(Container) Container.empty()
// #define MEM(Array, value) memset(Array, value, sizeof(Array))
// #define REV(Container) reverse(Container.begin(), Container.end())
// #define FOR(i, start, end) for (int i = start; i < end; i++)
// #define FOREACH(i, Container) for (auto i = (Container).begin(); i != (Container).end(); ++i)
// #define ALL(Container) (Container).begin(), (Container).end()
// #define SIZE(Container) Container.size()
// #define PUSHBACK(Container, value) Container.push_back(value)
// #define PUSHFRONT(Container, value) Container.push_front(value)
// #define POPBACK(Container, value) Container.pop_back()
// #define POPFRONT(Container, value) Container.pop_front()
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
// int main()
// {
//     io;
//     freopen(input, "r", stdin);
//     freopen(output, "w", stdout);
//     int n, x;
//     cin >> n >> x;
//     vector<int> a(n);
//     vector<ll> prefix(n);
//     map<ll, int> sum;
//     for (int i = 0; i < n; i++)
//     {
//         cin >> a[i];
//     }
//     prefix[0] = a[0];
//     sum[prefix[0]]++;
//     sum[0]++;
//     ll res = (prefix[0] == x);
//     for (int i = 1; i < n; i++)
//     {
//         prefix[i] = a[i] + prefix[i - 1];
//         res += sum[prefix[i] - x];
//         sum[prefix[i]]++;
//     }
//     cout << res;
//     return 0;
// }