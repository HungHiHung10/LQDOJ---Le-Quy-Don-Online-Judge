//// CSES - Dice Combinations | Kết hợp xúc xắc
//#include <bits/stdc++.h>
//#define MOD 1000000007
//using namespace std;
//typedef unsigned long long ll;
//int diceCombinations(int n){
//    vector <ll> dp(n + 1, 0);
//    dp[0] = 1;
//    dp[1] = 1;
//    for (int i = 2; i <= n; i++){
//        for (int j = 1; j <= 6 && i - j >= 0; j++){
//            dp[i] = (dp[i] % MOD + dp[i - j] % MOD) % MOD;
//        }
//    }
//    return dp[n];
//}
//int main() {
//    ios_base::sync_with_stdio(false);
//    cin.tie(NULL);
//    int n;
//    cin >> n;
//    cout << diceCombinations(n);
//    return 0;
//}









//// Tổng bằng 0
//#include <bits/stdc++.h>
//
//using namespace std;
//typedef unsigned long long ull;
//ull sumEqual0(vector<int> a){
//    vector<int> prefix(a.size() + 1);
//    prefix[0] = 0;
//    prefix[1] = a[0];
//    for (long unsigned int i = 2; i <= a.size(); i++){
//        prefix[i] = a[i - 1] +  prefix[i - 1];
//    }
////    for (int value : prefix)
////    {
////        cout << value << ' ';
////    }
//    ull result = 0;
//    map<ull, int> mp;
//    sort(prefix.begin(), prefix.end());
//    for (int i = 0; i <= a.size(); i++){
//        mp[prefix[i]] += 1;
//    }
//    // nC2 = n! / (2!)*(n - 2)! = (n - 1)*(n) / 2;
//    for (auto iter = mp.begin(); iter != mp.end(); iter++){
//        if (iter->second >= 1){
//            result += ((iter->second - 1) * (iter->second)) / 2;
//        }
//    }
//    return result;
//}
//int main() {
//    ios_base::sync_with_stdio(false);
//    cin.tie(NULL);
//    int n;
//    cin >> n;
//    vector<int> a(n);
//    for (int& value : a){
//        cin >> value;
//    }
//    cout << sumEqual0(a);
//    return 0;
//}









//// Biến đổi số
//#include <bits/stdc++.h>
//
//using namespace std;
//typedef long long ll;
//int main() {
//    ios_base::sync_with_stdio(false);
//    cin.tie(NULL);
//    string num;
//    cin >> num;
//    ll sum = 0;
//    for (char digit : num){
//        sum = (sum % 3 + (digit - '0') % 3) % 3;
//    }
//        sort(num.begin(), num.end(), std::greater<char>());
//    if (sum % 3 || num[num.size() - 1] - '0'){
//        cout << -1;
//    }
//    else{
//        cout << num;
//    }
//    return 0;
//}









//// Cánh diều - TONGN - Tính tổng các số nguyên liên tiếp từ 1 tới N
//#include <bits/stdc++.h>
//
//using namespace std;
//typedef long long ll;
//typedef unsigned long long ull;
//int main() {
//    ios_base::sync_with_stdio(false);
//    cin.tie(NULL);
//    ull n;
//    cin >> n;
//    ull answer = (n + 1) * (n) / 2;
//    cout << answer;
//    return 0;
//}









////CSES - Maximum Subarray Sum | Tổng đoạn con lớn nhất
//#include <bits/stdc++.h>
//
//using namespace std;
//typedef long long ll;
//typedef unsigned long long ull;
//int checkNegative(vector<int> a){
//    for (long unsigned int i = 0; i < a.size(); i++){
//        if (a[i] >= 0){
//            return -1;
//        }
//    }
//    int index = 0;
//    int maxElement = a[0];
//    for (long unsigned int i = 1; i < a.size(); i++){
//        if (maxElement < a[i]){
//            maxElement = a[i];
//            index = i;
//        }
//    }
//    return index;
//}
//ll maxSubSum(vector<int> a){
//    int n = a.size();
//    int niceTry = checkNegative(a);
//    // cout << "niceTry: " << niceTry << endl;
//    if (niceTry + 1){
//        return a[niceTry];
//    }
//    ll maximumSum = a[0];
//    ll currentSum = a[0];
//    for (int i = 1; i < n; i++){
//        if (currentSum <= 0){
//            currentSum = 0;
//        }
//        currentSum += a[i];
//        maximumSum = max(maximumSum, currentSum);
//        // cout << "maximumSum: " << maximumSum << endl;
//    }
//    return maximumSum;
//}
//int main() {
//    int n;
//    cin >> n;
//    vector<int> a(n);
//    for (int& value : a){
//        cin >> value;
//    }
//    cout << maxSubSum(a);
//    return 0;
//}









