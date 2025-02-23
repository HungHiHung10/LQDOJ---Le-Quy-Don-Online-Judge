//? ICPC Central B
// #include <bits/stdc++.h>
// #define input "LQDOJ8.in"
// #define output "LQDOJ8.out"
// #define MOD 1000000007
// using ll = long long;
// using namespace std;
// #define io                        \
//     ios_base::sync_with_stdio(0); \
//     cin.tie(NULL);                \
//     cout.tie(NULL);
// int partition(vector<int> &a, int low, int high)
// {
//     int pivot = high;
//     int i = low - 1;
//     for (int j = low; j < high; j++)
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

//     int n;
//     cin >> n;
//     vector<int> a(n);
//     int neg = 0;
//     int maxNeg = INT_MIN;
//     ll res = 1LL;
//     ll resPos = 1LL;
//     for (int &x : a)
//     {
//         cin >> x;
//         if (x)
//         {
//             resPos = (resPos % MOD * x % MOD) % MOD;
//         }
//         res = (res % MOD * (x % MOD + MOD) % MOD) % MOD;
//         if (x < 0)
//         {
//             neg++;
//             maxNeg = max(maxNeg, x);
//         }
//     }
//     quickSort(a, n, 0, n - 1);
//     if (res == 0)
//     {
//         if (neg & 1)
//         {
//             cout << max(res, resPos);
//         }
//         else
//         {
//             cout << resPos;
//         }
//     }
//     else
//     {
//         if (neg & 1)
//         {
//             ll ans = 1LL;
//             for (int i = 0; i < n - 1; i++)
//             {
//                 if (a[i] == maxNeg)
//                 {
//                     i++;
//                 }
//                 ll mul = (ll)(a[i]) * (ll)a[i + 1];
//                 ans = ((ans % MOD) * (mul % MOD)) % MOD;
//                 i++;
//             }
//             if (!(n & 1))
//             {
//                 ans = ((ans % MOD) * (ll)(a[n - 1]) % MOD) % MOD;
//             }
//             cout << ans;
//         }
//         else
//         {
//             cout << res;
//         }
//     }
//     return 0;
// }
//? CSES - Playlist | Danh sách phát
// #include <iostream>
// #include <vector>
// #include <map>
// #define input "LQDOJ8.in"
// #define output "LQDOJ8.out"
// #define io                        \
//     ios_base::sync_with_stdio(0); \
//     cin.tie(NULL);                \
//     cout.tie(NULL);
// using namespace std;
// int main()
// {
//     io;
//     freopen(input, "r", stdin);
//     freopen(output, "w", stdout);

//     int n;
//     cin >> n;
//     vector<int> k(n);
//     for (int &x : k)
//     {
//         cin >> x;
//     }
//     int res = 1;
//     map<int, int> last;
//     last[k[0]] = 1;
//     int i = 0;
//     for (int j = 1; j < n; j++)
//     {
//         while (j < n && !(last[k[j]] >= i + 1) && k[j] != k[i])
//         {
//             // cout << i << " " << j << endl;
//             last[k[j]] = j + 1;
//             res = max(res, j - i + 1);
//             j++;
//         }
//         i = last[k[j]];
//         last[k[j]] = j + 1;
//     }
//     // cout << endl << res;
//     cout << res;
//     return 0;
// }
//? Dãy con min max
// #include <bits/stdc++.h>
// #define input "LQDOJ8.in"
// #define output "LQDOJ8.out"
// #define io                        \
//     ios_base::sync_with_stdio(0); \
//     cin.tie(NULL);                \
//     cout.tie(NULL);
// using ll = long long;
// using namespace std;
// int main()
// {
//     io;
//     freopen(input, "r", stdin);
//     freopen(output, "w", stdout);
//     int n;
//     cin >> n;
//     vector<int> imax;
//     vector<int> imin;
//     vector<int> a(n);
//     for (int &x : a)
//     {
//         cin >> x;
//     }
//     int emax = INT_MIN;
//     int emin = INT_MAX;
//     for (int i = 0; i < n; i++)
//     {
//         emax = max(emax, a[i]);
//         emin = min(emin, a[i]);
//     }
//     // cout << "here: " << emax << " " << emin << endl;
//     for (int i = 0; i < n; i++)
//     {
//         if (a[i] == emax)
//             imax.push_back(i);
//         if (a[i] == emin)
//             imin.push_back(i);
//     }
//     int res = INT_MAX;
//     for (int i = 0; i < imax.size(); i++)
//     {
//         for (int j = 0; j < imin.size(); j++)
//         {
//             // cout << imin[j] << " " << imax[i] << endl;
//             int len = 0;
//             if (imin[j] > imax[i])
//                 len = imin[j] - imax[i] + 1;
//             else
//                 len = imax[i] - imin[j] + 1;
//             res = min(res, len);
//         }
//     }
//     cout << res;
//     return 0;
// }
//? sunw
// #include <bits/stdc++.h>
// #define input "LQDOJ8.in"
// #define output "LQDOJ8.out"
// #define io                        \
//     ios_base::sync_with_stdio(0); \
//     cin.tie(NULL);                \
//     cout.tie(NULL);
// using ll = long long;
// using namespace std;
// void heapify(vector<int> a, int n, int i)
// {
//     int left = i * 2 + 1;
//     int right = i * 2 + 2;
//     int largest = i;
//     if (left < n && a[left] < a[largest])
//     {
//         largest = left;
//     }
//     if (right < n && a[right] < a[largest])
//     {
//         largest = right;
//     }
//     if (largest != i)
//     {
//         swap(a[largest], a[i]);
//         heapify(a, n, largest);
//     }
// }
// void heapSort(vector<int> &a, int n)
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
//     io;
//     freopen(input, "r", stdin);
//     freopen(output, "w", stdout);
//     int n, x;
//     cin >> n >> x;
//     vector<int> a(n);
//     for (int &x : a)
//     {
//         cin >> x;
//     }
//     // heapSort(a, n);
//     // for (int x : a)
//     // {
//     //     cout << x << " ";
//     // }
//     sort(a.begin(), a.end());
//     int left = 0;
//     int right = n - 1;
//     int res = 0;
//     while (left <= right)
//     {
//         if (a[left] + a[right] <= x)
//         {
//             res++;
//             left++;
//             right--;
//         }
//         else
//         {
//             res++;
//             right--;
//         }
//     }
//     cout << res;
//     return 0;
// }
//? CSES - Subarray Sums II | Tổng đoạn con II
// #include "bits/stdc++.h"
// #include <vector>
// #include <iostream>
// #define input "LQDOJ8.in"
// #define output "LQDOJ8.out"
// #define io                        \
//     ios_base::sync_with_stdio(0); \
//     cin.tie(NULL);                \
//     cout.tie(NULL);
// using namespace std;
// using ll = long long;
// int main()
// {
//     io;
//     freopen(input, "r", stdin);
//     freopen(output, "w", stdout);

