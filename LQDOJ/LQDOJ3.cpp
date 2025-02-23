//// Ambatukam
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
//    vector<ll> a(n);
//    vector<ll> prefix(n);
//    for (int i = 0; i < n; i++){
//        cin >> a[i];
//    }
//    prefix[0] = a[0];
//    for (int i = 1; i < n; i++){
//        prefix[i] = prefix[i-1] + a[i];
//    }
//    for (ll x : prefix){
//        cout << x << ' ';
//    }
//    return 0;
//}









//// CSES - Sum of Divisors | Tổng các ước
//#include <bits/stdc++.h>
//#define MAX 1000001
//#define MOD 1000000007
//using namespace std;
//typedef long long ll;
//typedef unsigned long long ull;
//int main()
//{
//    ll n;
//    cin >> n;
////    vector<int> a(n);
////    for (int i = 0; i < n; i++){
////        cin >> a[i];
////    }
//    if (n == 1){
//        cout << 1;
//        return 0;
//    }
//    ll res = 0;
////    for (ll i = 1; i <= n/2; i++){
////        res = (res%MOD + (i%MOD * (n/i)%MOD)%MOD)%MOD;
////        if (n + 1 - i != i){
////            ll another = n+1-i;
////            res = (res%MOD + (another%MOD * (n/another)%MOD)%MOD)%MOD;
////        }
////    }
//    //cout << "res: " << res << endl;
//    //cout << res;
//    ll res1 = (2*(n%MOD))%MOD;
//    for (ll i = 2; i <= sqrt(n); i++){
//        res1 = (res1%MOD + (i%MOD * (n/i)%MOD)%MOD)%MOD;
//    }
//    for (ll i = sqrt(n) + 1; i < n; i++){
//        res1 = (res1%MOD + (i%MOD * (n/i)%MOD)%MOD)%MOD;
//    }
//    //cout << "res1: " << res1;
//    cout << res1;
//    return 0;
//}









//// 23A5 Phiêu Lưu Kí - Tập 2. Định lý Fermat về tổng của hai số chính phương
//#include <bits/stdc++.h>
//#define MAX 1000001
//#define MOD 1000000007
//#define EPSILON 1e-7
//using namespace std;
//typedef long long ll;
//typedef unsigned long long ull;
////bool isPrime(ull n)
////{
////    if (n < 2){
////        return 0;
////    }
////    for (ll i = 2; i <= sqrt(n); i++){
////        if (n % i == 0){
////            return 0;
////        }
////    }
////    return 1;
////}
//bool isPrime(ull n) {
//    // Tất cả các số nguyên tố 𝑛 lớn hơn 3 đều có dạng 6𝑘 ± 1(𝑘 ≥ 1).
//    if (n <= 1) return false;   // Nếu n <= 1, không phải là số nguyên tố
//    if (n <= 3) return true;    // Nếu n là 2 hoặc 3, thì là số nguyên tố
//    if (n % 2 == 0 || n % 3 == 0) return false; // Nếu n chia hết cho 2 hoặc 3, không phải là số nguyên tố
//    for (long long i = 5; i * i <= n; i += 6) { // Duyệt từ 5 đến sqrt(n) với bước nhảy 6
//        if (n % i == 0 || n % (i + 2) == 0) return false; // Nếu n chia hết cho i hoặc i + 2, không phải là số nguyên tố
//    }
//    return true; // Nếu không tìm thấy ước số nào, n là số nguyên tố
//}
//
//int main()
//{
//    ull n;
//    cin >> n;
//    if (n == 2){
//        cout << "YES";
//        return 0;
//    }
//    if (!isPrime(n)){
//        cout << "NO";
//        return 0;
//    }
////    for (ull i = sqrt(n); i >= 1; i--){
////        ull J = n - i*i;
////        if (J - (ull)sqrt(J)*(ull)sqrt(J) < EPSILON){
////            cout << "J: " << J << endl;
////            cout << "res: " << (ull)sqrt(J) << endl;
////            cout << "YES";
////            return 0;
////        }
////    }
////    cout << "NO";
//    if (n % 4 == 1){
//        cout << "YES";
//    }
//    else cout << "NO";
//    return 0;
//}









