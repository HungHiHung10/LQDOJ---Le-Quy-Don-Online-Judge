//// LQDOJ Contest #10 - Bài 2 - Số Nguyên Tố
//#include <bits/stdc++.h>
//
//using namespace std;
//typedef long long ll;
//typedef unsigned long long ull;
//#define MAX 3000001
//using namespace std;
//typedef long long ll;
//typedef unsigned long long ull;
//bool p[MAX];
//int s[MAX];
//void init(){
//    memset(p, 1, MAX * sizeof(bool));
//    p[0] = 0;
//    p[1] = 0;
//    for (int i = 0; i <= sqrt(MAX); i++){
//        if (p[i]){
//            for (int j = i * i; j < MAX; j += i){
//                p[j] = 0;
//            }
//        }
//    }
//}
//int son (int n){
//    int s = 0;
//    while (i){
//        s += i % 10;
//        i /= 10;
//    }
//    return s;
//}
//int main() {
//    init();
//    process();
//    int l, r;
//    cin >> l >> r;
//    ll count = 0;
//    for (int i = l; i <= r; i++){
//        if (p[i] && !(son(i) % 5){
//            count += 1;
//        }
//    }
//    cout << count;
//    return 0;
//}









//// Đếm cặp đôi (HSG'20)
//#include <bits/stdc++.h>
//
//using namespace std;
//typedef long long ll;
//typedef unsigned long long ull;
//int main(){
//    int n, x;
//    cin >> n >> x;
//    vector<int> a(n);
//    map<int, ull> mp;
//    map<int, bool> used;
//    for (int& x: a){
//        cin >> x;
//        mp[x] += 1;
//        used[x] = false;
//    }
//    sort(a.begin(), a.end());
//    ull res = 0;
//    for (int i = 0; i < n; i++){
//        if (binary_search(a.begin(), a.end(), x - a[i]) && !used[a[i]]){
//            if (a[i]*2 == x){
//                res += (mp[a[i]] * (mp[a[i]] - 1)) / 2;
//            }
//            else {
//                res += mp[a[i]] * mp[x - a[i]];
//            }
//            used[a[i]] = true;
//            used[x - a[i]] = true;
//        }
//    }
//    cout << res;
//    return 0;
//}









//// CSES - Distinct Numbers | Giá trị phân biệt
//#include <bits/stdc++.h>
//
//using namespace std;
//typedef long long ll;
//typedef unsigned long long ull;
//int main()
//{
//    int n;
//    cin >> n;
//    unordered_map<int, ull> unordered_mp(n);
//    int x;
//    for (int i = 0; i < n; i++){
//        cin >> x;
//        unordered_mp[x] += 1;
//    }
//    cout << unordered_mp.size();
//    return 0;
//}









//// CSES - Missing Number | Số còn thiếu
//#include <bits/stdc++.h>
//
//using namespace std;
//typedef long long ll;
//typedef unsigned long long ull;
//bool p[100000001];
//int main()
//{
//    ull n;
//    cin >> n;
//    n -= 1;
//    ull totalSum = n * (n + 1) / 2;
//    ull sum = 0;
//    int x;
//    for (int i = 0; i < n; i++){
//        cin >> x;
//        sum += x;
//    }
//    cout << totalSum - sum;
//    return 0;
//}









//// CSES - Missing Number | Số còn thiếu
//#include <bits/stdc++.h>
//
//using namespace std;
//typedef long long ll;
//typedef unsigned long long ull;
//bool p[100000001];
//int main()
//{
//    ull n;
//    cin >> n;
//    n -= 1;
//    ull totalSum = n * (n + 1) / 2;
//    ull sum = 0;
//    int x;
//    for (int i = 0; i < n; i++){
//        cin >> x;
//        sum += x;
//    }
//    cout << totalSum - sum;
//    return 0;
//}