//     int n, x;
//     cin >> n >> x;
//     vector<int> a(n);
//     for (int &x : a)
//     {
//         cin >> x;
//     }
//     vector<ll> prefix(n);
//     map<ll, int> sum;
//     prefix[0] = a[0];
//     sum[a[0]] = 1;
//     sum[0]++;
//     ll res = (bool)(a[0] == x);
//     for (int i = 1; i < n; i++)
//     {
//         prefix[i] += a[i] + prefix[i - 1];
//         res += sum[prefix[i] - x];
//         sum[prefix[i]]++;
//     }
//     // for (int x : prefix)
//     // {
//     //     cout << x << " ";
//     // }
//     cout << res << endl;
//     return 0;
// }
// //? CSES - Missing Coin Sum | Tổng xu bị thiếu
// #include "bits/stdc++.h"
// #include <vector>
// #include <iostream>
// #define input "LQDOJ8.in"
// #define output "LQDOJ8.out"
// #define io                        \
//     ios_base::sync_with_stdio(0); \
//     cin.tie(NULL);                \
//     cout.tie(NULL);
// using namespace std;
// using ll = long long;
// int main()
// {
//     io;
//     freopen(input, "r", stdin);
//     freopen(output, "w", stdout);
//     int n;
//     cin >> n;
//     vector<int> x(n);
//     map<int, int> freq;
//     for (int i = 0; i < n; i++)
//     {
//         cin >> x[i];
//         freq[x[i]]++;
//     }
//     sort(x.begin(), x.end());
//     ll prefixSum = 0LL;
//     if (x[0] != 1)
//     {
//         cout << 1;
//         return 0;
//     }
//     prefixSum = 1LL;
//     // Sum of (a[i]) i ∈ [0, k] < x[k + 1]
//     // => Can't make Sum of subset equal Sum of (a[0]), a[k]) + 1
//     // Example:
//     // 4, 7 => Can't make sum of 6
//     // 28, 40 => Can't make sum of 29
//     for (int i = 1; i < n; i++)
//     {
//         if (prefixSum < x[i] && prefixSum + 1 != x[i])
//         {
//             cout << prefixSum + 1;
//             return 0;
//         }
//         prefixSum += x[i];
//     }
//     cout << prefixSum + 1;
//     return 0;
// }
//? Số điểm cao nhất
// #include "bits/stdc++.h"
// #include <vector>
// #include <iostream>
// #define input "LQDOJ8.in"
// #define output "LQDOJ8.out"
// #define MOD 1000000007
// #define io                        \
//     ios_base::sync_with_stdio(0); \
//     cin.tie(NULL);                \
//     cout.tie(NULL);
// using namespace std;
// using ll = long long;
// int main()
// {
//     io;
//     freopen(input, "r", stdin);
//     freopen(output, "w", stdout);

//     char Subtask = '1';
//     int n;
//     cin >> n;
//     vector<int> a(n);
//     for (int &x : a)
//     {
//         cin >> x;
//     }

