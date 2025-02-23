// 4.0
//#include <iostream>
//#include <fstream>
//#include <vector>
//#include <utility>
//#include <algorithm>
//#include <set>
//#include <map>
// CSES - Ferris Wheel | Bánh xe Ferris
//#include <bits/stdc++.h>
//typedef long long ll;
//typedef unsigned long long ull;
//using namespace std;
//int main()
//{
//    ios_base::sync_with_stdio(false);
//        cin.tie(NULL);
//    #ifndef ONLINE_JUDGE
//        freopen("LQDOJ4.in", "r", stdin);
//        freopen("LQDOJ4.out", "w", stdout);
//    #endif
//    int n, x;
//    cin >> n >> x;
//    vector<int> p(n);
//    for (int& x : p)
//        cin >> x;
//    sort(p.begin(), p.end());
////    for (int& x : p)
////        cout << x << " ";
////    cout << endl;
//    int left = 0;
//    int right = n-1;
//    int res = 0;
//    while (left <= right) {
//        if (p[left] + p[right] > x){
//            right -= 1;
//            res += 1;
//            continue;
//        }
//        left += 1;
//        right -= 1;
//        res += 1;
//    }
//    cout << res;
//    return 0;
//}









//// Bảo vệ Trái Đất
//#include <bits/stdc++.h>
//using namespace std;
//int main()
//{
//    ios_base::sync_with_stdio(false);
//    cin.tie(NULL);
//    #ifndef ONLINE_JUDGE
//        freopen("LQDOJ4.in", "r", stdin);
//        freopen("LQDOJ4.out", "w", stdout);
//    #endif
//    int n, xi;
//    int res = INT_MIN;
//    cin >> n;
////    cout << "n: " << n << endl;
//    for (int i = 0; i < n; i++){
//        cin >> xi;
//        res = max(res, (int)xi);
////        cout << xi << endl;
//    }
//    cout << res << endl;
//    return 0;
//}









//// Số ở giữa - Tin hoc trẻ tỉnh Bắc Giang
//#include <bits/stdc++.h>
//using namespace std;
//int main()
//{
//    ios_base::sync_with_stdio(false);
//    cin.tie(NULL);
//    #ifndef ONLINE_JUDGE
//        freopen("LQDOJ4.in", "r", stdin);
//        freopen("LQDOJ4.out", "w", stdout);
//    #endif
//    int A, B;
//    cin >> A >> B;
////    cout << A << " " << B << endl;
////    cout << A << ' ' << B << endl;
////    int res = A + 1;
////    int differ = INT_MAX-1;
////    for (int i = A + 1; i < B; i++){
////        cout << "i: " << i << " difference: " << abs(A * i - B * i) << endl;
////        if (differ > abs(A * i - B * i)){
////            differ = abs(A * i - B * i);
////            res = i;
////        }
////    }
////    cout << res << endl;
//    if (A >= 0 && B > 0){
//        cout << A + 1;
//    }
//    else if (A < 0 && B > 0) {
//        cout << 0;
//    }
//    else if (A < 0 && B <= 0) {
//        cout << B - 1;
//    }
//    return 0;
//}









//// LQDOJ Contest #8 - Bài 1 - Tiền Lì Xì
//#include <bits/stdc++.h>
//#define ONEH 100000LL // define giá trị & kiểu dữ liệu của hằng số.
//#define TWOH 200000LL
//#define FIVEH 500000LL
//using namespace std;
//typedef long long ll;
//typedef unsigned long long ull;
//int main()
//{
//    ios_base::sync_with_stdio(false);
//    cin.tie(NULL);
//    #ifndef ONLINE_JUDGE
//        freopen("LQDOJ4.in", "r", stdin);
//        freopen("LQDOJ4.out", "w", stdout);
//    #endif
//    int a, b, c;
//    cin >> a >> b >> c;
////    cout << a << " " << b << " " << c <<endl;
//    ll res = a * ONEH + b * TWOH + c * FIVEH;
//    cout << res;
//    return 0;
//}









