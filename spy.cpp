/**
 *    Author: Mahdi Hasan
 *    created: 2024-12-22,20:17:38
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
    int n;
    cin>>n;
    int a[n];
   for(int i = 1;i<=n;i++){
        cin>>a[i];
    }
    vc v(n);
      for(int i = 1;i<=n;i++){
       v.push_back(a[i]);
       
    }
       

}
int main() {
    int tc;
    cin >> tc;
    while (tc--) {
mhm();
    }
    return 0;
}