//     // Subtask 1
//     // O(N^2)
//     if (n <= 5000)
//     {
//         ll res = 0LL;
//         for (int i = 0; i < n - 1; i++)
//         {
//             for (int j = i + 1; j < n; j++)
//             {
//                 res = (res % MOD + (a[i] % MOD * a[j] % MOD) % MOD) % MOD;
//             }
//         }
//         cout << res << endl;
//     }
//     // Subtask 2
//     // O(N)
//     else
//     {
//         ll sum = 0LL;
//         ll res = 0LL;
//         for (int x : a)
//         {
//             // sum = (sum % MOD + x % MOD) % MOD;
//             sum += x;
//         }
//         for (int i = 0; i < n; i++)
//         {
//             sum -= a[i];
//             res = (res % MOD + (sum % MOD * a[i] % MOD) % MOD) % MOD;
//         }
//         cout << res << endl;
//     }
//     return 0;
// }
//? CSES - Sum of Four Values | Tổng bốn giá trị
// #include "bits/stdc++.h"
// #include <vector>
// #include <iostream>
// #define input "LQDOJ8.in"
// #define output "LQDOJ8.out"
// #define io                        \
//     ios_base::sync_with_stdio(0); \
//     cin.tie(NULL);                \
//     cout.tie(NULL);
// using namespace std;
// using ll = long long;
// int main()
// {
//     io;
//     freopen(input, "r", stdin);
//     freopen(output, "w", stdout);
//
//     int n, x;
//     cin >> n >> x;
//     vector<int> a(n);
//     for (int i = 0; i < n; i++)
//     {
//         cin >> a[i];
//     }
//     map<ll, pair<int, int>> prefix;
//     for (int i = 0; i < n - 1; i++)
//     {
//         for (int j = i + 1; j < n; j++)
//         {
//             if (prefix[a[i] + a[j]] == make_pair(0, 0))
//             {
//                 prefix[a[i] + a[j]] = make_pair(i + 1, j + 1);
//             }
//         }
//     }
//     // for (auto p = prefix.begin(); p != prefix.end(); p++)
//     // {
//     //     cout << p->first << " " << p->second.first << " " << p->second.second << endl;
//     // }
//     for (int i = n - 1; i >= 1; i--)
//     {
//         for (int j = i - 1; j >= 0; j--)
//         {
//             if (prefix[x - a[i] - a[j]] != make_pair(0, 0))
//             {
//                 ll postfix = x - a[i] - a[j];
//                 if (prefix[postfix].first != j + 1 &&
//                     prefix[postfix].first != i + 1 &&
//                     prefix[postfix].second != j + 1 &&
//                     prefix[postfix].second != i + 1)
//                 {
//                     cout << prefix[x - a[i] - a[j]].first << " " << prefix[x - a[i] - a[j]].second << " " << j + 1 << " " << i + 1 << endl;
//                     return 0;
//                 }
//             }
//         }
//     }
//     cout << "IMPOSSIBLE";
//     return 0;
// }
//? CSES - Two Sets | Hai tập hợp
// #include "bits/stdc++.h"
// #include <vector>
// #include <iostream>
// #define input "LQDOJ8.in"
// #define output "LQDOJ8.out"
// #define io                        \
//     ios_base::sync_with_stdio(0); \
//     cin.tie(NULL);                \
//     cout.tie(NULL);

// using namespace std;

// using ll = long long;
// int main()
// {
//     io;
//     freopen(input, "r", stdin);
//     freopen(output, "w", stdout);

//     ll n;
//     cin >> n;

//     if ((ll)(n * (n + 1)) / 2 & 1)
//     {
//         cout << "NO";
//         return 0;
//     }
//     ll half = n * (n + 1) / 4;
//     ll sum = 0LL;
//     vector<bool> choose(n + 1, false);
//     int count = 1;
//     for (int i = 1; i <= n; i++)
//     {
//         sum += i;
//         choose[i] = true;
//         count++;
//         if (sum >= half)
//         {
//             if (choose[sum - half])
//             {
//                 choose[sum - half] = false;
//                 count -= 2;
//                 cout << "YES\n";
//                 cout << count << endl;
//                 for (int i = 1; i <= n; i++)
//                 {
//                     if (choose[i])
//                         cout << i << " ";
//                 }
//                 cout << endl
//                      << n - count << endl;
//                 for (int i = 1; i <= n; i++)
//                 {
//                     if (!choose[i])
//                         cout << i << " ";
//                 }
//                 return 0;
//             }
//         }
//     }
//     cout << "NO";
//     return 0;
// }
//? Phân tích thừa số nguyên tố
// #include <bits/stdc++.h>
// #define inp "LQDOJ8.in"
// #define out "LQDOJ8.out"
// using namespace std;
// int N;
// vector<int> factor;
// void input()
// {
//     cin >> N;
// }
// void solve()
// {
//     int M = N;
//     int divisor = 0;
//     for (int i = 2; i * i <= N; i++)
//     {
//         while (N % i == 0)
//         {
//             factor.push_back(i);
//             N /= i;
//         }
//     }
//     if (N > 1)
//     {
//         factor.push_back(N);
//     }
//     for (size_t i = 0; i < factor.size(); i++)
//     {
//         cout << factor[i];
//         if (i < factor.size() - 1)
//             cout << "*";
//     }
//     for (int i = 1; i * i <= M; i++)
//     {
//         if (M % i == 0)
//         {
//             if (M / i != i)
//             {
//                 divisor += 2;
//             }
//             else
//             {
//                 divisor++;
//             }
//         }
//     }
//     cout << endl
//          << divisor;
// }
// int main()
// {
//     cin.tie(0)->sync_with_stdio(0);
//     freopen(inp, "r", stdin);
//     freopen(out, "w", stdout);

