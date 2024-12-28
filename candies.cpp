/**
 *    Author: Mahdi Hasan
 *    created: 2024-12-15,20:25:59
*/
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
ll n;
    cin>>n;
   if(n%2 != 0) cout<<n/2<<endl;
else cout<<n/2-1<<endl;
    }
    return 0;
}