//// Rút tiền
//#include <bits/stdc++.h>
//
//using namespace std;
//typedef long long ll;
//typedef unsigned long long ull;
//ull withdrawMoney(int n)
//{
//    int denomination[5] = {1, 5, 10, 20, 100};
//    int index = 4;
//    int d = 0;
//    ull q = 0;
//    while (n){
//        d = n / denomination[index];
//        q += d;
//        n -= d * denomination[index];
//        index -= 1;
//    }
//    return q;
//}
//int main()
//{
//    int t;
//    cin >> t;
//    while(t--)
//    {
//        int n;
//        cin >> n;
//        cout << withdrawMoney(n)  << endl;
//    }
//    return 0;
//}









//// CSES - Increasing Subsequence | Dãy con tăng
//#include <bits/stdc++.h>
//
//using namespace std;
//typedef long long ll;
//typedef unsigned long long ull;
////int LIS(vector<int> a)
////{
////    int n = a.size();
////    vector<int> dp(n, 1);
////    int result = 1;
////    for (int i = 1; i < n; i++){
////        for (int j = 0; j < i; j++){
////            if (a[i] > a[j]){
////                dp[i] = max(dp[i], dp[j] + 1);
////            }
////        }
////        result = max(result, dp[i]);
////    }
////    return result;
////}
//vector<int> LIS(vector<int> a)
//{
//    vector<int> lis;
//    for (int x : a){
//        auto iter = lower_bound(lis.begin(), lis.end(), x);
//        if (iter == lis.end()){
//            lis.push_back(x);
//        }
//        else{
//            *iter = x;
//        }
//    }
//    return lis;
//}
//int main()
//{
//    int n;
//    cin >> n;
//    vector<int> a(n);
//    for (int i = 0; i < n; i++){
//        cin >> a[i];
//    }
//    //cout << LIS(a);
//    vector<int> res = LIS(a);
//    for (int x : res){
//        cout << x << ' ';
//    }
//    return 0;
//}









//// calplus
//#include <bits/stdc++.h>
//
//using namespace std;
//typedef long long ll;
//typedef unsigned long long ull;
//ull calplus(vector<int> a){
//    sort(a.begin(), a.end());
//    ull s = a[0];
//    ull t = 0;
//    for (int i = 1; i < a.size(); i++){
//        s += a[i];
//        t += s*s;
//        //cout << "t: " << t << endl;
//    }
//    return t;
//}
//int main()
//{
//    int n;
//    cin >> n;
//    vector<int> a(n);
//    for (int& x : a){
//        cin >> x;
//    }
//    cout << calplus(a);
//    return 0;
//}









//// CSES - Apple Division | Chia táo
//#include <bits/stdc++.h>
//
//using namespace std;
//typedef long long ll;
//typedef unsigned long long ull;
//ll res = INT_MAX;
//void backTracking(vector<int>& a, ll sum, int start, ll s) {
//    res = min(res, abs(sum - 2 * s));
//    //cout << s << endl;
//    for (long unsigned int i = start; i < a.size(); i++) {
//        backTracking(a, sum, i + 1, s + a[i]);
//    }
//}
//int main()
//{
//    int n;
//    cin >> n;
//    vector<int> a(n);
//    ull sum = 0;
//    for (int& x : a){
//        cin >> x;
//        sum += x;
//    }
//    backTracking(a, sum, 0, 0);
//    cout << res;
//    return 0;
//}









//// MINI CANDY
//#include <bits/stdc++.h>
//
//using namespace std;
//typedef long long ll;
//typedef unsigned long long ull;
//ll res = INT_MAX;
//
//ll miniCandy(vector<int> a)
//{
//    vector<ll> prefix(a.size());
//    prefix[0] = a[0];
//    for (long unsigned int i = 1; i < a.size(); i++){
//        prefix[i] = prefix[i - 1] + a[i];
//    }
//    ll res = INT_MAX;
//    for (int i = 0; i < a.size(); i++){
//        ll left = prefix[i];
//        ll right = prefix[a.size() - 1] - prefix[i];
//        res = min(res, abs(left - right));
//    }
//    return res;
//}
//int main()
//{
//    int n;
//    cin >> n;
//    vector<int> a(n);;
//    for (int& x : a){
//        cin >> x;
//    }
//    cout << miniCandy(a);
//    return 0;
//}









