/**
 *    Author: Mahdi Hasan
 *    created: 2024-12-12,20:14:09
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
    int cnt=0;
    while (tc--) {
int p,q;
cin>>p>>q;
if(p<q && q-p>=2)
cnt++;
    }
    cout<<cnt;
    return 0;
}