//// LQDOJ Contest #8 - Bài 2 - Tất Niên
//#include <bits/stdc++.h>
//using namespace std;
//typedef long long ll;
//typedef unsigned long long ull;
//int main()
//{
//    ios_base::sync_with_stdio(false);
//    cin.tie(NULL);
//    #ifndef ONLINE_JUDGE
//        freopen("LQDOJ4.in", "r", stdin);
//        freopen("LQDOJ4.out", "w", stdout);
//    #endif
//    int n; cin >> n;
//    vector<int> x(n);
//    for (int& xi : x){
//        cin >> xi;
//    }
////    for (int xi : x){
////        cout << xi << " ";
////    }
////    cout << endl;
////    sort(x.begin(), x.end());
////    int chosen1 = x[n/2];
////    int chosen2 = x[n/2 - 1];
////    long long res1 = 0;
////    long long res2 = 0;
////    for (int xi : x){
////        res1 += (long long)(chosen1 - xi)*(long long)(chosen1 - xi);
////        res2 += (long long)(chosen2 - xi)*(long long)(chosen2 - xi);
////    }
////    cout << min(res1, res2);
////    int m = (int)sum / n;
////    for (int i = 0; i < n; i++){
////        long long d = 0;
////        for (int j = 0; j < n; j++){
////            d += (long long)(x[i] - x[j]) * (long long)(x[i] - x[j]);
////        }
////        res = min(res, d);
////    }
//    long long res = 0;
//    long long sum = 0;
//    for (int i = 0; i < n; i++){
//        sum += x[i];
//    }
//    int m = sum / n;
//    cout << "m: " << m << endl;
//    for (int i = 0; i < n; i++){
//        res += (x[i] - m) * (x[i] - m);
//    }
//    cout << res;
//    return 0;
//}









// // Chữ số lớn nhất (THT'14; HSG'17)
// #include <iostream>
// #include <vector>
// #include <algorithm>
// #include <cmath>
// #include <map>
// #include <set>
// #include <queue>
// #include <stack>
// #include <string>
// #include <cstring>
// #include <iomanip>
// #include <cstdio>
// #include <cstdlib>
// #include <cassert>
// using namespace std;
// typedef long long ll;
// typedef unsigned long long ull;
// int main()
// {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);
//     #ifndef ONLINE_JUDGE
//         freopen("LQDOJ4.in", "r", stdin);
//         freopen("LQDOJ4.out", "w", stdout);
//     #endif
//     char chr;
//     char res = '0';
//     while (cin >> chr){
//         res = max(res, chr);
//     }
//     cout << res;
//     return 0;
// }









//// Đếm cặp có tổng bằng 0
//#include <bits/stdc++.h>
//using namespace std;
//typedef long long ll;
//typedef unsigned long long ull;
//int main()
//{
//    ios_base::sync_with_stdio(false);
//    cin.tie(NULL);
//    #ifndef ONLINE_JUDGE
//        freopen("LQDOJ4.in", "r", stdin);
//        freopen("LQDOJ4.out", "w", stdout);
//    #endif
//    int n;
//    cin >> n;
//    vector<int> A(n);
//    unordered_map<int, ll> frequency;
//    unordered_map<ll, bool> checked;
//    for (int &x : A){
//        cin >> x;
//        frequency[x] += 1;
//        checked[x] = false;
//    }
////    for (auto iter = frequency.begin(); iter != frequency.end(); iter++){
////        cout << iter->first << " -> " << iter->second << endl;
////    }
//    ll res = 0LL;
//    for (auto iter = frequency.begin(); iter != frequency.end(); iter++){
//        int num = iter->first;
//        if (!checked[num] && !checked[-num] && frequency.count(-num)){
//            if (iter->first){
//                res += iter->second * frequency[-num];
//            }
//            else {
//                res += (iter->second) * (iter->second - 1)/2;
//            }
//            checked[iter->first] = true;
//            checked[iter->first * (-1)] = true;
//        }
//    }
//    cout << res;
//    return 0;
//}










//// Tổng k số
//#include <bits/stdc++.h>
//using namespace std;
//typedef long long ll;
//typedef unsigned long long ull;
//int main()
//{
//    ios_base::sync_with_stdio(false);
//    cin.tie(NULL);
//    #ifndef ONLINE_JUDGE
//        freopen("LQDOJ4.in", "r", stdin);
//        freopen("LQDOJ4.out", "w", stdout);
//    #endif
//    int N, K;
//    cin >> N >> K;
//    vector<int> a(N);
//    for (int& x : a){
//        cin >> x;
//    }
////    for (int x : a){
////        cout << x << " ";
////    }
//    vector<ll> prefix(N);
//    prefix[0] = a[0];
//    for (int i = 1; i < N; i++){
//        prefix[i] = prefix[i - 1] + a[i];
//    }
//    ll res = prefix[K - 1];
//    for (int i = K; i < N; i++){
//        res = max(res, prefix[i] - prefix[i - K]);
//    }
//    cout << res;
//    return 0;
//}









