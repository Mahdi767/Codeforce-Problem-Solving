/**
 *    Author: Mahdi Hasan
 *    created: 2024-12-24,21:27:30
*/
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define f(i, n) for (int i = 0; i < n; i++)
#define s(a) a.begin(), a.end()
#define ss(a) sort(a, a + n)
#define pb push_back
#define vc vector<int>
#define yes cout << "YES" << endl
#define no cout << "NO" << endl

int main() {
    int tc;
    cin >> tc;
    while (tc--) {
ll n;
cin>>n;
ll sum = 1;
for(ll i = 1;i<=n;i++){
sum*=i;
}
cout<<sum<<endl;
    }
    return 0;
}