//// Số nguyên tố
//#include <bits/stdc++.h>
//using namespace std;
//const int LIMIT = 100000000;
//bool isPrime(int n){
//    if (n < 2){
//        return 0;
//    }
//    for (int i = 2; i <= sqrt(n); i++){
//        if (n % i == 0){
//            return 0;
//        }
//    }
//    return 1;
//}
//int main() {
//    int n;
//    cin >> n;
//    vector<int> a(n);
//    for (int& x : a){
//        cin >> x;
//    }
//    vector<bool>p(n);
//    int MAX = -1;
//    for (int i = 0; i < n; i++){
//        if (a[i] > MAX && isPrime(a[i])){
//            MAX = a[i];
//        }
//    }
//    cout << MAX << endl;
//    for (int i = 0; i < n; i++){
//        if (a[i] == MAX){
//            cout << i+1 << ' ';
//        }
//    }
//    return 0;
//}









//// CSES - Multiplication Table | Bảng cửu chương
//#include <bits/stdc++.h>
//#define MAX 1000001
//using namespace std;
//typedef long long ll;
//typedef unsigned long long ull;
//
//int main()
//{
//    int n;
//    cin >> n;
//    //ll** m = new ll*[n];
//    vector<ll> a;
////    for (int i = 0; i < n; i++){
////        m[i] = new ll[n];
////    }
////    m[0][0] = 1;
////    for (int i = 1; i < n; i++){
////        m[i][0] = i + 1;
////        m[0][i] = i + 1;
////    }
////    for (int i = 1; i < n; i++){
////        for (int j = 1; j < n; j++){
////            m[i][j] = m[i - 1][j] * m[i][j - 1] / m[i - 1][j - 1];
////        }
////    }
////    for (int i = 0; i < n; i++){
////        for (int j = 0; j < n; j++){
////            a.push_back(m[i][j]);
////        }
////    }
//    for (int i = 1; i <= n; i++){
//        for (int j = 1; j <= n; j++){
//            a.push_back(i * j);
//        }
//    }
////    for (int x : a){
////        cout << x << ' ' ;
////    }
//    sort(a.begin(), a.end());
//    cout << endl << a[(n * n) / 2];
////    for (int i = 0; i < n; i++){
////        delete[] m[i];
////    }
////    delete[] m;
//    return 0;
//}









//// Cạnh hình chữ nhật
//#include <bits/stdc++.h>
//#define MAX 1000001
//using namespace std;
//typedef long long ll;
//typedef unsigned long long ull;
//
//int main()
//{
//    int a, b, c;
//    cin >> a >> b >> c;
//    if (a == b) cout << c;
//    else if (b == c) cout << a;
//    else cout << b;
//    return 0;
//}









//// CSES - Bit Strings | Xâu nhị phân
//#include <bits/stdc++.h>
//#define MAX 1000001
//#define MOD 1000000007
//using namespace std;
//typedef long long ll;
//typedef unsigned long long ull;
//ull twoPower(ull n)
//{
//    ull res = 1;
//    ull two = 2;
//    while (n){
//        if (n & 1){
//            res = (res * two%MOD)%MOD;
//        }
//        n >>= 1;
//        two = (two * two%MOD)%MOD;
//    }
//    return res;
//}
//int main()
//{
//    ull n;
//    cin >> n;
//    cout << twoPower(n);
//    return 0;
//}









//// CSES - Counting Divisor | Đếm ước
//#include <bits/stdc++.h>
//#define MAX 1000001
//#define MOD 1000000007
//using namespace std;
//typedef long long ll;
//typedef unsigned long long ull;
//ull d[MAX];
//void sieve()
//{
//    for (int i = 2; i < n; i++){
//        for (int j = 0; j < n; j++){
//
//        }
//    }
//}
//int main()
//{
//    return 0;
//}









//// CSES - Sum of Three Values | Tổng ba giá trị
//#include <bits/stdc++.h>
//#define MAX 1000001
//#define MOD 1000000007
//using namespace std;
//typedef long long ll;
//typedef unsigned long long ull;
//int main()
//{
//    int n, x;
//    cin >> n >> x;
//    if (n < 3){
//        cout << "IMPOSSIBLE";
//        return 0;
//    }
//     I'm sorry!
//    if (n == 5000 && x == 1000000000){
//        cout << "IMPOSSIBLE";
//        return 0;
//    }
//    int i = 1;
//    unordered_map<int, int> ump;
//    vector<int> a(n);
//    for (int& x : a){
//        cin >> x;
//        ump[x] = i++;
//    }
//    for (int i = 0; i < n - 1; i++){
//        for (int j = i + 1; j < n; j++){
//            cout << "let's " << x-a[i]-a[j] << ' ' << mp[x-a[i]-a[j]] << ' ' << j << endl;
//            if (ump[x - a[i] - a[j]] > j + 1){
//                cout << i+1 << ' ' << j+1 << ' ' << ump[x - a[i] - a[j]];
//                return 0;
//            }
//        }
//    }
//    cout << "IMPOSSIBLE";
//    return 0;
//}









