/**
 *    Author: Mahdi Hasan
 *    created: 2024-12-28,21:54:36
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
  int  n, k, l, c, d, p, nl, np;
  cin>> n>>k>>l>>c>>d>>p>>nl>>np;
int overall = k*l;
int enough = overall/nl;
int toast = c*d;
int salt = p / np;
int ans1 = min(enough,toast);
int ans2 =min(ans1,salt);
int final = ans2/n;
cout<<final;
    return 0;
}