//// LQDOJ Contest #10 - Bài 3 - Chiếc Gạch
//#include <bits/stdc++.h>
//using namespace std;
//typedef long long ll;
//typedef unsigned long long ull;
//int main()
//{
//    int n;
//    cin >> n;
//    vector<int> a(n);
//    for (int& x : a){
//        cin >> x;
//    }
//    ull res = 0;
//    for (int i = 1; i < n; i++){
//        if (a[i] < a[i-1]){
//            res += a[i-1] - a[i];
//            a[i] += (a[i-1] - a[i]);
//        }
//    }
//    cout << res;
//    return 0;
//}









//






//// Tìm UCLN, BCNN
//#include <bits/stdc++.h>
//#define MAX 1000001
//#define MOD 1000000007
//using namespace std;
//typedef long long ll;
//typedef unsigned long long ull;
//ull GCD(ull a, ull b)
//{
//    if (b == 0){
//        return a;
//    }
//    return GCD(b, a % b);
//}
//ull LCM(ull a, ull b)
//{
//    return a * (b/GCD(a, b));
//}
//int main()
//{
//    ull a, b;
//    cin >> a >> b;
//    cout << GCD(a, b) << ' ' << LCM(a, b);
//    return 0;
//}









//// Số siêu tròn
//#include <bits/stdc++.h>
//#define MAX 1000001
//#define MOD 1000000007
//using namespace std;
//typedef long long ll;
//typedef unsigned long long ull;
//ll c[1000001];
//int qon(int n)
//{
//    int cnt = 0;
//    while (n){
//        n /= 10;
//        cnt += 1;
//    }
//    return cnt;
//}
//int main()
//{
//    for (int i = 1; i < 10; i++){
//        c[i] = 1;
//    }
//    for (int i = 10; i < 1000001; i+=pow(10, qon(i)-1)){
//        c[i] = 1;
//    }
//
//    for (int i = 1; i < 1000001; i++){
//        c[i] += c[i-1];
//    }
//    int t;
//    cin >> t;
//    int N;
//    while (t--){
//        cin >> N;
//        cout << c[N] << endl;
//    }
//    return 0;
//}









//// CSES - Concert Tickets | Vé hòa nhạc
//#include <iostream>
//#include  <vector>
//#include <algorithm>
//#include <bits/stdc++.h>
//using namespace std;
//int main()
//{
//    int n, m;
//    cin >> n >> m;
//    multiset<int> h;
//    vector<int> t(m);
//    int x;
//    for (int i = 0; i < n; i++){
//        cin >> x;
//        h.insert(x);
//    }
//    for (int &x:t){
//        cin >> x;
//    }
//    for (int i = 0; i < m; i++){
//        auto iter = h.upper_bound(t[i]);
//        // SO SÁNH về ĐỘ PHỨC TẠP THỜI GIAN:
//        // h.upper_bound(t[i]) < upper_bound(h.begin(), h.end(), t[i])
//        // h : multiset<int> h;
//        if (iter != h.begin()){
//            cout << *(--iter) << endl;
//            h.erase(iter);
//        }
//        else {
//            cout << -1 << endl;
//        }
//    }
//    return 0;
//}









//// CSES - Repetitions | Lặp lại
//#include <iostream>
//#include  <vector>
//#include <algorithm>
//#include <bits/stdc++.h>
//using namespace std;
//int main()
//{
//    string s;
//    cin >> s;
//    int res = 1;
//    int curr = 1;
//    for (long unsigned int i = 1; i < s.size(); i++){
//        if (s[i] == s[i-1]){
//            curr++;
//        } else {
//            res = max(res, curr);
//            curr = 1;
//        }
//    }
//    res = max(res, curr);
//    cout << res;
//    return 0;
//}









//// CSES - Increasing Array | Dãy tăng
//#include <bits/stdc++.h>
//using namespace std;
//typedef unsigned long long ull;
//int main()
//{
//    int n;
//    cin >> n;
//    vector<int> a(n);
//    for (int i = 0; i < n; i++){
//        cin >> a[i];
//    }
//    ull res = 0;
//    for (int i = 1; i < n; i++){
//        if (a[i - 1] > a[i]) {
//            int d = a[i-1] - a[i];
//            res += d;
//            a[i] += d;
//        }
//    }
////    for (int x : a){
////        cout << x << ' ';
////    }
//    cout << res;
//    return 0;
//}









