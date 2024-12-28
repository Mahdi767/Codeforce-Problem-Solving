/**
 *    Author: Mahdi Hasan
 *    created: 2024-12-21,16:32:07
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
   int a,b,c;
   cin>>a>>b>>c;
    if (a > b) swap(a, b);
    if (b > c) swap(b, c);
    if (a > b) swap(a, b);
    int K1= b-a;
    int K2 = c-a;
    cout<<max(K1,K2);
}
int main() {
    mhm();
    return 0;
}