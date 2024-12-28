/**
 *    Author: Mahdi Hasan
 *    created: 2024-12-26,10:09:56
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
 ll x1,x2,x3,x4;
 cin>>x1>>x2>>x3>>x4;

    if (x2 > x1) swap(x1, x2);
    if (x3 > x2) swap(x2, x3);
    if (x4 > x3) swap(x3, x4);
    if (x2 > x1) swap(x1, x2);
    if (x3 > x2) swap(x2, x3);
    if (x2 > x1) swap(x1, x2);
// cout<<x1<<x2<<x3<<x4;
cout<<x1-x2<<" "<<x1-x3<<" "<<x1-x4;


    return 0;
}