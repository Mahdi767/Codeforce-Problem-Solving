/**
 *    Author: Mahdi Hasan
 *    created: 2024-12-28,15:13:47
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
    ll a[n];
    ll cnt  = 0;
    for(ll i =0;i<n;i++){
        cin>>a[i];
    }
 
  for( auto x : a)
    if( x & 1)
        cnt++;
    
  cout<<min(cnt,n-cnt)<<endl;

    
}
}