//// CSES - Static Range Sum Queries | Truy vấn tổng mảng tĩnh
//#include <bits/stdc++.h>
//
//using namespace std;
//typedef long long ll;
//typedef unsigned long long ull;
//
//int main()
//{
//    int n, q;
//    cin >> n >> q;
//    vector<int> a(n);;
//    for (int& x : a){
//        cin >> x;
//    }
//    vector<ll> prefix(a.size() + 1);
//    prefix[0] = 0;
//    prefix[1] = a[0];
//    for (long unsigned int i = 2; i <= a.size(); i++){
//        prefix[i] = prefix[i - 1] + a[i - 1];
//    }
////    for (int x : prefix){
////        cout << x << endl;
////    }
//    while (q--){
//        int left, right;
//        cin >> left >> right;
//        cout << prefix[right] - prefix[left - 1] << endl;
//    }
//    return 0;
//}
//









//// Tìm cặp số
//#include <bits/stdc++.h>
//
//using namespace std;
//typedef long long ll;
//typedef unsigned long long ull;
//
//int main()
//{
//    int N, X;
//    cin >> N >> X;
//    vector<int> A(N);;
//    for (int& x : A){
//        cin >> x;
//    }
//    int left = 0;
//    int right = N - 1;
//    while (left <= right){
//
//        if (A[left] + A[right] > X){
//            right -= 1;
//        }
//        else if (A[left] + A[right] < X){
//            left += 1;
//        }
//        else {
//            cout << left + 1 << ' ' << right + 1;
//            return 0;
//        }
//    }
//    cout << "No solution";
//    return 0;
//}









//// Đếm cặp
//#include <bits/stdc++.h>
//
//using namespace std;
//typedef long long ll;
//typedef unsigned long long ull;
//int main()
//{
//    int n, k;
//    cin >> n >> k;
//    vector<int> a(n);
//    map<int, bool> used;
//    map<int, int> mp;
//    for (int& x : a){
//        cin >> x;
//        mp[x] += 1;
//        used[x] = false;
//    }
//    ll res = 0;
//    for (auto iter = mp.begin(); iter != mp.end(); iter++) {
//        if (k - iter->first >= 0 && !used[iter->first]) {
//            if (k - iter->first == iter->first){
//                res += (iter->second - 1) * (iter->second) / 2;
//            }
//            else{
//                res += (iter->second) * (mp[k - iter->first]);
//            }
//            //cout << iter->first << " " << res << endl;
//            used[k - iter->first] = true;
//            used[iter->first] = true;
//        }
//    }
////    for (auto iter = mp.begin(); iter != mp.end(); iter++){
////        cout << iter->first << " ~ " << iter->second << endl;
////    }
//    cout << res;
//    return 0;
//}









//// Độ dài dãy con tăng nghiêm ngặt dài nhất
//#include <bits/stdc++.h>
//
//using namespace std;
//typedef long long ll;
//typedef unsigned long long ull;
////int LIS(vector<int> a){
////    vector<int> dp(a.size(), 1);
////    int lis = 0;
////    for (int i = 1; i < a.size(); i++){
////        for (int j = 0; j < i; j++){
////            if (a[i] > a[j]){
////                dp[i] = max(dp[i], dp[j] + 1);
////            }
////        }
////        lis = max(lis, dp[i]);
////    }
////    return lis;
////}
//int LISA(vector<int> a){
//    int n = a.size();
//    int lisa = INT_MIN;
//    int temp = 1;
//    for (int i = 0; i < n - 1; i++){
//        if (a[i] < a[i + 1]){
//            temp += 1;
//        }
//        else {
//            lisa = max(lisa, temp);
//            temp = 1;
//        }
//    }
//    return max(lisa, temp);
//}
//int main()
//{
//    int t;
//    cin >> t;
//    while (t--){
//        int n;
//        cin >> n;
//        vector<int> a(n);
//        for (int& x : a){
//            cin >> x;
//        }
//        cout << LISA(a) << endl;
//    }
//    return 0;
//}









//// Độ dài dãy con tăng nghiêm ngặt dài nhất
//#include <bits/stdc++.h>
//
//using namespace std;
//typedef long long ll;
//typedef unsigned long long ull;
//int main()
//{
//    int T, n;
//    bool res = 1;
//    cin >> T;
//    while (T--){
//        cin >> n;
//        vector<int> a(n);
//        map<int, int> freq;
//        for (int& x : a){
//            cin >> x;
//            freq[x] += 1;
//            if (freq[x] >= 2){
//                res = 0;
//            }
//        }
//        (res) ? (cout << "YES\n") : (cout << "NO\n");
//        res = 1;
//    }
//    return 0;
//}