//     input();
//     solve();
//     return 0;
// }
//? Bài tập về nhà
// #include <bits/stdc++.h>
// #define MAX 10001
// #define input "LQDOJ8.in"
// #define output "LQDOJ8.out"
// #define io cin.tie(0)->sync_with_stdio(0)
// using ll = long long;
// using namespace std;

// string analysisFactor(int n)
// {
//     string powerOdd = "";
//     map<int, int> factor;
//     for (int i = 2; i * i <= n; i++)
//     {
//         while (n % i == 0)
//         {
//             factor[i]++;
//             n /= i;
//         }
//     }
//     if (n > 1)
//     {
//         factor[n]++;
//     }
//     for (auto pair : factor)
//     {
//         if (pair.second & 1)
//         {
//             powerOdd += to_string(pair.first) + " ";
//         }
//     }
//     return powerOdd;
// }
// int main()
// {
//     io;
//     freopen(input, "r", stdin);
//     freopen(output, "w", stdout);

//     int n;
//     cin >> n;
//     vector<int> a(n);
//     ll res = 0LL;
//     for (int &x : a)
//     {
//         cin >> x;
//     }
//     const char Subtask = '2';
//     // Subtask 1
//     if (n <= 1001)
//     {
//         ll m;
//         for (int i = 0; i < n - 1; i++)
//         {
//             for (int j = i + 1; j < n; j++)
//             {
//                 m = (ll)a[i] * (ll)a[j];
//                 if ((ll)sqrt(m) * (ll)sqrt(m) == m)
//                 {
//                     res++;
//                 }
//             }
//         }
//         cout << res;
//     }
//     // Subtask 2
//     else
//     {
//         // Để a * b = n là số chính phương khi phân tích thừa số nguyên tố thì:
//         // Nếu có tất cả số mũ bậc lẻ thì tất cả các cơ số chứa mũ bậc lẻ phải trùng nhau.
//         // Nếu có tất cả số mũ bậc chẵn thì luôn thỏa.
//         // Nếu vừa có số mũ bậc chẵn vừa có số mũ bậc lẻ thì ta chỉ xét sự trùng nhau giữa các cơ số chứa số mũ bậc lẻ.
//         map<string, int> odd;
//         for (int i = 0; i < n; i++)
//         {
//             odd[analysisFactor(a[i])]++;
//         }
//         for (auto pair : odd)
//         {
//             res += (ll)pair.second * (ll)(pair.second - 1) / 2;
//         }
//         cout << res;
//     }
//     return 0;
// }
//? Nhân
// #include <bits/stdc++.h>
// #define input "LQDOJ8.in"
// #define output "LQDOJ8.out"
// #define MAX 1000000000000000000
// #define io                        \
//     ios_base::sync_with_stdio(0); \
//     cin.tie(NULL);                \
//     cout.tie(NULL);
// using ll = long long;
// using namespace std;
// int main()
// {
//     io;
//     freopen(input, "r", stdin);
//     freopen(output, "w", stdout);

