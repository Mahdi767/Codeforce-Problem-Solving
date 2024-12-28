/**
 *    Author: Mahdi Hasan
 *    created: 2024-12-26,22:25:24
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
void solve(){
    int n;
    cin>>n;
    int a[n];
    f(i,n){
cin>>a[i];
    }
    int sum1=0,sum2=0;
    f(i,n){
if(a[i]%2==0){
    sum1+=a[i];
}else{
    sum2+=a[i];
}
    }
    if(sum1 % 2 == 0 && sum2 % 2 ==0) yes;
    else no;
}
int main() {
    int tc;
    cin >> tc;
    while (tc--) {
solve();
    }
    return 0;
}