//// CSES - Weird Algorithm | Thuật toán lạ
//#include <bits/stdc++.h>
//
//using namespace std;
//typedef long long ll;
//typedef unsigned long long ull;
//void weirdAlgorithm(ull n)
//{
//    cout << n << ' ';
//    if (n == 1){
//        return;
//    }
//    if (n & 1){
//        //cout << n * 3 + 1 << ' ';
//        weirdAlgorithm(n * 3 + 1);
//    }
//    else {
//        //cout << n / 2 << ' ';
//        weirdAlgorithm(n / 2);
//    }
//}
//int main()
//{
//    ull n;
//    cin >> n;
//    weirdAlgorithm(n);
//    return 0;
//}









//// CSES - Sum of Two Values | Tổng hai giá trị
//#include <bits/stdc++.h>
//
//using namespace std;
//typedef long long ll;
//typedef unsigned long long ull;
//int main()
//{
//    unordered_map<ull, int> unordered_mp;
//    int n, x;
//    cin >> n >> x;
//    vector<int> a(n);
//    int index = 1;
//    for (int& x : a){
//        cin >> x;
//        unordered_mp[x] = index++;
//    }
////    for (auto iter = unordered_mp.begin(); iter != unordered_mp.end(); iter++){
////        cout << iter->first << ' ' << iter->second << endl;
////    }
//    for (int i = 0; i < n; i++){
//        //int val = x - a[i];
//        if (unordered_mp.find(x - a[i]) !=  unordered_mp.end() && unordered_mp[x - a[i]] != i + 1){
//            cout << i + 1 << ' ' << unordered_mp[x - a[i]] << endl;
//            return 0;
//        }
//    }
//    cout << "IMPOSSIBLE";
//    return 0;
//}









//// Nhà nghiên cứu
//#include <bits/stdc++.h>
//
//using namespace std;
//typedef long long ll;
//typedef unsigned long long ull;
//int main()
//{
//    int n;
//    cin >> n;
//    vector<int> a(n);
//    for (int i = 0; i < n; i++){
//        cin >> a[i];
//        if (!a[i]){
//            a[i] = -1;
//        }
//    }
//    vector<int> prefix(n);
//    prefix[0] = a[0];
//    for (int i = 1; i < n; i++){
//        prefix[i] = a[i] + prefix[i - 1];
//    }
//    int res = 0;
//    map<int, int> mp;
////    for (int x : prefix){
////        cout << x << ' ';
////    }
//    bool check = 0;
//    for (int i = 0; i < n; i++){
//        if (!prefix[i]){
//            res = max(res, i + 1);
//        }
//        if (mp.count(prefix[i])){
//            res = max(res, i - mp[prefix[i]] + (bool)(!prefix[i]));
//        }
//        else{
//            mp[prefix[i]] = i;
//        }
//
//    }
//    cout << res;
//    return 0;
//}









//// Tổng các số lẻ
//#include <bits/stdc++.h>
//
//using namespace std;
//typedef long long ll;
//typedef unsigned long long ull;
//
//int main()
//{
//    int n;
//    cin >> n;
//    ull sum = n + n * (n - 1);
//    cout << sum << endl;
//    return 0;
//}









//// Module 1
//#include <bits/stdc++.h>
//
//using namespace std;
//typedef long long ll;
//typedef unsigned long long ull;
//
//int main()
//{
//    ll a, b, c;
//    cin >> a >> b >> c;
//    cout << (a % c + b % c) % c << ' ';
//    if ((a % c - b % c) % c < 0)
//        cout << (a % c - b % c) % c + c << ' ';
//    else
//        cout << (a % c - b % c) % c << ' ';
//    cout << (a % c * b % c) % c;
//    return 0;
//}









//// Dãy con tăng dài nhất (bản dễ)
//#include <bits/stdc++.h>
//
//using namespace std;
//typedef long long ll;
//typedef unsigned long long ull;
//
//int main()
//{
//    int n;
//    cin >> n;
//    vector <int> a(n);
//    vector <int> dp(n, 1);
//    int res = 1;
//    for (int& x : a){
//        cin >> x;
//    }
//    for (int i = 1; i < n; i++){
//        for (int j = 0; j < i; j++){
//            if (a[i] > a[j]){
//                dp[i] = max(dp[i], dp[j] + 1);
//            }
//        }
//        res = max(res, dp[i]);
//    }
//    cout << res;
//    return 0;
//}









