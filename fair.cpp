#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define f(i, n) for (int i = 0; i < n; i++)
#define s(a) a.begin(), a.end()
#define ss(a) sort(a, a + n)
#define pb push_back

int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int n;
        cin >> n;
        int a[n];
        f(i, n) {
            cin >> a[i];
        }
        int cnt1 = 0, cnt2 = 0;
        f(i, n) {
            if (a[i] == 1) {
                cnt1++;
            } else {
                cnt2++;
            }
        }
        if ((cnt1 % 2 == 0 && cnt2 % 2 == 0) || 
            (cnt1 > 0 && cnt2 % 2 != 0 && cnt1 % 2 == 0)) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    return 0;
}
