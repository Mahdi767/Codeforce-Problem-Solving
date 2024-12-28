/**
 *    Author: Mahdi Hasan
 *    created: 2024-12-20,12:15:35
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
void mhm(){
ll n;
cin>>n;
vc a(n);
f(i,n){
cin>>a[i];
}
f(i,n){
int mx = max(a[i],a[i+1]);
int mn = min(a[i],a[i+1]);

}

}
int main() {
    int t;
    cin>>t;
    while(t--){
  mhm();
    }
    return 0;
}