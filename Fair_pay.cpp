/**
 *    Author: Mahdi Hasan
 *    created: 2024-12-23,12:08:04
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
int x,y,z,xx;
cin>>x>>y>>z>>xx;
int mn1  = min(x,y);
int mn2 = min(z,xx);
int mx1 =max(x,y);
int mx2 = max(z,xx); 
if(mn1>mx2|| mn2>mx1){
  no;
    }else{
      yes;
    }

}}