//// Bài dễ (DHBB 2021)
//#include <bits/stdc++.h>
//
//#define MAX 1000001
//using namespace std;
//typedef long long ll;
//typedef unsigned long long ull;
//bool p[MAX];
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
//int main()
//{
//    int n;
//    cin >> n;
//    vector<int> a(n);
//    for (int& x : a){
//        cin >> x;
//    }
//    vector<long long> prefix(n);
//    prefix[0] = a[0];
//    for (int i = 1; i < n; i++){
//        prefix[i] = prefix[i - 1] + a[i];
//    }
//    init();
//    ll left = LLONG_MAX;
//    //ll right = LLONG_MIN;
//    ll res = llONG_MIN;
//    for (int i = 1; i < n; i++){
//        if (p[i + 1]){
//            left = min(left, prefix[i - 1]);
//            res = max(res, prefix[i] - left);
//        }
//    }
//    cout << res;
//    return 0;
//}









//// Cánh diều - KILOPOUND - Đổi kilo ra pound
//#include <bits/stdc++.h>
//
//#define MAX 1000001
//using namespace std;
//typedef long long ll;
//typedef unsigned long long ull;
//bool p[MAX];
//int main()
//{
//    long double x;
//    cin >> x;
//    cout << fixed << setprecision(2) << x * (long double) 2.205 << endl;
//    return 0;
//}









// Dãy số
//#include <bits/stdc++.h>
//
//#define MAX 1000001
//using namespace std;
//typedef long long ll;
//typedef unsigned long long ull;
//int main(){
//    int n;
//    cin >> n;
//    vector<int> a(n);
//    for (int& x : a){
//        cin >> x;
//    }
//    vector<ll> prefix(n);
//    prefix[0] = a[0];
//    for (int i = 1; i < n; i++){
//        prefix[i] = prefix[i - 1] + a[i];
//    }
//    map<int, ll> mp;
//    map<int, int> index;
//    ll res = LLONG_MIN;
//    mp[a[0]] = prefix[0];
//    index[a[0]] = 0;
//    for (int i = 1; i < n; i++){
//        if (mp.count(a[i])){
//            res = max(res, (!index[a[i]]) ? (prefix[i]) : (prefix[i] - prefix[index[a[i]] - 1]));
//
//        }
//        else{
//            mp[a[i]] = prefix[i];
//            index[a[i]] = i;
//        }
//    }
//    cout << res;
//    return 0;
//}









// Dãy số
#include <bits/stdc++.h>

#define MAX 1000001
#define MOD 1000000007
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
ull binaryPow(int a, int b){
    ull ans = 1;
    while (b){
        if (b & 1){
            ans = (ans % MOD * a % MOD) % MOD;
        }
        a = (a % MOD * a % MOD) % MOD;
        b >>= 1;
    }
    return ans;
}
int main()
{
    int N;
    cin >> N;
    vector<int> a(N);
    unordered_map<int, int> unordered_mp;
    for (int i = 0; i < N; i++){
        cin >> a[i];
        unordered_mp[a[i]] += 1;
    }
    ull res = 0;

    for (auto iter = unordered_mp.begin(); iter != unordered_mp.end(); iter++){
        res = (res % MOD + binaryPow(iter->first, (iter->second % 1) + N - 1) % MOD) % MOD;
        cout << binaryPow(iter->first, (iter->second % 1) + N - 1) << endl;
    }
    cout << res;
    return 0;
}









//// Những cây kẹo hạnh phúc
//#include <bits/stdc++.h>
//
//#define MAX 1000001
//using namespace std;
//typedef long long ll;
//typedef unsigned long long ull;
//int main(){
//    int t;
//    cin >> t;
//    int a[3];
//    a[1] = 0;
//    a[2] = 0;
//    while (t--){
//        int n, x;
//        cin >> n;
//        for (int i = 0; i < n; i++){
//            cin >> x;
//            a[x] += 1;
//        }
//        if ((a[1] + a[2] * 2) & 1){
//            cout << "no\n";
//        }
//        else{
//            if (){
//                cout << "no\n";
//            }
//            else{
//
//                cout << "yes\n";
//            }
//        }
//        a[1] = 0;
//        a[2] = 0;
//    }
//    return 0;
//}