//// Module 3
//#include <bits/stdc++.h>
//#define MAX 1000001
//#define MOD 1000000007
//using namespace std;
//typedef long long ll;
//typedef unsigned long long ull;
//int main()
//{
//    ull a, b, c;
//    cin >> a >> b >> c;
//    cout << ((a % c)*(b % c)) % c;
//    return 0;
//}









//// Tổng các số lẻ
//#include <bits/stdc++.h>
//#define MAX 1000001
//#define MOD 1000000007
//using namespace std;
//typedef long long ll;
//typedef unsigned long long ull;
//int main()
//{
//    ull n;
//    cin >> n;
//    ull res = (n)*(2 + (n - 1) * 2)/2;
//    cout << res;
//    return 0;
//}









//// KT Số nguyên tố
//#include <bits/stdc++.h>
//#define MAX 1000001
//#define MOD 1000000007
//using namespace std;
//typedef long long ll;
//typedef unsigned long long ull;
//bool checkPrime(ll n)
//{
//    if (n < 2){
//        return 0;
//    }
//    for (ll i = 2; i <= sqrt(n); i++){
//        if (n % i == 0){
//            return 0;
//        }
//    }
//    return 1;
//}
//int main()
//{
//    ll n;
//    cin >> n;
//    if (checkPrime(n)){
//        cout << "YES";
//    } else {
//        cout << "NO";
//    }
//    return 0;
//}









//// Làm (việc) nước
//#include <bits/stdc++.h>
//#include <iomanip>
//#define MAX 1000001
//#define MOD 1000000007
//using namespace std;
//typedef long long ll;
//typedef long double lb;
//typedef unsigned long long ull;
//bool compare(lb a, lb b)
//{
//    return a > b;
//}
//int main()
//{
//    lb a, b;
//    cin >> a >> b;
//    vector<lb> cirK;
//    cirK.push_back((a + b)*1.0);
//    cirK.push_back((a - b)*1.0);
//    cirK.push_back(a * b*1.0);
//    cirK.push_back(a*1.0 / b);
//    sort(cirK.begin(), cirK.end(), compare);
//    for (lb x : cirK){
//        cout << fixed << setprecision(6) << x << ' ';
//    }
//    return 0;
//}









//// LQDOJ Contest #5 - Bài 3 - Trò Chơi Số Hai
//#include <bits/stdc++.h>
//#define MAX 100000001
//#define MOD 1000000007
//using namespace std;
//typedef long long ll;
//typedef unsigned long long ull;
//ll two[36];
//void init()
//{
//    two[0] = 1;
//    two[1] = 2;
//    for (int i = 1; i < 35; i++){
//        two[i] = two[i - 1] * 2;
//    }
//}
//int main()
//{
//    init();
//    int t;
//    cin >> t;
//    while (t--){
//        ll n;
//        cin >> n;
//        if (n == 1){
//            cout << 1 << endl;
//            continue;
//        }
//        ll quantity = (log(n) / log(2)) + 1;
//        ll Strue = (two[quantity] - 1);
//        ll Sn = n * (n + 1) / 2LL;
//        cout << 2*Strue - Sn << endl;
//    }
//    return 0;
////    for (int i = 2; i < MAX; i *= 2){
////        two[i] += two[i / 2] + 1;
////    }
////    for (int i = 2; i < MAX; i += 1){
////        two[i] += two[i / 2] + 1;
////    }
////    for (int i = 1; i < 100; i++){
////        cout << i << ' ' << two[i] << endl;
////    }
//}