//     int n;
//     cin >> n;
//     vector<ll> a(n);
//     for (ll &ai : a)
//     {
//         cin >> ai;
//     }
//     sort(a.begin(), a.end());
//     if (a[0] == 0)
//     {
//         cout << 0;
//         return 0;
//     }
//     ll res = 1LL;
//     for (ll ai : a)
//     {
//         if (res * ai > MAX)
//         {
//             cout << -1;
//             return 0;
//         }
//         res *= ai;
//     }
//     cout << res;
//     return 0;
// }
//? Tìm mật khẩu
// #include <bits/stdc++.h>
// using namespace std;
// #define input "LQDOJ8.in"
// #define output "LQDOJ8.out"
// #define io                        \
//     ios_base::sync_with_stdio(0); \
//     cin.tie(NULL);                \
//     cout.tie(NULL);
// // #define MAX 10000001
// // bool p[MAX] = {0};
// // void sieve()
// // {
// //     for (int i = 2; i * i <= MAX; i++)
// //     {
// //         if (p[i] == false)
// //         {
// //             for (int j = i * i; j < MAX; j += i)
// //             {
// //                 p[j] = true;
// //             }
// //         }
// //     }
// // }
// bool isPrime(int n)
// {
//     if (n < 2)
//         return false;
//     for (int i = 2; i * i <= n; i++)
//     {
//         if (n % i == 0)
//         {
//             return false;
//         }
//     }
//     return true;
// }
// string T;
// string n[1001];
// int res;
// void inp()
// {
//     cin >> T;
// }
// void sol()
// {
//     for (char &c : T)
//     {
//         if (!(c >= '0' && c <= '9'))
//         {
//             c = ' ';
//         }
//     }
//     stringstream ss(T);
//     string n[1001];
//     string num;
//     int i = 0;
//     while (ss >> num)
//     {
//         n[i++] = num;
//     }
//     // for (string str : n)
//     // {
//     //     cout << str << endl;
//     // }
//     for (int ii = 0; ii < i; ii++)
//     {
//         for (int iii = 0; iii < n[ii].size(); iii++)
//         {
//             for (int iv = iii; iv < n[ii].size() && iv - iii + 1 < 9; iv++)
//             {
//                 int number = stoi(n[ii].substr(iii, iv - iii + 1));
//                 // cout << number << endl;
//                 if (isPrime(number))
//                 {
//                     res = max(res, number);
//                 }
//             }
//         }
//     }
//     cout << res;
// }
// int main()
// {
//     freopen(input, "r", stdin);
//     freopen(output, "w", stdout);
//     cin.tie(0)->sync_with_stdio(0);
//     inp();
//     // sieve();
//     sol();
//     return 0;
// }
//? Dãy số (THTB Vòng Khu vực 2021)
// #include <bits/stdc++.h>
// #define input "LQDOJ8.in"
// #define output "LQDOJ8.out"
// #define MAX 100001
// #define io                        \
//     ios_base::sync_with_stdio(0); \
//     cin.tie(NULL);                \
//     cout.tie(NULL);
// using ll = long long;
// using namespace std;
// int N;
// int A[MAX];
// ll res = LLONG_MIN;
// void inp()
// {
//     cin >> N;
//     for (int i = 0; i < N; i++)
//     {
//         cin >> A[i];
//     }
// }
// void sol()
// {
//     vector<ll> prefix(N);
//     map<int, ll> sum;
//     map<int, bool> visited;
//     prefix[0] = (ll)A[0];
//     sum[A[0]] = prefix[0];
//     visited[A[0]] = true;
//     for (int i = 1; i < N; i++)
//     {
//         prefix[i] = prefix[i - 1] + A[i];
//         if (visited[A[i]])
//         {
//             res = max(res, prefix[i] - sum[A[i]] + (ll)A[i]);
//             sum[A[i]] = min(sum[A[i]], prefix[i]);
//         }
//         else
//         {
//             sum[A[i]] = prefix[i];
//             visited[A[i]] = true;
//         }
//     }
//     cout << res;
// }
// int main()
// {
//     cin.tie(0)->sync_with_stdio(0);
//     freopen(input, "r", stdin);
//     freopen(output, "w", stdout);
//     inp();
//     sol();
//     return 0;
// }
//? Nhỏ hơn
// #include <bits/stdc++.h>
// #define input "LQDOJ8.in"
// #define output "LQDOJ8.out"
// #define MAX 100001
// #define io                        \
    //     ios_base::sync_with_stdio(0); \
    //     cin.tie(NULL);                \
    //     cout.tie(NULL);
// using ll = long long;
// using namespace std;
// int N;
// int a[MAX];
// int b[MAX];
// void inp()
// {
//     cin >> N;
//     int i = 0;
//     for (int &x : a)
//     {
//         cin >> x;
//         b[i++] = x;
//     }
// }
// void sol()
// {
//     sort(a, a + N);
//     unordered_map<int, int> res(N);
//     res[a[0]] = 0;
//     // cout << endl;
//     // for (int v : a)
//     // {
//     //     cout << v << ' ';
//     // }
//     // for (int i = 0; i < N; i++)
//     // {
//     //     cout << a[i] << " ";
//     // }
//     for (int i = 1; i < N; i++)
//     {
//         if (a[i] == a[i - 1])
//         {
//             res[a[i]] = res[a[i - 1]];
//         }
//         else
//         {
//             // auto iter = lower_bound(a + i, a + N, a[i]);
//             // cout << "\niter: " << (int)(iter - a);
//             // if (iter == a + N)
//             // {
//             //     res[a[i]] = i;
//             // }
//             // else
//             {
//                 res[a[i]] = i;
//             }
//             // if (iter == a)
//             // {

//             // }
//             // a[] = size;
//         }
//     }
//     // cout << endl;
//     for (int i = 0; i < N; i++)
//     {
//         cout << res[b[i]] << ' ';
//     }
//     // cout << endl;
//     // for (int v : res)
//     // {
//     //     cout << v << ' ';
//     // }
// }
// int main()
// {
//     cin.tie(0)->sync_with_stdio(0);
//     freopen(input, "r", stdin);
//     freopen(output, "w", stdout);
//     inp();
//     sol();
//     return 0;
// }
//? Số thứ k (THT TQ 2015)
// #include <bits/stdc++.h>
// #define input "LQDOJ8.in"
// #define output "LQDOJ8.out"
// #define MAX 10000000000000000
// #define io                        \
//     ios_base::sync_with_stdio(0); \
//     cin.tie(NULL);                \
//     cout.tie(NULL);
// using ll = long long;
// using namespace std;
// ll K;
// void inp()
// {
//     cin >> K;
// }
// ll quantity(ll n)
// {
//     return (n / 3) + (n / 5) + (n / 7) - (n / 21) - (n / 15) - (n / 35) + (n / 105);
// }
// ll binarySearch(ll left, ll right)
// {
//     ll middle = 0LL;
//     while (left <= right)
//     {
//         middle = (left + right) / 2;
//         ll q = quantity(middle);

//         if (q == K)
//         {
//             return middle;
//         }
//         else if (q > K)
//         {
//             right = middle - 1;
//         }
//         else
//         {
//             left = middle + 1;
//         }
//     }
//     return middle;
// }
// void sol()
// {
//     /*