//// Số nhỏ thứ k
//#include <bits/stdc++.h>
//using ll = long long;
//using ull = unsigned long long;
//using namespace std;
//int main()
//{
//    ios_base::sync_with_stdio(false);
//    cin.tie(NULL);
//    #ifndef ONLINE_JUDGE
//        freopen("LQDOJ4.in", "r", stdin);
//        freopen("LQDOJ4.out", "w", stdout);
//    #endif
//    int N, K;
//    cin >> N >> K;
////    vector<int> A(N);
//    int val;
//    priority_queue<int, vector<int>, greater<int>> MinHeap;
//    for (int i = 0; i < N; i++){
//        cin >> val;
//        MinHeap.push(val);
//    }
//    while (K-- > 1){
////        cout << MinHeap.top() << endl;
//        MinHeap.pop();
//    }
//    cout << MinHeap.top();
//    return 0;
//}









//// Ước số và tổng ước số
//#include <bits/stdc++.h>
//using ll = long long;
//using ull = unsigned long long;
//using namespace std;
//int main()
//{
//    ios_base::sync_with_stdio(false);
//    cin.tie(NULL);
//    #ifndef ONLINE_JUDGE
//        freopen("LQDOJ4.in", "r", stdin);
//        freopen("LQDOJ4.out", "w", stdout);
//    #endif
//
//    ll n;
//    cin >> n;
//    ll quantity = 2;
//    ll sum = n + 1;
//    for (int i = 2; i <= sqrt(n); i++){
//        if (n % i == 0){
//            quantity ++;
//            sum += i;
//            if (n / i != i){
//                quantity ++;
//                sum += n / i;
//            }
//        }
//    }
//    cout << quantity << " " << sum;
//    return 0;
//}









//// Nhỏ nhì
//#include <bits/stdc++.h>
//using ll = long long;
//using ull = unsigned long long;
//using namespace std;
//int main()
//{
//    ios_base::sync_with_stdio(false);
//    cin.tie(NULL);
//    #ifndef ONLINE_JUDGE
//        freopen("LQDOJ4.in", "r", stdin);
//        freopen("LQDOJ4.out", "w", stdout);
//    #endif
//
//    int a[4];
//    cin >> a[0];
//    cin >> a[1];
//    cin >> a[2];
//    cin >> a[3];
//    sort(a, a + 4);
//
//    cout << a[1];
//    return 0;
//}









//// Luỹ thừa
//#include <bits/stdc++.h>
//using ll = long long;
//using ull = unsigned long long;
//using namespace std;
//ll power(ll a, ll b)
//{
//    ll res = 1LL;
//    while (b){
//        if (b & 1){
//            res *= (ll)a;
//        }
//        b >>= 1;
//        a *= (ll)a;
//    }
//    return res;
//}
//int main()
//{
//    ios_base::sync_with_stdio(false);
//    cin.tie(NULL);
//    #ifndef ONLINE_JUDGE
//        freopen("LQDOJ4.in", "r", stdin);
//        freopen("LQDOJ4.out", "w", stdout);
//    #endif
//    ll a, b;
//    cin >> a >> b;
//    cout << power(a, b);
//    return 0;
//}









////Bình phương
//#include <bits/stdc++.h>
//using ll = long long;
//using ull = unsigned long long;
//using namespace std;
//ll power(ll a, ll b)
//{
//    ll res = 1LL;
//    while (b){
//        if (b & 1){
//            res *= (ll)a;
//        }
//        b >>= 1;
//        a *= (ll)a;
//    }
//    return res;
//}
//int main()
//{
//    ios_base::sync_with_stdio(false);
//    cin.tie(NULL);
//    #ifndef ONLINE_JUDGE
//        freopen("LQDOJ4.in", "r", stdin);
//        freopen("LQDOJ4.out", "w", stdout);
//    #endif
//
//    ll N;
//    cin >> N;
//    cout << N * N;
//    return 0;
//}









