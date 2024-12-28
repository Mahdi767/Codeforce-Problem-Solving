/**
 *    Author: Mahdi Hasan
 *    created: 2024-12-11,22:46:39
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
vector<ll>v;

for(ll i =1;i<=n;i=i+2) v.push_back(i);
for(ll i =2;i<=n;i=i+2) v.push_back(i);
cout<<v[k-1]<<endl;
    return 0;
}