// 3 5 6 7 9 10 12 14 15 18 20 21 24 25 27 28 30 33 35 36 39 40 42 45 48 49 50 51 54 55 56 57 60 63 65 66 69 70 72 75 77 78 80 81 84 85 87 90 91 93 95 96 98 99 100

//     */
//     * Brute Force
//     ll h = 0;
//     ll res = 3;
//     while (h < K)
//     {
//         if (res % 3 == 0 || res % 5 == 0 || res % 7 == 0)
//             h++;
//         res++;
//     }
//     cout << --res << endl;

//     * Binary Search
//     ll res = binarySearch(1LL, 3 * K);
//     cout << res << endl;
//     while (!(res % 3 == 0 || res % 5 == 0 || res % 7 == 0))
//     {
//         res--;
//     }
//     cout << res;
// }
// int main()
// {
//     cin.tie(0)->sync_with_stdio(0);
//     freopen(input, "r", stdin);
//     freopen(output, "w", stdout);
//     inp();
//     sol();
//     return 0;
// }
//? Bảng số
// #include <bits/stdc++.h>
// #define input "LQDOJ8.in"
// #define output "LQDOJ8.out"
// #define io                        \
//     ios_base::sync_with_stdio(0); \
//     cin.tie(NULL);                \
//     cout.tie(NULL);
// using ll = long long;
// using namespace std;
// bool checkEqual(int table[][3])
// {
//     ll sum1 = 0;
//     ll sum2 = 0;
//     ll sum3 = 0;
//     ll sum4 = 0;
//     ll sum5 = 0;
//     ll sum6 = 0;
//     for (int i = 0; i < 3; i++)
//     {
//         sum1 += table[0][i];
//         sum2 += table[1][i];
//         sum3 += table[2][i];
//         sum4 += table[i][0];
//         sum5 += table[i][1];
//         sum6 += table[i][2];
//     }
//     return (sum1 == sum2 && sum1 == sum3 && sum2 == sum3) &&
//            (sum4 == sum5 && sum4 == sum6 && sum5 == sum6);
// }
// bool checkDifferent(int table[][3])
// {
//     map<int, int> different;
//     for (int i = 0; i < 3; i++)
//     {
//         for (int j = 0; j < 3; j++)
//         {
//             different[table[i][j]]++;
//         }
//     }
//     return different.size() >= 2;
// }
// int main()
// {
//     cin.tie(0)->sync_with_stdio(0);
//     freopen(input, "r", stdin);
//     freopen(output, "w", stdout);
//     int table[3][3];
//     for (int i = 0; i < 3; i++)
//     {
//         for (int j = 0; j < 3; j++)
//         {
//             cin >> table[i][j];
//         }
//     }
//     if (checkEqual(table) && checkDifferent(table))
//     {
//         cout << "YES";
//     }
//     else
//     {
//         cout << "NO";
//     }
//     return 0;
// }
//? Xâu Nhỏ Nhất
// #include <bits/stdc++.h>
// #define input "LQDOJ8.in"
// #define output "LQDOJ8.out"
// #define io                        \
//     ios_base::sync_with_stdio(0); \
//     cin.tie(NULL);                \
//     cout.tie(NULL);
// using ll = long long;
// using namespace std;
// int main()
// {
//     cin.tie(0)->sync_with_stdio(0);
//     freopen(input, "r", stdin);
//     freopen(output, "w", stdout);

//     int sz;
//     cin >> sz;
//     string str;
//     cin >> str;
//     string s = str;
//     string res = s.erase(0, 1);
//     for (int i = 1; i < str.size(); i++)
//     {
//         s = str;
//         res = min(res, s.erase(i, 1));
//     }
//     cout << res;
//     return 0;
// }
//? GCD - Tin hoc trẻ tỉnh Bắc Giang
// #include <bits/stdc++.h>
// #define input "LQDOJ8.in"
// #define output "LQDOJ8.out"
// #define io                        \
//     ios_base::sync_with_stdio(0); \
//     cin.tie(NULL);

// #define MOD 1000000007
// #define MAX 10000001
// #define OPTIMIZE true
// using namespace std;
// using ll = long long;

// bool flag[MAX] = {false};
// int A[MAX] = {0};
// int B[MAX] = {0};
// // unordered_map<int, bool> flag;
// int mul[MAX] = {0};