// // Đường đi của Robot (THTB Đà Nẵng 2022)
// #include <bits/stdc++.h>
// using ll = long long;
// using ull = unsigned long long;
// using namespace std;
// string plusBigNum(string num1, string num2)
// {
//     reverse(num1.begin(), num1.end());
//     reverse(num2.begin(), num2.end());
//     if (num1.size() < num2.size()){
//         swap(num1, num2);
//     }
//     while (num1.size() > num2.size()){
//         num2 += "0";
//     }
//     // cout << num1 << " " << num2 << endl;
//     string result = "";
//     int remains = 0;
//     for (unsigned int i = 0; i < num1.size() && i < num2.size(); i++){
//         int add = num1[i] - '0' + num2[i] - '0' + remains;
//         remains = add / 10;
//         result += (add % 10 + '0');
//     }
//     if (remains){
//         result += (remains + '0');
//     }
//     reverse(result.begin(), result.end());
//     return result;
// }
// void printMatrix(vector<vector<string>> mat, int row, int col)
// {
//     for (int i = 0; i < row; i++){
//         for (int j = 0; j < col; j++){
//             cout << mat[i][j] << " ";
//         }
//         cout << endl;
//     }
// }
// int main()
// {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);
//     #ifdef ONLINE_JUDGE
//         freopen("robot.inp", "r", stdin);
//         freopen("robot.out", "w", stdout);
//     #endif
//     int N, M;
//     cin >> N >> M;
//     vector<vector<string>> dp(N, vector<string>(N, "0"));
//     vector<vector<bool>> obs(N, vector<bool>(N, false));
//     int pos_x, pos_y;
//     for (int i = 0; i < M; i++){
//         cin >> pos_x >> pos_y;
//         obs[pos_x-1][pos_y-1] = true;
//     }
//     for (int i = 1; i < N; i++){
//         if (obs[i][0]) break;
//         dp[i][0] = "1";
//     }
//     for (int i = 1; i < N; i++){
//         if (obs[0][i]) break;
//         dp[0][i] = "1";
//     }
//     for (int i = 1; i < N; i++){
//         for (int j = 1; j < N; j++){
//             if (obs[i][j]){
//                 dp[i][j] = "0";
//             } else {
//                 dp[i][j] = plusBigNum(dp[i-1][j], dp[i][j-1]);
//             }
//         }
//     }

//     //printMatrix(dp, N, N) ;
//     cout << dp[N-1][N-1];
//     return 0;
// }









// // Đường đi có tổng lớn nhất
// #include <bits/stdc++.h>
// using ll = long long;
// using ull = unsigned long long;
// using namespace std;

// int main()
// {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);

//     // freopen("LQDOJ4.in", "r", stdin);
//     // freopen("LQDOJ4.out", "w", stdout);

//     int n, m;
//     cin >> n >> m;
//     vector<vector<ll>> dp(n, vector<ll>(m));
//     for (int i = 0; i < n; i++){
//         for (int j = 0; j < m; j++){
//             cin >> dp[i][j];
//         }
//     }
//     // for (int i = 0; i < n; i++){
//     //     for (int j = 0; j < m; j++){
//     //         cout << dp[i][j] << " ";
//     //     }
//     //     cout << endl;
//     // }
//     for (int i = 1; i < n; i++) dp[i][0] += dp[i-1][0];
//     for (int j = 1; j < m; j++) dp[0][j] += dp[0][j-1];

//     for (int i = 1; i < n; i++){
//         for (int j = 1; j < m; j++){
//             dp[i][j] += max(dp[i-1][j], dp[i][j-1]);
//         }
//     }
//     cout << dp[n-1][m-1];
//     return 0;
// }









// // LQDOJ contest #11 - Học toán
// #include <bits/stdc++.h>
// using ll = long long;
// using ull = unsigned long long;
// using namespace std;

// int main()
// {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);
//     #ifdef LQDOJ
//         freopen("LQDOJ4.in", "r", stdin);
//         freopen("LQDOJ4.out", "w", stdout);
//     #endif
//     int t;
//     cin >> t;
//     ll n;
//     while (t--){
//         cin >> n;
//         cout << (n *(ll)(n-1))/2 << endl;
//     }
//     return 0;
// }









// // Chữ số của N
// #include <bits/stdc++.h>
// using ld = long double;
// using ll = long long;
// using ull = unsigned long long;
// using uli = unsigned long int;
// using namespace std;

// #define PI 3.141592653589793
// #define INF 1000000000
// #define MOD 1000000007
// #define MAX 1000001

// #define io ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
// #define iint pair<int, int>
// #define llong pair<long long, long long>
// #define st first;
// #define nd second;
// #define input "LQDOJ4.in"
// #define output "LQDOJ4.out"

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

