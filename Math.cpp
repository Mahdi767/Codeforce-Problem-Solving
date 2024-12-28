/**
 *    Author: Mahdi Hasan
 *    created: 2024-12-12,19:52:32
*/
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define f(i, n) for (int i = 0; i < n; i++)
#define s(a) a.begin(), a.end()
#define ss(a) sort(a, a + n)
#define pb push_back

int main() {
  ll n;
  cin>>n;
  if(n%2==0) cout<<n/2;
  else{
    cout<<-(n+1)/2;
  }
//   ll sum1=0;
//   ll sum2 =0;
//   for(ll i=1;i<=n;i++){
// if(i%2==0) sum1+=i;
  
//   else sum2-=i;
//   }
//   cout<<sum1+sum2;
    return 0;
}