// // void factorize(unordered_map<int, int> &div, int n)
// void factorize(int div[], int n)
// {
//     if (!OPTIMIZE)
//     {
//         for (int i = 2; i * i <= n; i++)
//         {
//             while (n % i == 0)
//             {
//                 flag[i] = true;
//                 div[i]++;
//                 n /= i;
//             }
//         }
//         if (n > 1)
//         {
//             flag[n] = true;
//             div[n]++;
//         }
//     }
//     else
//     {
//         while (n > 1)
//         {
//             int divisor = mul[n];
//             if (divisor == 0)
//             {
//                 break;
//             }
//             // cout << divisor << " ";
//             flag[divisor] = true;
//             div[divisor]++;
//             n /= divisor;
//         }
//     }
// }
// ll power(ll a, ll b)
// {
//     ll res = 1LL;
//     while (b)
//     {
//         if (b & 1)
//         {
//             res = (res * a) % MOD;
//         }
//         a = (a * a) % MOD;
//         b >>= 1;
//     }
//     return res;
// }
// void init()
// {
//     for (int i = 2; i < MAX; i++)
//     {
//         if (!mul[i])
//         {
//             for (int j = i; j < MAX; j += i)
//             {
//                 mul[j] = i;
//             }
//         }
//     }
// }
// // unordered_map<int, int> A;
// // unordered_map<int, int> B;
// void inp()
// {
//     init();
//     int n, m, ai, bi;
//     cin >> n >> m;
//     for (int i = 0; i < n; i++)
//     {
//         cin >> ai;
//         factorize(A, ai);
//     }
//     for (int j = 0; j < m; j++)
//     {
//         cin >> bi;
//         factorize(B, bi);
//     }
// }
// void solve()
// {
//     ll gcd = 1LL;
//     for (int i = 2; i < MAX; i++)
//     {
//         if (flag[i])
//         {
//             gcd = (gcd % MOD * power(i, (ll)min((ll)A[i], (ll)B[i])) % MOD) % MOD;
//         }
//     }
//     cout << gcd << endl;
// }
// int main()
// {
//     cin.tie(0)->sync_with_stdio(0);
//     freopen(input, "r", stdin);
//     freopen(output, "w", stdout);
//     inp();
//     solve();
//     return 0;
// }
//? Chia kẹo 1
#include <bits/stdc++.h>
#define input "LQDOJ8.in"
#define output "LQDOJ8.out"
#define io                        \
    ios_base::sync_with_stdio(0); \
    cin.tie(NULL);
#define MOD 1000000007
#define MAX 1000001
using namespace std;
using ll = long long;
ll n, k;
void inp()
{
    cin >> n >> k;
}
ll factorial[MAX];
ll inverse[MAX];
ll calcExponent(ll x, ll y)
{
    ll res = 1LL;
    while (y > 0)
    {
        if (y & 1)
            res = (res % MOD * x % MOD) % MOD;
        y >>= 1;
        x = (x % MOD * x % MOD) % MOD;
    }
    return res;
}
void calcFactorial()
{
    factorial[0] = 1;
    for (int i = 1; i < MAX; i++)
    {
        factorial[i] = ((factorial[i - 1]) % MOD * (ll)(i) % MOD) % MOD;
    }
}
void calcInverse()
{
    inverse[MAX - 1] = calcExponent(factorial[MAX - 1], MOD - 2);
    for (int i = MAX - 1; i >= 1; i--)
    {
        inverse[i - 1] = inverse[i] * i % MOD;
    }
}
ll nCk(ll n, ll k)
{
    if (k > n)
        return 0;
    cout << factorial[n] << " " << factorial[k] << " " << " " << factorial[n - k] << endl;
    return (factorial[n]) / (factorial[k] * factorial[n - k]);
}
void sol()
{
    ll h = k;
    k = n - k;
    n = k + h - 1;
    // cout << k << " " << n << endl;
    calcFactorial();
    calcInverse();
    // for (int i = )
    // for (int i = 0; i <= n; i++)
    // {
    //     cout << i << "!: " << factorial[i] << endl;
    // }
    cout << factorial[n] * inverse[k] % MOD * inverse[n - k] % MOD;
    // cout << nCk(n, k);
}
int main()
{
    cin.tie(0)->sync_with_stdio(0);
    freopen(input, "r", stdin);
    freopen(output, "w", stdout);
    inp();
    sol();
    return 0;
}
//? CSES - Longest Flight Route | Lộ trình bay dài nhất
// #include <bits/stdc++.h>
// #define input "LQDOJ8.in"
// #define output "LQDOJ8.out"
// #define io                        \
//     ios_base::sync_with_stdio(0); \
//     cin.tie(NULL);                \
//     cout.tie(NULL);
// using ll = long long;
// using namespace std;
// struct Adjacency
// {
//     vector<int> vertices;
// };
// void topologicalSort(vector<Adjacency> &listA, vector<bool> &visited, stack<int> &res, int vertex, bool success = false)
// {
//     visited[vertex] = true;
//     for (int neighbor : listA[vertex].vertices)
//     {
//         if (!visited[neighbor])
//         {
//             topologicalSort(listA, visited, res, neighbor);
//         }
//     }
//     res.push(vertex);
// }
// // stack<int> Max(stack<int> A, stack<int> B)
// // {
// //     if (A.size() >= B.size())
// //     {
// //         return A;
// //     }
// //     return B;
// // }
// int main()
// {
//     cin.tie(0)->sync_with_stdio(0);
//     freopen(input, "r", stdin);
//     freopen(output, "w", stdout);

