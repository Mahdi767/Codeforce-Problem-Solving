/**
 *    Author: Mahdi Hasan
 *    created: 2024-12-12,20:29:29
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
string s;
cin>>s;
if(s=="abc"|| s=="acb"||s=="bac"||s=="cba") cout<<"YES"<<endl;
   else cout<<"NO"<<endl;
    }
}