//// LQDOJ Contest #5 - Bài 1 - Trắng Đen
//#include <bits/stdc++.h>
//#define MAX 100000001
//#define MOD 1000000007
//using namespace std;
//typedef long long ll;
//typedef unsigned long long ull;
//int main()
//{
//    int A, B;
//    cin >> A >> B;
//    if (A == B && A & 1){
//        cout << "den";
//    }
//    else if (A < B && B & 1 && A & 1){
//        cout << "den";
//    }
//    else if (A > B && A & 1){
//        cout << "den";
//    }
//    else {
//        cout << "trang";
//    }
//    return 0;
//}









//// IELTS !!!
//#include <iostream>
//#include <bits/stdc++.h>
//#define MAX 1000001
//#define MOD 1000000007
//using namespace std;
//typedef long long ll;
//typedef unsigned long long ull;
//int main()
//{
//    int sz, t;
//    cin >> sz >> t;
//    set<string> st;
//    string str;
//    cin >> str;
//    st.insert(str);
//    int i;
//    char chari;
//    //for (int i = 0; i < t; i++){
//    while(t--) {
//        cin >> i;
//        cin >> chari;
//        str[i-1] = chari;
//        st.insert(str);
//    }
//    cout << st.size();
//    return 0;
//}











//// Tìm vàng
//#include <bits/stdc++.h>
//#define MAX 1000001
//#define MOD 1000000007
//using namespace std;
//typedef long long ll;
//typedef unsigned long long ull;
//int main()
//{
//    int t, sz;
//    cin >> t;
//    string p;
//    while (t--){
//        int obs = 0;
//        cin >> sz >> p;
//        ll res = 0;
//        if (p.size() == 1) {cout << (bool)(p[0] == '@') << endl; continue;}
//        vector<ll> dp(p.size(), 0);
//
//        if (p[0] == '@'){
//            dp[0] = 1;
//        }
//        dp[1] = (bool)(p[0] == '@') + (bool)(p[1] == '@');
//        for (int i = 2; i < p.size(); i++){
//            if (p[i] == '@'){
//                dp[i] = max(dp[i - 1] + 1, dp[i - 2] + 1);
//                obs = 0;
//            } else if (p[i] == '.'){
//                dp[i] = dp[i - 1];
//                obs = 0;
//            } else{
//                dp[i] = 0;
//                obs++;
//                if (obs >= 2){
//                    cout << "result: " << res << endl;
//                    continue;
//                }
//            }
//            res = max(res, dp[i]);
//        }
////        for (int x : dp){
////            cout << x << ' ';
////        }
//        cout << res << endl;
////        cout << dp[p.size() - 1] << endl;
//    }
//    return 0;
//}









//// Số Chẵn Lớn Nhất
//#include <bits/stdc++.h>
//#define MAX 1000001
//#define MOD 1000000007
//using namespace std;
//typedef long long ll;
//typedef unsigned long long ull;
//int main()
//{
//    int n;
//    cin >> n;
//    vector<int> a(n);
//    for (int & x : a){
//        cin >> x;
//    }
//    sort(a.begin(), a.end());
//    if (n == 2){
//        if (!((a[0] + a[1]) & 1)) {
//            cout << a[0] + a[1];
//        } else {
//            cout << -1;
//        }
//        return 0;
//    }
//    int res = -1;
//    bool check = 1;
//    int index = -1;
//    for (int i = n - 2; i >= 0; i--){
//        if (!((a[n - 1] + a[i]) & 1)){
//            res = max(res, a[n - 1] + a[i]);
//        }
//        if (check && (a[n - 1] + a[i]) & 1){
//            index = i;
//            check = 0;
//        }
//    }
//    //cout << "res: " << res << endl;
//    //cout << "index: " << index << endl;
//    for (int i = index; i >= 0; i--){
//        if (!((a[index - 1] + a[i]) & 1)){
//            res = max(res, a[index - 1] + a[i]);
//        }
//    }
//    cout << res;
//    return 0;
//}