//// Lời nguyền của Shizuka
//#include <bits/stdc++.h>
//#define MAX 1000001
//#define MOD 1000000007
//using namespace std;
//typedef long long ll;
//typedef unsigned long long ull;
//int main()
//{
////    for (auto iter = mp.begin(); iter != mp.end(); iter++){
////        cout << iter->first << " -> ";
////        if (iter->second.size() == 0){
////            continue;
////        }
////        for (int x : iter->second){
////            cout << x << ' ';
////        }
////        cout << endl;
////    }
//            // cout << "here\n";
//    int n, q;
//    cin >> n >> q;
//    vector <int> a(n);
//    unordered_map<int, vector<int>> mp;
//    int v;
//    for (int i = 0; i < n; i++){
//        cin >> v;
//        mp[v].push_back(i+1);
//        a[i] = v;
//    }
//    int x, l, r;
//    while (q--){
//        cin >> x >> l >> r;
//        // lower_bound: NHỎ NHẤT/ĐẦU TIÊN lớn hơn hoặc bằng.
//        // upper_bound: NHỎ NHẤT/ĐẦU TIÊN lớn hơn.
//        // Tính toán số phần tử trong khoảng [l, r]
//        // Để tính số phần tử nằm trong khoảng [l, r], bạn chỉ cần tính khoảng cách giữa iter1 và iter2.
//        // Nếu iter1 trỏ đến phần tử đầu tiên không nhỏ hơn l và iter2 trỏ đến phần tử đầu tiên lớn hơn r, thì tất cả các phần tử giữa iter1 và iter2 đều nằm trong khoảng [l, r].
//        auto iter1 = lower_bound(mp[x].begin(), mp[x].end(), l);
//        auto iter2 = upper_bound(mp[x].begin(), mp[x].end(), r);
//
//        if (iter1 == mp[x].end() || *iter1 > r){
//            cout << 0 << endl;
//        }
//        else {
//            cout << iter2 - iter1 << endl;
//        }
//    }
//    return 0;
//}









//// Tổng Của Hiệu
//#include <bits/stdc++.h>
//#define MAX 1000001
//#define MOD 1000000007
//using namespace std;
//typedef long long ll;
//typedef unsigned long long ull;
//string add(string operand1st, string operand2nd)
//{
//    if (operand1st.size() == 0){
//        return operand2nd;
//    }
//	string result = "";
//	if (operand1st.size() < operand2nd.size())
//	{
//		swap(operand1st, operand2nd);
//	}
//	reverse(operand1st.begin(), operand1st.end());
//	reverse(operand2nd.begin(), operand2nd.end());
//	while (operand1st.size() > operand2nd.size())
//	{
//		operand2nd += "0";
//	}
//	//cout << operand1st << ' ' << operand2nd << endl;
//	int res = 0;
//	for (int i = 0; i < operand1st.size(); i++)
//	{
//		int sum = (operand1st[i] - '0' + operand2nd[i] - '0' + res);
//		result += to_string(sum % 10);
//		res = sum / 10;
//	}
//	if (res)
//	{
//		result += to_string(res);
//	}
//	reverse(result.begin(), result.end());
//	return result;
//}
//int main()
//{
//    int n;
//    cin >> n;
//    vector<ll> a(n);
//    for (ll&x : a){
//        cin >> x;
//    }
//    sort(a.begin(), a.end());
//    string res;
//    for (int i = 0; i < n; i++){
//        ll cal = a[i]*(i) - a[i]*(n - 1 - i);
//        res = add(res, to_string(cal));
//    }
//    cout << res;
//    return 0;
//}









//// CSES - Counting Divisor | Đếm ước
//#include <bits/stdc++.h>
//#define MAX 1000001
//#define MOD 1000000007
//using namespace std;
//typedef long long ll;
//typedef unsigned long long ull;
//vector<ll> qod(MAX, 2);
//void sieve(){
//    qod[1] = 1;
//    for (int i = 2; i < MAX; i++){
//        for (int j = i * 2; j < (MAX); j += i){
//            qod[j] += 1;
//        }
//    }
//}
//int main()
//{
//    sieve();
////    for (int i = 0; i < 100; i++){
////        cout << i << " " << qod[i] << endl;
////    }
//    int n, x;
//    cin >> n;
//    while (n--){
//        cin >> x;
//        cout << qod[x] << endl;
//    }
//    return 0;
//}