//     int n, m, u, v;
//     cin >> n >> m;
//     vector<Adjacency> listA(n + 1);
//     for (int i = 0; i < m; i++)
//     {
//         cin >> u >> v;
//         listA[u].vertices.push_back(v);
//     }
//     vector<bool> visited(n + 1);
//     stack<int> topo;
//     for (int i = 1; i < n; i++)
//     {
//         if (!visited[i])
//         {
//             topologicalSort(listA, visited, topo, i);
//         }
//     }
//     vector<int> distance(n + 1, INT_MIN);
//     distance[1] = 0;
//     vector<int> parent(n + 1, 0);
//     while (!topo.empty())
//     {
//         // cout << topo.top() << "_";
//         int vertex = topo.top();
//         topo.pop();
//         if (distance[vertex] != INT_MIN)
//         {
//             for (int neighbor : listA[vertex].vertices)
//             {
//                 if (distance[vertex] + 1 > distance[neighbor])
//                 {
//                     distance[neighbor] = distance[vertex] + 1;
//                     parent[neighbor] = vertex;
//                 }
//             }
//         }
//     }
//     if (distance[n] == INT_MIN)
//     {
//         cout << "IMPOSSIBLE";
//         return 0;
//     }
//     vector<int> res;
//     for (int i = n; i != 1; i = parent[i])
//     {
//         res.push_back(i);
//     }
//     res.push_back(1);
//     reverse(res.begin(), res.end());
//     cout << res.size() << endl;
//     for (int i : res)
//     {
//         cout << i << " ";
//     }
//     return 0;
// }
//? Số thứ n
// #include <bits/stdc++.h>
// #define input "LQDOJ8.in"
// #define output "LQDOJ8.out"
// #define io                        \
//     ios_base::sync_with_stdio(0); \
//     cin.tie(NULL);                \
//     cout.tie(NULL);
// using ll = long long;
// using namespace std;
// ll quantity(ll n, ll a, ll b)
// {
//     return n / a + n / b - n / (a * b);
// }
// ll binarySearch(ll a, ll b, ll n, ll left, ll right)
// {
//     ll middle;
//     while (left <= right)
//     {
//         middle = (left + right) / 2;
//         ll q = quantity(middle, a, b);
//         if (q == n)
//         {
//             return middle;
//         }
//         else if (q < n)
//         {
//             left = middle + 1;
//         }
//         else
//         {
//             right = middle - 1;
//         }
//     }
//     return middle;
// }
// int main()
// {
//     cin.tie(0)->sync_with_stdio(0);
//     freopen(input, "r", stdin);
//     freopen(output, "w", stdout);
//     ll T, a, b, n;
//     cin >> T;
//     while (T--)
//     {
//         cin >> a >> b >> n;
//         ll res = binarySearch(a, b, n, 1, n * (min(a, b)));
//         while (!(res % a == 0 || res % b == 0))
//         {
//             res--;
//         }
//         cout << res << endl;
//     }
//     return 0;
// }
//? Ô tô bay
// #include <bits/stdc++.h>
// #define input "LQDOJ8.in"
// #define output "LQDOJ8.out"
// #define io                        \
//     ios_base::sync_with_stdio(0); \
//     cin.tie(NULL);                \
//     cout.tie(NULL);
// using ll = long long;
// using namespace std;
// int main()
// {
//     io;
//     freopen(input, "r", stdin);
//     freopen(output, "w", stdout);

//     int n, k;
//     cin >> n >> k;
//     vector<int> h(n);
//     for (int& value : h)
//     {
//         cin >> value;
//     }

//     return 0;
// }
//? Max - Min của đoạn
// #include <bits/stdc++.h>
// #define input "LQDOJ8.in"
// #define output "LQDOJ8.out"
// #define io                        \
//     ios_base::sync_with_stdio(0); \
//     cin.tie(NULL);                \
//     cout.tie(NULL);
// using ll = long long;
// using namespace std;

// int main()
// {
//     io;
//     freopen(input, "r", stdin);
//     freopen(output, "w", stdout);
//     int n, k;
//     cin >> n >> k;
//     vector<int> A(n);
//     for (int& x : A)
//     {
//         cin >> x;
//     }
//     int res = 0;
//     map<int, int> index;
//     int i = 0;
//     index[A[i]] = 0;
//     int ii = 1;
//     index[A[ii]] = 1;
//     int emax = max(A[0], A[1]);
//     int imax = (emax == A[0]) ? (0) : (1);
//     int emin = min(A[0], A[1]);
//     int imin = (emin == A[0]) ? (0) : (1);
//     for (int j = ii; j < n; j++)
//     {
//         if (emax - emin != k)
//         {

//         }
//     }
//     return 0;
// }
//? Mật Ong (Q.Trị)
// #include <bits/stdc++.h>
// #define input "LQDOJ8.in"
// #define output "LQDOJ8.out"
// #define io                        \
//     ios_base::sync_with_stdio(0); \
//     cin.tie(NULL);                \
//     cout.tie(NULL);
// using ll = long long;
// using namespace std;
// ll f(int Ai)
// {
//     ll div = 0;
//     for (int i = 1; i <= sqrt(Ai); i++)
//     {
//         if (Ai % i == 0)
//         {
//             if (Ai / i != i)
//             {
//                 div += 2;
//             }
//             else
//             {
//                 div++;
//             }
//         }
//     }
//     return div;
// }
// int main()
// {
//     io;
//     freopen(input, "r", stdin);
//     freopen(output, "w", stdout);
//     int N;
//     cin >> N;
//     vector<int> A(N);
//     for (int &x : A)
//     {
//         cin >> x;
//     }
//     char Subtask = '1';
//     if (Subtask == '1')
//     {
//         ll res = 0;
//         for (int i = 0; i < N; i++)
//         {
//             res += (ll)A[i] * f(A[i]);
//         }
//         cout << res << endl;
//     }
//     return 0;
// }