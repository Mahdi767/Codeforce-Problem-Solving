/**
 *    Author: Mahdi Hasan
 *    created: 2024-12-15,22:08:55
*/
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define f(i, n) for (int i = 0; i < n; i++)
#define s(a) a.begin(), a.end()
#define ss(a) sort(a, a + n)
#define pb push_back
void mhm(){
    ll m,a,b,c;
    cin>>m>>a>>b>>c;
    ll mn = min(m,a);
    ll rem = m-mn;
    ll row1 = min(rem,c);
    ll mn1 = min(m,b);
    ll rem1 = m-mn1;
    ll row2 = min(rem1,c-row1);
    ll tot = mn+row1+mn1+row2;
    cout<<tot<<endl;
}
int main() {
    int tc;
    cin >> tc;
    while (tc--) {
mhm();
    }
    return 0;
}