/**
 *    Author: Mahdi Hasan
 *    created: 2024-12-28,15:00:48
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
 ll x;
    cin>>x;
if(x%2 == 0){
    cout<<x/2<<endl;
}else{
    cout<<x/2+1<<endl;
}
    }
    return 0;
}