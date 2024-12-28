/**
 *    Author: Mahdi Hasan
 *    created: 2024-12-10,14:30:22
*/
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define f(i, n) for (int i = 0; i < n; i++)
#define s(a) a.begin(), a.end()
#define ss(a) sort(a, a + n)
#define pb push_back

int main() {
    // int tc;
    // cin >> tc;
    // while (tc--) {
ll n,m,a;
cin>>n>>m>>a;
ll result = ((m+a-1)/a)*((n+a-1)/a);
cout<<result;
    //}
    return 0;
}