//// CSES - Minimizing Coins | Giảm thiểu đồng xu
//#include <bits/stdc++.h>
//#define MAX 1000001
//#define MOD 1000000007
//typedef long long ll;
//using namespace std;
//int main()
//{
//    int n, x;
//    cin >> n >> x;
//    vector<ll> c(n);
//    for (ll& xV : c){
//        cin >> xV;
//    }
//    vector<ll> dp(x+1, LLONG_MAX - 1);
//    dp[0] = 1;
//    for (int i = 1; i <= x; i++){
//        for (int j = 0; j < n; j++){
//            if (i - c[j] > 0){
//                dp[i] = min(dp[i], dp[i - c[j]] + 1);
//            } else if (i - c[j] == 0){
//                dp[i] = 1;
//            }
//        }
//    }
//    if (dp[x] == LLONG_MAX - 1){
//        cout << -1;
//    }else{
//    cout << dp[x];
//    }
//    return 0;
//}









//// Tìm số hạng thứ n
//#include <bits/stdc++.h>
//#define MAX 1000001
//#define MOD 1000000007
//typedef unsigned long long ull;
//typedef long long ll;
//using namespace std;
//int main()
//{
//    ull n;
//    cin >> n;
//    ull res = 2 + (n-1)*3;
//    cout << res;
//    return 0;
//}









////  Đếm số
//#include <bits/stdc++.h>
//#define MAX 1000001
//#define MOD 1000000007
//typedef unsigned long long ull;
//typedef long long ll;
//using namespace std;
//int main()
//{
//    int n, x, value;
//    cin >> n >> x;
//    map<int , ll> mp;
//    for (int i = 0; i < n; i++){
//        cin >> value;
//        mp[value] += 1;
//    }
//    cout << mp[x];
//    return 0;
//}









//// Chess ? (Beginner #01)
//#include <bits/stdc++.h>
//#define MAX 1000001
//#define MOD 1000000007
//typedef unsigned long long ull;
//typedef long long ll;
//using namespace std;
//int main()
//{
//    int n;
//    cin >> n;
//    int xf, yf, xg, yg;
//    while (n--){
//        cin >> xf >> yf >> xg >> yg;
//        if (xf == xg || yf == yg){
//            cout << "YES\n";
//        } else {
//            cout << "NO\n";
//        }
//    }
//    return 0;
//}









//// Trọng lượng
//#include <bits/stdc++.h>
//#define MAX 1000001
//#define MOD 1000000007
//typedef unsigned long long ull;
//typedef long long ll;
//using namespace std;
//int main()
//{
//    int x, y, z;
//    cin >> x >> y >> z;
//    cout << (x - y + z) / 2 << ' ';
//    cout << (x + y - z) / 2 << ' ';
//    cout << (-x + y + z) / 2 << ' ';
//    return 0;
//}









//// CSES - Apartments | Căn hộ
//#include <bits/stdc++.h>
//#define MAX 1000001
//#define MOD 1000000007
//typedef unsigned long long ull;
//typedef long long ll;
//using namespace std;
//int main()
//{
//    int n, m, k;
//    cin >> n >> m >> k;
//    vector<ll> a(n);
//    for (ll& x : a){
//        cin >> x;
//    }
//    vector<ll> b(m);
//    for (ll& y : b){
//        cin >> y;
//    }
//    // lower_bound: đầu tiên; lớn hơn hoặc bằng.
//    // upper_bound: đầu tiên; lớn hơn.
//    sort(a.begin(), a.end());
//    sort(b.begin(), b.end());
////    for (int x : a){
////        cout << x << ' ';
////    }
////    cout << endl;
////    for (int y : b){
////        cout << y << " ";
////    }
////    cout << endl;
//    int pointer = 0;
//    ll res = 0;
//    for (int i = 0; i < n; i++){
//        while (pointer < m && b[pointer] < a[i] - k){
//            pointer += 1;
//        }
//        if (pointer < m && b[pointer] <= a[i] + k){
//            pointer += 1;
//            res += 1;
//        }
//    }
//    cout << res;
//    return 0;
//}









