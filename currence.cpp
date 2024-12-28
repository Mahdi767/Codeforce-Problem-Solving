/**
 *    Author: Mahdi Hasan
 *    created: 2024-12-18,22:18:14
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
  int n;
  cin>>n;
  int a[n];
  bool bn = false;
  f(i,n){
    cin>>a[i];
        if(a[i]==1)// cout<<"-1";
bn = true;
  }
   if(bn) cout<<"-1";
   else cout<<"1";
    return 0;
}