#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define f(i, n) for (int i = 0; i < n; i++)
#define s(a) a.begin(), a.end()
#define ss(a) sort(a.begin(), a.end())
#define pb push_back

int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int n;
        cin >> n;

        vector<int> a(n); // Using vector instead of array

        f(i, n) {
            cin >> a[i];
        }

        ss(a); // Sort array
        
        if (n == 1) {
            cout << "YES" << endl; // Single element, always sorted
            return 0;
        }

        int cnt = 0;
        f(i, n - 1) { // Correct loop range
            if (a[i] < a[i + 1]) {
                cnt++;
            }
        }

        if (cnt > 0) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    return 0;
}