//// Thêm Không
//#include <bits/stdc++.h>
//#define MAX 1000001
//#define MOD 1000000007
//typedef unsigned long long ull;
//typedef long long ll;
//using namespace std;
//int main()
//{
//    int n, k;
//    cin >> n >> k;
//    vector<int> a(n);
//    for (int& x: a){
//        cin >> x;
//    }
//    for (int i = 0; i < k; i++){
//        a.push_back(0);
//    }
//    for (long unsigned int i = k; i < a.size(); i++){
//        cout << a[i] << ' ';
//    }
//    return 0;
//}









//// CSES - Stick Lengths | Độ dài que
//#include <bits/stdc++.h>
//#define MAX 1000001
//#define MOD 1000000007
//typedef unsigned long long ull;
//typedef long long ll;
//using namespace std;
//int main()
//{
//    int n;
//    cin >> n;
//    vector<ll> a(n);
//    for (ll & x : a){
//        cin >> x;
//    }
//    ll res = 0;
//    sort(a.begin(), a.end());
//    //Tại sao sử dụng trung vị?
//// * Trung vị là giá trị phân chia một tập hợp số thành hai nửa sao cho một nửa các số nhỏ hơn hoặc bằng nó và nửa còn lại lớn hơn hoặc bằng nó.
//// * Trung vị đảm bảo rằng tổng các khoảng cách tuyệt đối là nhỏ nhất, do đó đây là giá trị tối ưu để dùng trong bài toán này.
//    int median = a[n/2];
//    for (int x : a){
//        res += abs(x - median);
//    }
//    cout << res;
//    return 0;
//}









//// Hình bình hành dấu sao
//#include <iostream>
//using namespace std;
//int main()
//{
//    int wid, hei;
//    cin >> wid >> hei;
//    for (int i = 0; i < hei; i++){
//        for (int j = 0; j < i; j++)
//            cout << " ";
//        for (int j = 0; j < wid - 1; j++)
//            cout << "* ";
//        if (i < hei-1) cout << "* \n"; else cout << "*";
//    }
//    return 0;
//}









//// Tổng Cặp Tích
//#include <bits/stdc++.h>
//#define MAX 1000001
//#define MOD 1000000007
//typedef unsigned long long ull;
//typedef long long ll;
//using namespace std;
//int main()
//{
//    int n;
//    cin >> n;
//    vector<int> a(n);
//    for (int& x : a){
//        cin >> x;
//    }
//    ll sum = 0;
//    ll total_sum = 0;
//    for (int i = 0; i < n; i++){
//        total_sum = (total_sum + a[i]) % MOD;
//    }
//    for (int i = 0; i < n; i++){
//        total_sum = (total_sum - a[i] + MOD) % MOD;
//        // Lưu ý:
//        // - Khi thực hiện xử lý total_sum - a[i] phải cộng thêm cho MOD vì kết quả phép tính total_sum - a[i] có thể ra âm.
//        // n = 3; a[3] = {1; 2; 3};
//        // -> i = 1;
//        //      <> total_sum = 6 - 1 = 5;
//        //      <> sum = 0 + 1 * 5 = 5;
//        // -> i = 2;
//        //      <> total_sum = 5 - 2 = 3;
//        //      <> sum = 5 + 2 * 3 = 11;
//        sum = (sum + (total_sum * a[i]) % MOD) % MOD;
//    }
//    cout << sum;
//    return 0;
//}









//// Đếm cặp
//#include <bits/stdc++.h>
//#include <iostream>
//#define MAX 1000001
//#define MOD 1000000007
//typedef unsigned long long ull; //8 byte~64 bit
//typedef long long ll; // 8 byte~64 bit
//using namespace std;
//int main()
//{
//    long long L, R, T;
//    cin >> L >> R >> T;
//    long long res = 0LL;
//    for (long long i = L; i <= (T / 2) - (T < 0); i++){
//        if (T - i <= R && T != 2*i){
//            res += 1;
//            //cout << i << " " << T-i << endl;
//        }
//    }
//    cout << res;
//    return 0;
//}









