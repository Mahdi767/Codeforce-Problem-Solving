/**
 *    Author: Mahdi Hasan
 *    created: 2024-12-16,10:36:50
 */
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define f(i, n) for (int i = 0; i < n; i++)
#define s(a) a.begin(), a.end()
#define ss(a) sort(a, a + n)
#define pb push_back

void mhm() {
    string s, ref = "codeforces";
    cin >> s;
    int cnt = 0;
    for (int i = 0; i < ref.size(); i++) {
        if (i >= s.size() || s[i] != ref[i]) {
            cnt++;
        }
    }

    cout << cnt << endl;
}

int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        mhm();
    }
    return 0;
}