// template <class T1, class T2> istream& operator>> (istream& in, pair <T1, T2>& a){ in >> a.first >> a.second; return in; }
// template <class T> istream& operator>> (istream& in, vector <T>& a){ for (auto &x: a){ in >> x; } return in; }

// int main()
// {
//     io;
//     freopen(input, "r", stdin);
//     freopen(output, "w", stdout);
//     ll n;
//     cin >> n;
//     cout << to_string(n).size() << endl;
//     ll suon = 0;
//     while (n) {
//         suon += n % 10;
//         n /= 10;
//     }
//     cout << suon;
//     return 0;
// }









// Siêu trộm
#include <bits/stdc++.h>
using ld = long double;
using ll = long long;
using ull = unsigned long long;
using uli = unsigned long int;
using namespace std;

#define PI 3.141592653589793
#define INF 1000000000
#define MOD 1000000007
#define MAX 1000001

#define io ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define iint pair<int, int>
#define llong pair<long long, long long>
#define st first;
#define nd second;
#define input "LQDOJ4.in"
#define output "LQDOJ4.out"

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

template <class T1, class T2> istream& operator>> (istream& in, pair <T1, T2>& a){ in >> a.first >> a.second; return in; }
template <class T> istream& operator>> (istream& in, vector <T>& a){ for (auto &x: a){ in >> x; } return in; }
template<typename dataType>
dataType find_max(std::initializer_list<dataType> elements) {
    return *std::max_element(elements.begin(), elements.end());
}

int main()
{
    io;
    freopen(input, "r", stdin);
    freopen(output, "w", stdout);
    int n;
    cin >> n;
    vector<int> a(n);
    for (int& v : a){
        cin >> v;
    }
    // Edge case
    if (n == 1) {
        cout << a[0];
        return 0;
    }
    // Base case
    vector<ll> dp(n);
    // dp[i]: lưu trữ giá trị là kết quả của việc tối ưu hóa hành động trộm từ nhà thứ 0 -> nhà thứ i.
    dp[0] = a[0];
    dp[1] = a[0] + a[1];
    dp[2] = max({dp[1], (ll)a[0] + (ll)a[2], (ll)a[1] + (ll)a[2]});
    for (int i = 3; i < n; i++){
        dp[i] = max({dp[i-1], // (1')
                     dp[i-2] + a[i], // (2')
                     dp[i-3] + a[i-1] + a[i] // (3')
                    });
    }
    // Tại sao KHÔNG xảy ra Trường hợp dp[i-1] + a[i] ???
    // Vì khi xét dp[i-1] + a[i] có thể xảy ra Trưởng hợp dp[i] = a[i-2] + a[i-1] + a[i] !!!
    // Nên chỉ xét dp[i-1] để tránh không thể xảy ra Trường hợp vi phạm ycbt.
    
    // Nếu giả sử dp[i] tối ưu hóa bằng cách không tồn tại giá trị của a[i-2] và a[i-1] thì sao ???
    // Khi đó một trong ba Trường hợp này sẽ xảy ra: 
    // (1) Tồn tại a[i-1] và không tồn tại a[i-2] trong dp[i-1];
    // (2) Tồn tại a[i-2] và không tồn tại a[i-1] trong dp[i-1];
    // (3) Không tồn tại cả hai a[i-1] và a[i-2] trong dp[i-1]. 
    
    // Xét (1) -> (3')
    // Xét (2) -> (2')
    // Xét (3) -> KHÔNG xảy ra vì tối ưu hóa giữa việc chọn dp[i-1] và dp[i-2].
    cout << dp[n-1] << endl;
    for (int x : dp){
        cout << x << " ";
    }
    return 0;
}









// // LQDOJ contest #11 - Highscore
// #include <bits/stdc++.h>
// using ld = long double;
// using ll = long long;
// using ull = unsigned long long;
// using uli = unsigned long int;
// using namespace std;

// #define PI 3.141592653589793
// #define INF 1000000000
// #define MOD 1000000007
// #define MAX 1000001

// #define io ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
// #define iint pair<int, int>
// #define llong pair<long long, long long>
// #define st first;
// #define nd second;
// #define input "LQDOJ4.in"
// #define output "LQDOJ4.out"

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

// template <class T1, class T2> istream& operator>> (istream& in, pair <T1, T2>& a){ in >> a.first >> a.second; return in; }
// template <class T> istream& operator>> (istream& in, vector <T>& a){ for (auto &x: a){ in >> x; } return in; }

