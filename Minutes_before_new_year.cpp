/**
 *    Author: Mahdi Hasan
 *    created: 2024-12-22,20:08:25
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
int n,m;
cin>>n>>m;
int result =  (23-n)*60 + (60-m);
cout<<result<<endl;
}
int main() {
    int tc;
    cin >> tc;
    while (tc--) {
mhm();
    }
    return 0;
}