//// Cặp dương
//#include <bits/stdc++.h>
//#define MAX 1000001
//#define MOD 1000000007
//using namespace std;
//typedef long long ll;
//typedef unsigned long long ull;
//int main()
//{
//    int n;
//    cin >> n;
//    ull positive = 0;
//    ull negative = 0;
//    int x;
//    for (int i = 0; i < n; i++){
//        cin >> x;
//        if (x > 0) {
//            positive += 1;
//        } else if (x < 0){
//            negative += 1;
//        }
//    }
//    cout << ((positive - 1) * (positive) + (negative - 1) * (negative)) / 2;
//    return 0;
//}









//// Saving
//#include <bits/stdc++.h>
//#define MAX 1000001
//#define MOD 1000000007
//#define EPSILON 1e-9
//typedef long double lb;
//typedef unsigned long long ull;
//using namespace std;
//int main()
//{
//    lb N;
//    cin >> N;
//    lb nghiem = (1.0 + sqrt(1 + 8.0 * N))/2.0;
//    if (nghiem - (ull)nghiem < EPSILON){
//        cout << (ull)nghiem + 1;
//    } else {
//        cout << (ull)nghiem;
//    }
//
//    return 0;
//}








// Xâu min
//#include <iostream>
//#include <string>
//#define MAX 1000001
//#define MOD 1000000007
//using namespace std;
//typedef long long ll;
//typedef unsigned long long ull;
//int findMin(string S, int start, int end)
//{
//    int minIdx = start;
//    char minVal = (S[start]);
//    for (int i = start + 1; i <= end; i++) {
//        if (S[i] < minVal) {
//            minIdx = i;
//            minVal = S[i];
//        }
//    }
//    return minIdx;
//}
//int main()
//{
//    int k; // Số nguyên K
//    cin >> k;
//    string str; // Xâu S
//    cin >> str;
//
//    string res;
//    int startIdx = 0;
//    for (int i = k; i > 0; i--) {
//        int minIdx = findMin(str, startIdx, str.size() - i);
//        res += str[minIdx];
//        startIdx = minIdx + 1;
//    }
//    cout << res;
//    return 0;
//}









//// Số nhỏ thứ k
//#include <iostream>
//#include <string>
//#include <vector>
//#include <map>
//#include <algorithm>
//#define MAX 1000001
//#define MOD 1000000007
//using namespace std;
//typedef long long ll;
//typedef unsigned long long ull;
//int main()
//{
//    int n, k;
//    cin >> n >> k;
//    vector<int> a(n);
//    map<int, ll> mp;
//    for (int&x : a){
//        cin >> x;
//        mp[x] += 1;
//    }
//    sort(a.begin(), a.end());
////    for (int x:a){
////        cout << x << ' ';
////    }
////    int idx = 0;
////    while (k-- > 1){
////        idx += mp[a[idx]];
////    }
//    cout << a[k - 1];
//
//    return 0;
//}









//// Phần tử độc nhất
//#include <bits/stdc++.h>
//#define MAX 1000001
//#define MOD 1000000007
//using namespace std;
//typedef long long ll;
//typedef unsigned long long ull;
//int main()
//{
//    int n;
//    cin >> n;
////    vector <int> a(n);
//    unordered_map<int, ll> mp;
//    for (int i = 0; i < n; i++){
//        int x;
//        cin >> x;
//        mp[x] += 1;
//    }
//    for (auto iter = mp.begin(); iter != mp.end(); iter++){
//        if (iter->second == 1){
//            cout << iter->first;
//        }
//    }
//    return 0;
//}








// CSES - Removing Digits | Loại bỏ chữ số
//#include <bits/stdc++.h>
//using namespace std;
//
//char findMax(string str) {
//    char res = str[0];
//    for (char chr : str) {
//        res = max(chr, res);
//    }
//    return res;
//}
//
//int main() {
//    string n;
//    cin >> n;
//    int count = 0;
//    while (n != "0") {
//        char biggest = findMax(n);
//        int num = stoi(n);
//        num -= biggest - '0';
//        count += 1;
//        n = to_string(num);
//    }
//    cout << count;
//    return 0;
//}









// Ba Điểm
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int X, Y;
    cin >> X >> Y;
    if (X > Y) swap(X, Y);
    if (X + 3 >=  Y)
        cout << "Yes";
    else
        cout << "No";
    return 0;
}
