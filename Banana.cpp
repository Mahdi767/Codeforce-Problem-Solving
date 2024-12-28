/**
 *    Author: Mahdi Hasan
 *    created: 2024-12-13,22:07:09
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
  ll k,n,w;
  cin>>k>>n>>w;
ll sum=0;
  for(ll i = 1;i<=w;i++){
sum += i*k;
  }
if(n>=sum) cout<<"0";
else cout<<sum-n;
    return 0;
}