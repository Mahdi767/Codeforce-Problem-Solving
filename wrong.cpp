/**
 *    Author: Mahdi Hasan
 *    created: 2024-12-12,22:17:02
*/
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define f(i, n) for (int i = 0; i < n; i++)
#define s(a) a.begin(), a.end()
#define ss(a) sort(a, a + n)
#define pb push_back

int main() {
ll n,k;
cin>>n>>k;
for(ll i = 1;i<=k;i++){
if(n%10==0) n=n/10;
else n= n-1;
}
cout<<n;
    return 0;
}