// int frequence[MAX] = {0};
// int main()
// {
//     io;
//     // #ifdef LQDOJ
//     //     freopen(input, "r", stdin);
//     //     freopen(ouput, "w", stdout);
//     // #endif
//         freopen(input, "r", stdin);
//         freopen(output, "w", stdout);
//     int N, H;
//     cin >> N >> H;
//     vector<pair<int, int>> s(N);
//     priority_queue<int> MaxHeap;
//     for (int i = 0; i < N; i++){
//         cin >> s[i].first >> s[i].second;
//         frequence[s[i].second]++;
//         MaxHeap.push(s[i].first);
//         MaxHeap.push(s[i].second);
//     }
//     ll res = 0LL;
//     // Subtask 1:
//     if (N == 1) {
//         cout << min((H/s[0].first + (bool)(H%s[0].first)), (H-s[0].second)/s[0].first + (bool)((H-s[0].second)%s[0].first) + 1);
//     }
//     // Subtask 2:
//     else if (N == 2){
//         while (H > 0 && !MaxHeap.empty()){
//             int C = MaxHeap.top();
//             if (C == s[0].second || C == s[1].second){
//                 res++;
//                 H -= C;
//             }
//             else {
//                 res += H/C + (bool)(H%C);
//                 cout << res; return 0;
//             }
//             MaxHeap.pop();
//         }
//         cout << res;
//     }
//     // Subtask 3:
//     else {
//         while (H > 0 && !MaxHeap.empty()){
//             int C = MaxHeap.top();
//             if (frequence[C]){
//                 res++;
//                 H -= C;
//                 frequence[C]--;
//             }
//             else {
//                 res += H/C + (bool)(H%C);
//                 cout << res; return 0;
//             }
//             MaxHeap.pop();
//         }
//         cout << res;
//     }
//     return 0;
// }









// // LQDOJ contest #11 - Thứ tự
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

// #define io ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
// #define iint pair<int, int>
// #define llong pair<long long, long long>
// #define fst first;
// #define snd second;
// #define input "LQDOJ4.in"
// #define output "LQDOJ4.out"

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

// template <class T1, class T2> istream& operator>> (istream& in, pair <T1, T2>& a){ in >> a.first >> a.second; return in; }
// template <class T> istream& operator>> (istream& in, vector <T>& a){ for (auto &x: a){ in >> x; } return in; }

// int frequence[MAX] = {0};
// struct compareByfreq {
//     bool operator()(pair<char, int> st, pair<char, int> nd) {
//         if (st.second == nd.second) {
//             return st.first > nd.first;
//         }
//         return st.second < nd.second;
//     }
// };

// string reorganizeString(string s) {
//     // Frequency map to count occurrences of each character
//     map<char, int> freq;
//     for (char chr : s) {
//         freq[chr] += 1;
//     }

//     // Priority queue to sort by frequency and lexicographical order
//     priority_queue<pair<char, int>, vector<pair<char, int>>, compareByfreq> priority_q;
//     for (auto iter = freq.begin(); iter != freq.end(); iter++) {
//         priority_q.push(make_pair(iter->first, iter->second));
//     }

//     string res;
//     while (!priority_q.empty()) {
//         pair<char, int> elest = priority_q.top();
//         priority_q.pop();
//         res += elest.first;

//         if (!priority_q.empty()) {
//             pair<char, int> elend = priority_q.top();
//             priority_q.pop();
//             res += elend.first;

//             // If elend has more occurrences, reduce and push it back
//             if (elend.second > 1) {
//                 elend.second -= 1;
//                 priority_q.push(elend);
//             }
//         }

//         // If elest has more occurrences, reduce and push it back
//         if (elest.second > 1) {
//             elest.second -= 1;
//             priority_q.push(elest);
//         }

//         // If two consecutive characters are the same, return an empty string
//         if (res.size() > 1 && res[res.size() - 1] == res[res.size() - 2]) {
//             return "";  // Not possible to reorganize
//         }
//     }

//     return res;
// }
// int main()
// {
//     io;
//     freopen(input, "r", stdin);
//     freopen(output, "w", stdout);
//     int N;
//     cin >> N;
//     char S[MAX];
//     for (int i = 0; i < N; i++){
//         cin >> S[i];
//     }
//     S[N+1] = '\0';
//     string res = reorganizeString((string)S);
//     if (!res.size()) {
//         cout << -1;
//     } 
//     else {
//         cout << res;
//     }
//     return 0;
// }