//// Đếm cặp
//#include <bits/stdc++.h>
//#include <iostream>
//#define MAX 1000001
//#define MOD 1000000007
//typedef unsigned long long ull; //8 byte~64 bit
//typedef long long ll; // 8 byte~64 bit
//using namespace std;
//int main()
//{
//    int n, K;
//    cin >> n >> K;
//    vector<int> a(n);
//    map<int, ll> mp;
//    int res = 0;
//    for (int i = 0; i < n; i++){
//        cin >> a[i];
//        res += mp[K - (a[i] * a[i])];
//        mp[a[i]] += 1;
//    }
//    cout << res;
//    return 0;
//}









//// Đếm số âm dương
//#include <bits/stdc++.h>
//#include <iostream>
//#define MAX 1000001
//#define MOD 1000000007
//typedef unsigned long long ull; //8 byte~64 bit
//typedef long long ll; // 8 byte~64 bit
//using namespace std;
//int main()
//{
//    int n;
//    cin >> n;
//    int x;
//    ll pos = 0;
//    ll neg = 0;
//    for (int i = 0; i < n; i++){
//        cin >> x;
//        if (x > 0){
//            pos += 1;
//        }
//        else if (x < 0) {
//            neg += 1;
//        }
//    }
//    cout << neg << ' ' << pos;
//    return 0;
//}









//// Hai phần tử dễ thương
//#include <bits/stdc++.h>
//#include <iostream>
//#define MAX 1000001
//#define MOD 1000000007
//typedef unsigned long long ull; //8 byte~64 bit
//typedef long long ll; // 8 byte~64 bit
//using namespace std;
//pair<int, int> linearScan(vector<int> array) {
//	int n = array.size();
//	// Yêu cầu: Tìm 2 chỉ số i, j thỏa mãn 1 ≤ i < j ≤ n(1 ≤ i < j ≤ n) và array[j]−array[i] đạt giá trị LỚN NHẤT.
//	// Giải thuật: Duyệt tuần tự mảng array và tính toán độ chêch lệch LỚN NHẤT có thể.
//	// Tại mỗi chỉ số j cần tìm 1 chỉ số NHỎ NHẤT i thỏa mãn array[i] = min_Value[0, j).
//	// Ban đầu gỉa sử chỉ số i = 0 thỏa mãn y/c và độ chêch lệch LỚN NHẤT là maxDifference = INT_MIN.
//	int i = 0;
//	int maxDifference = INT_MIN;
//	pair<int, int> answerPair; // pair<chỉ số i, chỉ số j>
//	answerPair.first = 1;
//	for (int j = 1; j < array.size(); j++){
//		if (array[j] - array[i] > maxDifference) {
//			maxDifference = array[j] - array[i];
//			answerPair = {i+1, j+1};		}
//		if (array[i] > array[j]) {
//			i = j;
//		}
//	}
//	return answerPair;
//}
//int main()
//{
//    ios_base::sync_with_stdio(false);
//    cin.tie(NULL);
//    int n;
//    cin >> n;
//    vector<int> a(n);
//    priority_queue<int, vector<int>, greater<int>> MinHeap;
//    for (int& x : a){
//        cin >> x;
//    }
//    pair<int, int> res = linearScan(a);
//    cout << res.first << ' ' << res.second << endl << a[res.second-1] - a[res.first-1];
//    return 0;
//}









// Đánh giá số đẹp (HSG12'19-20)
#include <bits/stdc++.h>
#define MAX 1000001
#define MOD 1000000007
using namespace std;
typedef unsigned long long ull; //8 byte~64 bit
typedef long long ll; // 8 byte~64 bit
int main()
{
    ios_base::sync_with_stdio(false);
    // Hiện nay, xem ý nghĩa biển số xe, số điện thoại, ngày sinh hay một dãy số nào đó là điều quan tâm của nhiều người. Cách đánh giá số đẹp của dãy số như sau: Tính tổng các chữ số trong dãy, nếu tổng là số có
    // chữ thì đó là giá trị số đẹp (độ đẹp của dãy số), ngược lại thì tiếp tục tính tổng các chữ số trong dãy.
    cin.tie(NULL);
    long long n;
    cin >> n;
    if (n % 9 == 0) cout << 9;
    else cout << n % 9;
    return 0;
}
